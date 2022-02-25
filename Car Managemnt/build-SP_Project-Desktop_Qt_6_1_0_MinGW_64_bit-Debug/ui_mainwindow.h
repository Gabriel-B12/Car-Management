/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QTableWidget *tabel;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *label;
    QFrame *line;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QFrame *line_2;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1004, 409);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}\n"
"QWidget>QPushButton{\n"
"    background-color:  rgb(43, 43, 43);\n"
"	width: 150px;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"	color: rgb(85, 255, 255);\n"
"}\n"
"QWidget>QPushButton:pressed{\n"
"    background-color: black;\n"
"   \n"
"}\n"
"QWidget>QPushButton:hover{\n"
"    \n"
"	border-color: rgb(0, 0, 127);\n"
"   \n"
"}\n"
"QWidget>QTableWidget{\n"
"  color: rgb(222, 105, 89);\n"
" background: rgb(43, 43, 43);\n"
"font:bold 14px;\n"
"\n"
"  \n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        tabel = new QTableWidget(widget_2);
        if (tabel->columnCount() < 12)
            tabel->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabel->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        tabel->setObjectName(QString::fromUtf8("tabel"));
        tabel->setGeometry(QRect(170, 90, 581, 241));
        tabel->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 200, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 320, 131, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 280, 131, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 131, 31));
        pushButton->setStyleSheet(QString::fromUtf8("	height:20px;\n"
"	width:120px;"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 481, 61));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: bold 28pt ;"));
        line = new QFrame(widget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 0, 31, 391));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 350, 176, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_7 = new QPushButton(widget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(560, 350, 176, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 111, 111));
        label_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 240, 131, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        line_2 = new QFrame(widget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(760, -10, 16, 411));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(810, 40, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: bold 22pt ;"));
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(780, 90, 201, 241));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);\n"
"  color: rgb(222, 105, 89);\n"
"font: bold 14px;"));
        pushButton_8 = new QPushButton(widget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(830, 350, 101, 31));
        pushButton_9 = new QPushButton(widget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(760, 0, 16, 391));

        horizontalLayout_2->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Culoare", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabel->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "An", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabel->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Nr loc", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabel->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Capacitate ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabel->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Nr inm", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabel->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Putere", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabel->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Combustibil", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabel->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Nr KM", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tabel->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Data expirare RCA", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tabel->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Data expirare ITP", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Stergere", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Save data", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Adaugare", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CAR  MANAGEMENT  APP", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Editare tabel", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Save changes", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Cautare", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Notificari", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
