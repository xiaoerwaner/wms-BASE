/********************************************************************************
** Form generated from reading UI file 'find_password.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_PASSWORD_H
#define UI_FIND_PASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_password
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *find_password)
    {
        if (find_password->objectName().isEmpty())
            find_password->setObjectName(QString::fromUtf8("find_password"));
        find_password->resize(298, 241);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/Find.png"), QSize(), QIcon::Normal, QIcon::On);
        find_password->setWindowIcon(icon);
        find_password->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.500273, y1:0.438, x2:0.500727, y2:0.909, stop:0 rgba(190, 154, 124, 255), stop:0.971591 rgba(96, 71, 62, 255));\n"
"}\n"
"\n"
"QMessageBox {   border-color:#32435E; border-width:1px; border-radius: 3px;\n"
"  min-width:30px; min-height:23px;\n"
"  /*font-family:\"\345\256\213\344\275\223\";font-size:36px;*/\n"
"  border-image:url(./config/qss/style_1/images/messageBox_background.png);\n"
"  height: 300px;\n"
"  width: 200px;\n"
"  border: none;\n"
"}"));
        gridLayout = new QGridLayout(find_password);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(find_password);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(find_password);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 10pt \"\346\245\267\344\275\223\";\n"
"background-color:rgb(158, 158, 118);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(find_password);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(find_password);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 10pt \"\346\245\267\344\275\223\";\n"
"background-color:rgb(158, 158, 118);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton = new QPushButton(find_password);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{  \n"
"color:rgb(255, 255, 255);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:solid;  \n"
"background-color:rgb(255, 85, 0);\n"
"border-radius:5px;padding:2px 4px;/*border-radius\346\216\247\345\210\266\345\234\206\350\247\222\345\244\247\345\260\217*/  \n"
"}  \n"
"QPushButton:hover{  /*\351\274\240\346\240\207\346\224\276\344\270\212\345\220\216*/  \n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background-color:rgb(190, 154, 124, 255);\n"
"border:1px;  \n"
"border-radius:5px;padding:2px 4px;  \n"
"}  \n"
"QPushButton:pressed{ /*\346\214\211\344\270\213\346\214\211\351\222\256\345\220\216*/  \n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"                 "
                        "           stop: 0.3 rgb(190,190,190),  \n"
"                              stop: 1 rgb(160,160,160));  \n"
"border:1px;  \n"
"border-radius:5px;padding:2px 4px;  \n"
"}  \n"
"QPushButton:checked{    /*\351\200\211\344\270\255\345\220\216*/  \n"
"color:rgb(255, 255, 255);  \n"
"min-height:20;  \n"
"border-style:solid;  \n"
"border-top-left-radius:2px;  \n"
"border-top-right-radius:2px;  \n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241),   \n"
"                            stop: 0.3 rgb(190,190,190),  \n"
"                              stop: 1 rgb(160,160,160));  \n"
"border:1px;  \n"
"border-radius:5px;padding:2px 4px;  \n"
"}  "));

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);


        retranslateUi(find_password);

        QMetaObject::connectSlotsByName(find_password);
    } // setupUi

    void retranslateUi(QWidget *find_password)
    {
        find_password->setWindowTitle(QApplication::translate("find_password", "Form", nullptr));
        label->setText(QApplication::translate("find_password", "\347\231\273\351\231\206\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("find_password", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("find_password", "\346\237\245             \350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find_password: public Ui_find_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_PASSWORD_H
