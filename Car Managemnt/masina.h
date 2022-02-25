#ifndef MASINA_H
#define MASINA_H

#include "motor.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTableWidget>
#include <QComboBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTextBrowser>
#include <QDateTime>


class masina{
    motor *m;
    QString marca,model;
    QString culoare,inmatriculare,rca,itp;
    int an,nr_loc;
    long nr_km;



    public:
        static QList<masina*> lista;
        static QTextBrowser *notificari1;

        masina(QString inmatriculare="",float capacitate=0, int putere=0,QString combustibil="",QString marca="",QString model="",QString culoare="",int an=0,int nr_loc=0,long nr_km=0,QString rca="",QString itp="");
        masina& operator +=(int a);
        QString getMarca()const;
        QString getModel()const;
        QString getCuloare()const;
        QString getInmatriculare()const;
        QString getRca()const;
        QString getItp()const;
        int getAn()const;
        int getNr_loc()const;
        motor* getM()const;
        long getKm()const;


        friend QTextStream &  operator << (QTextStream &, const masina &);

        friend QTextStream &  operator << (QTextStream &,  masina *);

        void replace(QString i0,QString i1,QString i2,QString i3,QString i4,QString i5,QString i6,QString i7,QString i8,QString i9,QString i10,QString i11);

        static void datatotable(QTableWidget *tabel);

        static void datatotable1(QTableWidget *tabel);

        static void readfromfile(QString myfile);

        static void writetofile(QString myfile);

        static void notificari();

        virtual ~masina();

};







#endif // MASINA_H
