/********************************************************************************
** Form generated from reading UI file 'find_result.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_RESULT_H
#define UI_FIND_RESULT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find_result
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *find_result)
    {
        if (find_result->objectName().isEmpty())
            find_result->setObjectName(QString::fromUtf8("find_result"));
        find_result->resize(321, 200);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/Find.png"), QSize(), QIcon::Normal, QIcon::On);
        find_result->setWindowIcon(icon);
        find_result->setStyleSheet(QString::fromUtf8("QWidget::QMessageBox {   border-color:#32435E; border-width:1px; border-radius: 3px;\n"
"  min-width:30px; min-height:23px;\n"
"  /*font-family:\"\345\256\213\344\275\223\";font-size:36px;*/\n"
"  border-image:url(./config/qss/style_1/images/messageBox_background.png);\n"
"  height: 300px;\n"
"  width: 200px;\n"
"  border: none;\n"
"}\n"
"QWidget{\n"
"background-color: qlineargradient(spread:pad, x1:0.500273, y1:0.438, x2:0.500727, y2:0.909, stop:0 rgba(190, 154, 124, 255), stop:0.971591 rgba(96, 71, 62, 255));\n"
"}"));
        label = new QLabel(find_result);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 131, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);\n"
""));
        lineEdit = new QLineEdit(find_result);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 80, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 10pt \"\346\245\267\344\275\223\";\n"
"background-color:rgb(158, 158, 118);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(find_result);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 140, 75, 23));
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
        pushButton_2 = new QPushButton(find_result);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 140, 75, 23));
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
        label_2 = new QLabel(find_result);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 121, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:rgb(190, 154, 124, 255);"));
        lineEdit_2 = new QLineEdit(find_result);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 30, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius:5px;padding:2px 4px;\n"
"font: 75 10pt \"\346\245\267\344\275\223\";\n"
"background-color:rgb(158, 158, 118);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(find_result);

        QMetaObject::connectSlotsByName(find_result);
    } // setupUi

    void retranslateUi(QWidget *find_result)
    {
        find_result->setWindowTitle(QApplication::translate("find_result", "Form", nullptr));
        label->setText(QApplication::translate("find_result", "\346\237\245\350\257\242\345\210\260\346\202\250\347\232\204\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("find_result", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QApplication::translate("find_result", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QApplication::translate("find_result", "  \347\231\273\345\275\225\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find_result: public Ui_find_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_RESULT_H
