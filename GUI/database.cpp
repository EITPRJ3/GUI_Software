#include "database.h"
#include <QFile>
#include <QString>
#include "QDebug"
#include "QTextStream"

const int NUMBERSOFCHOICES = 5;

void createDatabase()
{
    QString name ="database.txt";
    QFile mDatabase(name);

    if(!mDatabase.exists())
    {
        qDebug() << "Fil findes ikke - oprettes" <<endl;
        mDatabase.open(QFile::WriteOnly);

        QTextStream textStream(&mDatabase);

        for(int i = 0; i < NUMBERSOFCHOICES ; i++)
        {
            textStream << 0 << endl;
        }

        mDatabase.close();
    }

}

void databaseCountUp(int line)
{
    QString name ="database.txt";
    QFile mDatabase(name);

    if(!mDatabase.exists())
    {
        createDatabase();
    }

    if(!mDatabase.open(QFile::ReadWrite))
    {
        qDebug() << "Filen findes ikke" <<endl;
        return;
    }

    if( line < 0 || line > 5)
    {
        return;
    }

    int data[NUMBERSOFCHOICES];

    for(int i = 0; i < NUMBERSOFCHOICES ; i++)
    {
        QString dataString = mDatabase.readLine();
        data[i] = dataString.toInt();
        qDebug() << data[i] << endl;
    }

    data[line] += 1;

    mDatabase.resize(0); //Sletter alt data i filen

    QTextStream textStream(&mDatabase);

    for(int i = 0; i < NUMBERSOFCHOICES ; i++)
    {
        textStream << data[i] << endl;
    }

    mDatabase.close();
}

void databaseRead()
{

}

void databaseReadLine(int line)
{

}

void clearDatabase()
{
    QString name ="database.txt";
    QFile mDatabase(name);

    if(!mDatabase.open(QFile::WriteOnly))
    {
        qDebug() << "Filen kan ikke åbnes og kan derfor ikke nulstilles" <<endl;
        return;
    }

    mDatabase.resize(0);


    QTextStream textStream(&mDatabase);

    for(int i = 0; i < NUMBERSOFCHOICES ; i++)
    {
        textStream << 0 << endl;
    }

    mDatabase.close();

}
