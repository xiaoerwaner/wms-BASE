/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QToolButton *toolButton_3;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(414, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/man key.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/icons/CQUPT.ico"), QSize(), QIcon::Active, QIcon::On);
        loginDialog->setWindowIcon(icon);
        loginDialog->setStyleSheet(QString::fromUtf8("QMessageBox {   border-color:#32435E; border-width:1px; border-radius: 3px;\n"
"  min-width:30px; min-height:23px;\n"
"  /*font-family:\"\345\256\213\344\275\223\";font-size:36px;*/\n"
"  border-image:url(./config/qss/style_1/images/messageBox_background.png);\n"
"  height: 300px;\n"
"  width: 200px;\n"
"  border: none;\n"
"}\n"
"QDialog{\n"
"background-color: qlineargradient(spread:pad, x1:0.500273, y1:0.438, x2:0.500727, y2:0.909, stop:0 rgba(190, 154, 124, 255), stop:0.971591 rgba(96, 71, 62, 255));\n"
"}\n"
"\n"
""));
        label = new QLabel(loginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 211, 61));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color:rgb(190, 154, 124, 255);\n"
"border-radius:5px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit = new QLineEdit(loginDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 100, 251, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(158, 158, 118);"));
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit_2 = new QLineEdit(loginDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 150, 251, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 11pt \"\346\245\267\344\275\223\";\n"
"background-color:rgb(158, 158, 118);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(loginDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 200, 251, 34));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{  \n"
"color:rgb(255, 255, 255);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        toolButton = new QToolButton(loginDialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(80, 250, 61, 18));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;padding:2px 4px;\n"
"background-color:rgb(96, 71, 62, 255);\n"
"}\n"
"QToolButton:hover{\n"
"background-color:rgb(190, 154, 124, 255);\n"
"}\n"
""));
        toolButton->setAutoRaise(true);
        toolButton_3 = new QToolButton(loginDialog);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(270, 250, 61, 18));
        toolButton_3->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;padding:2px 4px;\n"
"background-color:rgb(96, 71, 62, 255);\n"
"}\n"
"QToolButton:hover{\n"
"background-color:rgb(190, 154, 124, 255);\n"
"}"));
        toolButton_3->setAutoRaise(true);

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("loginDialog", "  \344\273\223 \345\202\250 \347\256\241 \347\220\206 \347\263\273 \347\273\237", nullptr));
        pushButton->setText(QApplication::translate("loginDialog", "\347\231\273      \345\275\225", nullptr));
        toolButton->setText(QApplication::translate("loginDialog", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        toolButton_3->setText(QApplication::translate("loginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
