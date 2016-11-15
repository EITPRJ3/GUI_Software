#include "database.h"
#include <QFile>
#include <QString>
#include "QDebug"
#include "QTextStream"

const int NUMBERSOFCHOICES = 5;
const QString name ="database.txt";

void createDatabase()
{
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

void databaseRead(int *arrayPtr, int size)
{
    QFile mDatabase(name);

    if(!mDatabase.exists())
    {
        qDebug() << "No database to read" <<endl;
        return;
    }

    if(!mDatabase.open(QFile::ReadOnly))
    {
        qDebug() << "Filen kan ikke åbnes" <<endl;
        return;
    }

        for(int i = 0; i < size ; i++ )
        {
            QString dataString = mDatabase.readLine();
            arrayPtr[i] = dataString.toInt();
        }

    mDatabase.close();

}

void databaseReadLine(int line)
{

}

void clearDatabase()
{
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
