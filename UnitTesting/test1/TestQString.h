#include <QtTest/QtTest>
#include <QString>
//#include "testqstring.moc"

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};

QTEST_MAIN(TestQString)
