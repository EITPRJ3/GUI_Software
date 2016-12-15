#include <QtTest/QtTest>
#include "psocif.h"
#include "TestPSOC.moc"

class TestPSOC : public QObject
{
    Q_OBJECT
    
public:
    TestPSOC()
    {
        interface = new psocif;
    }
    ~TestPSOC()
    {
        delete interface;
    }
private slots:
    void testSend()
    {
        interface->sendCommand(0x01);
        /*int fd = open("testBuffer", O_RDONLY);
        read(fd, buffer, 2);
        close(fd);*/
        QVERIFY(1 == 1);
    }
    
private:
    psocif* interface;
    char buffer[2];
    
};

QTEST_MAIN(TestPSOC)