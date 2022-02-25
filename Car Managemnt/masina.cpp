#include "masina.h"


QString myfile="C:/Folder/file.txt";
QList<masina*> masina::lista;
QTextBrowser *masina::notificari1;

//Constructorul clasei masina
masina::masina(QString inm,float capacitate, int putere,QString combustibil,QString marca,QString model,QString culoare,int an,int nr_loc,long nr_km,QString rca,QString itp)
{
     this->marca=marca;
     this->model=model;
     this->culoare=culoare;
     this->an=an;
     this->nr_loc=nr_loc;
     this->nr_km=nr_km;
     this->inmatriculare=inm;
     this->rca=rca;
     this->itp=itp;
     m = new motor(capacitate,putere,combustibil);
}

//Suprascrierea operatorului +=
masina& masina::operator +=(int a)
{
    this->nr_km+=a;
    return *this;
}

//Destructorul clasei masina
masina::~masina(){
    delete m;
}

// get pentru fiecare membru al clasei
long masina::getKm()const {return nr_km;}
QString masina::getMarca()const{return marca;}
QString masina::getModel()const{return model;}
QString masina::getCuloare()const{return culoare;}
int masina::getAn()const{return an;}
int masina::getNr_loc()const{return nr_loc;}
motor* masina::getM()const{return m;}
QString masina::getInmatriculare()const{return inmatriculare;}
QString masina::getRca()const{return rca;}
QString masina::getItp()const{return itp;}

//Supraincarcarea operatorului <<
QTextStream & operator << (QTextStream &out, const masina &x){
    out<<x.inmatriculare<<";"<<x.getM()->getCapacitate()<<";"<<x.getM()->getPutere()<<";"<<x.getM()->getCombustibil()<<";";
    out<<x.marca<<";"<<x.model<<";"<<x.culoare<<";"<<x.an<<";"<<x.nr_loc<<";"<<x.nr_km<<";"<<x.rca<<";"<<x.itp<<"\n";
    return out;
}

//Supraincarcarea operatorului >>
QTextStream & operator >> (QTextStream &in, masina *x){
    QString text;
    text= in.readLine();
    QStringList elements = text.split(';');

    x=new masina(elements[0].toUpper(),elements[1].toFloat(),elements[2].toInt(),elements[3].toUpper(),elements[4].toUpper(),elements[5].toUpper(),elements[6].toUpper(),elements[7].toInt(),elements[8].toInt(),
            elements[9].toLong(),elements[10].toUpper(),elements[11].toUpper());
   masina::lista.append(x);
   return in;


}


// Functia statica WriteToFile - scrie intru-un fisier datele din lista cu masini
void masina::writetofile(QString name)
{

    QFile file(name);
    file.open(QFile::WriteOnly| QFile::Text);

    QTextStream out(&file);
    out<<lista.size()<<"\n";
    for(int i=0;i<lista.size();i++)
    {
        out<<*lista[i];
    }
    file.close();
}

// Functia replace inlocuieste toate variabiele unui obiect de tip masina
void masina::replace(QString i0,QString i1,QString i2,QString i3,QString i4,QString i5,QString i6,QString i7,QString i8,QString i9,QString i10,QString i11){

    marca=i0.toUpper();
    model=i1.toUpper();
    culoare=i2.toUpper();
    an=i3.toInt();
    nr_loc=i4.toInt();
    m->setCapacitate(i5.toFloat());
    inmatriculare=i6.toUpper();
    m->setPutere(i7.toInt());
    m->setCombustibil(i8.toUpper());
    nr_km=i9.toLong();
    rca=i10.toUpper();
    itp=i11.toUpper();


}

// Functia statica ReadFromFile - citeste  dintru-un fisier datele pe care le stocheaza inntr-o lista
void masina::readfromfile(QString myfile){
    QFile file(myfile);
    if(!file.open(QFile::ReadOnly| QFile::Text))
    {
        qDebug()<<"Nu s-a putut deschide fisierul";
        return;
    }
    QTextStream in(&file);
    int n;
    in>>n;
    in.skipWhiteSpace();

    for(int i=0;i<n;i++)
    {
       masina * nou=new masina;
       in>>nou;
    }

    file.close();
}

// DataToTable este o functie statica care va pune toate masinile din lista intr-un tabel
void masina::datatotable(QTableWidget *tabel){
    QTableWidgetItem *item1,*item2,*item3,*item4,*item5,*item6,*item7,*item8,*item9,*item10,*item11,*item12;
    tabel->setColumnCount(12);
    tabel->setRowCount(lista.size());
    for(int i=0;i<lista.size();i++)
    {       
        item1 = new QTableWidgetItem(lista[i]->marca);
        item2 = new QTableWidgetItem(lista[i]->model);
        item3 = new QTableWidgetItem(lista[i]->culoare);
        item4 = new QTableWidgetItem(QString::number(lista[i]->an));
        item5 = new QTableWidgetItem(QString::number(lista[i]->nr_loc));
        item6 = new QTableWidgetItem(QString::number(lista[i]->getM()->getCapacitate()));
        item7 = new QTableWidgetItem((lista[i]->inmatriculare));
        item8 = new QTableWidgetItem();
        item8->setData(0,lista[i]->getM()->getPutere());
        item9 = new QTableWidgetItem(lista[i]->getM()->getCombustibil());
        item10 = new QTableWidgetItem();
        QVariant value= QVariant::fromValue(lista[i]->nr_km);
        item10->setData(0,value);

        item11 = new QTableWidgetItem();
        QVariant value1= QVariant::fromValue(lista[i]->rca);
        item11->setData(0,value1);

        item12 = new QTableWidgetItem();
        QVariant value2= QVariant::fromValue(lista[i]->itp);
        item12->setData(0,value2);

        tabel->setItem(i,0,item1);
        tabel->setItem(i,1,item2);
        tabel->setItem(i,2,item3);
        tabel->setItem(i,3,item4);
        tabel->setItem(i,4,item5);
        tabel->setItem(i,5,item6);
        tabel->setItem(i,6,item7);
        tabel->setItem(i,7,item8);
        tabel->setItem(i,8,item9);
        tabel->setItem(i,9,item10);
        tabel->setItem(i,10,item11);
        tabel->setItem(i,11,item12);
    }
    tabel->setColumnWidth(0,100);
    tabel->setColumnWidth(1,60);
    tabel->setColumnWidth(2,70);
    tabel->setColumnWidth(3,40);
    tabel->setColumnWidth(4,50);
    tabel->setColumnWidth(5,65);
    tabel->setColumnWidth(6,80);
    tabel->setColumnWidth(7,50);
    tabel->setColumnWidth(8,100);
    tabel->setColumnWidth(9,70);
    tabel->setColumnWidth(10,120);

    QList<QTableWidgetItem*> itemList;
    for (int row = 0 ; row < tabel->rowCount() ; ++row) {
    for (int col = 0 ; col < tabel->columnCount() ; ++col) {
    itemList << tabel->item(row, col);
    }
    }
    foreach (QTableWidgetItem * i, itemList) {
        i->setFlags(i->flags() &  ~Qt::ItemIsEditable & ~Qt::ItemIsSelectable);
    }
}

// DataToTable1 - pune doar anumite caractersitici ale masinilor intr-un tabel
void masina::datatotable1(QTableWidget *tabel){
    QTableWidgetItem *item1,*item2,*item3,*item4;
    tabel->setColumnCount(4);
    tabel->setRowCount(lista.size());
    for(int i=0;i<lista.size();i++)
    {
        item1 = new QTableWidgetItem(lista[i]->marca);
        item2 = new QTableWidgetItem(lista[i]->model);
        item3 = new QTableWidgetItem(QString::number(lista[i]->an));
        item4 = new QTableWidgetItem(lista[i]->inmatriculare);

        tabel->setItem(i,0,item1);
        tabel->setItem(i,1,item2);
        tabel->setItem(i,2,item3);
        tabel->setItem(i,3,item4);

    }
    tabel->setColumnWidth(0,100);
    tabel->setColumnWidth(1,65);
    tabel->setColumnWidth(2,50);
    tabel->setColumnWidth(3,150);


    QList<QTableWidgetItem*> itemList;
    for (int row = 0 ; row < tabel->rowCount() ; ++row) {
    for (int col = 0 ; col < tabel->columnCount() ; ++col) {
    itemList << tabel->item(row, col);
    }
    }
    foreach (QTableWidgetItem * i, itemList) {
        i->setFlags(i->flags() &  ~Qt::ItemIsEditable & ~Qt::ItemIsSelectable);
    }
}

//Functia notificari actualizeza notificarile construindu-se un string
void masina::notificari(){

    QString t="";
    QDateTime data= QDateTime::currentDateTime();
    QDateTime data1;


    for(int i=0;i<lista.size();i++)
    {
        data1=QDateTime::fromString(lista[i]->rca,"dd/MM/yyyy");
        if(data1<data)
            t=t+"\u2022RCA expirat: "+lista[i]->marca+" "+lista[i]->model+" "+lista[i]->inmatriculare+"\n";
        data1=QDateTime::fromString(lista[i]->itp,"dd/MM/yyyy");
        if(data1<data)
            t=t+"\u2022ITP expirat: "+lista[i]->marca+" "+lista[i]->model+" "+lista[i]->inmatriculare+"\n";


    }
    if(t=="")
        t=t+"Nu exista notificari";
    notificari1->setText(t);
}
