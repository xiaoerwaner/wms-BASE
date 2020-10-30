/********************************************************************************
** Form generated from reading UI file 'modify_password.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_PASSWORD_H
#define UI_MODIFY_PASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modify_password
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *modify_password)
    {
        if (modify_password->objectName().isEmpty())
            modify_password->setObjectName(QString::fromUtf8("modify_password"));
        modify_password->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\344\277\256\346\224\271\345\233\276\346\240\207/document-write.ico"), QSize(), QIcon::Active, QIcon::On);
        modify_password->setWindowIcon(icon);
        modify_password->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        gridLayout = new QGridLayout(modify_password);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(modify_password);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_4, 3, 2, 1, 1);

        lineEdit_4 = new QLineEdit(modify_password);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));
        lineEdit_4->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_4, 3, 3, 1, 1);

        label = new QLabel(modify_password);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(modify_password);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lineEdit = new QLineEdit(modify_password);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(modify_password);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(modify_password);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit_2, 0, 3, 1, 1);

        label_2 = new QLabel(modify_password);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        pushButton = new QPushButton(modify_password);
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

        gridLayout->addWidget(pushButton, 4, 0, 1, 2);

        pushButton_2 = new QPushButton(modify_password);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(pushButton_2, 4, 2, 1, 2);


        retranslateUi(modify_password);

        QMetaObject::connectSlotsByName(modify_password);
    } // setupUi

    void retranslateUi(QWidget *modify_password)
    {
        modify_password->setWindowTitle(QApplication::translate("modify_password", "Form", nullptr));
        label_4->setText(QApplication::translate("modify_password", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label->setText(QApplication::translate("modify_password", "\347\231\273\345\275\225\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("modify_password", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("modify_password", "\345\275\223\345\211\215\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("modify_password", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QApplication::translate("modify_password", "\346\224\276\345\274\203\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify_password: public Ui_modify_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_PASSWORD_H
