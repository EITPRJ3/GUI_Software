#include <QString>
#include <QtTest>
#include "psocif.h"
#include "spicontroller.h"

class PRJ3_UnitTestTest : public QObject
{
    Q_OBJECT

public:
    PRJ3_UnitTestTest();

private Q_SLOTS:

    /* TEST PSOCIF */
    void testSendCommand();
    void testReadErrorState_NOERROR();
    void testReadErrorState_WATER_ERROR();
    void testReadErrorState_COFFEE_ERROR();
    void testReadErrorState_BOTH_ERROR();
    void testReadyToBrew_READY();
    void testReadyToBrew_NOT_READY();
    void testBrewingDone_DONE();
    void testBrewingDone_NOT_DONE();

    /* TEST SPIWORKER */
    void testSpiworker_CAN_EMIT();
    /* TEST SPICONTROLLER */
    void testSpicontroller_CREATES_NEW_THREAD();
    void testSpicontroller_CAN_EMIT();

private:
    psocif* interface;
};

PRJ3_UnitTestTest::PRJ3_UnitTestTest()
{
    interface = new psocif;
}

void PRJ3_UnitTestTest::testSendCommand()
{
    char buffer[1];
    interface->sendCommand(0x01);
    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_RDONLY);
    read(fd, buffer, 1);
    QVERIFY(buffer[0] == '1');
}

void PRJ3_UnitTestTest::testReadErrorState_NOERROR()
{
    //First: Write the code for "No Error" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0);  //Code for No Error

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    char response = interface->readErrorState();
    QVERIFY(response == 0);
}

void PRJ3_UnitTestTest::testReadErrorState_WATER_ERROR()
{
    //First: Write the code for "Water Error" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0x1);  //Code for No Water

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    char response = interface->readErrorState();
    QVERIFY(response == 0x1);
}

void PRJ3_UnitTestTest::testReadErrorState_COFFEE_ERROR()
{
    //First: Write the code for "Coffee Error" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0x2);  //Code for No Coffee

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    char response = interface->readErrorState();
    QVERIFY(response == 0x2);
}

void PRJ3_UnitTestTest::testReadErrorState_BOTH_ERROR()
{
    //First: Write the code for "Error on both" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0x3);  //Code for No Water No Coffee

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    char response = interface->readErrorState();
    QVERIFY(response == 0x3);
}

void PRJ3_UnitTestTest::testReadyToBrew_READY()
{
    //First: Write the code for "Error on both" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0x0);  //Code for No Error

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    QVERIFY(interface->readyToBrew());
}

void PRJ3_UnitTestTest::testReadyToBrew_NOT_READY()
{
    //First: Write the code for "Error on both" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    sprintf(buffer, "%d", 0x3);  //Code for No Water No Coffee

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    QVERIFY(!(interface->readyToBrew()));
}

void PRJ3_UnitTestTest::testBrewingDone_DONE()
{
    //First: Write the code for "Error on both" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    buffer[0] = 0b10100;
    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    QVERIFY(interface->brewingDone());
}

void PRJ3_UnitTestTest::testBrewingDone_NOT_DONE()
{
    //First: Write the code for "Error on both" in the testBuffer.
    //For reference see Protocol Description
    char buffer[1];
    buffer[0] = 0b00000;

    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    QVERIFY(!(interface->brewingDone()));
}

/* TEST SPIWORKER */
void PRJ3_UnitTestTest::testSpiworker_CAN_EMIT()
{
    /*
     * First: Write command for brewing done in testBuffer.
     * Then: Connect the spy to the resultReady() signal on the SPIWorker
     * Then: Check if the spy caught an emitted signal.
     */
    char buffer[1];
    buffer[0] = 0b10100;
    int fd = open("/home/stud/devel/TestPSOC/testBuffer.txt", O_TRUNC | O_CREAT | O_RDWR);
    write(fd, buffer, strlen("1"));
    close(fd);

    SPIWorker* worker = new SPIWorker;
    QSignalSpy spy(worker, SIGNAL(resultReady() ) );
    worker->operate(1);
    QCOMPARE(spy.count(), 1); //Check if the signal was emitted.
}

/* TEST SPI CONTROLLER*/
void PRJ3_UnitTestTest::testSpicontroller_CREATES_NEW_THREAD()
{
    SpiController* controller = new SpiController;
    controller->start(1);
    QVERIFY(controller->isThreadRunning());
}

void PRJ3_UnitTestTest::testSpicontroller_CAN_EMIT()
{
    SpiController* cont = new SpiController;
    QSignalSpy spy(cont, SIGNAL(orderCoffee(int)));
    cont->start(1);
    QCOMPARE(spy.count(), 1); //Check if signal was emitted once.
    QList<QVariant> args = spy.takeFirst(); //Save the argument passed in the signal.
    QVERIFY(args.at(0) == 1); //Verify that the correct argument was passed.
}


QTEST_APPLESS_MAIN(PRJ3_UnitTestTest)

#include "tst_prj3_unittesttest.moc"
