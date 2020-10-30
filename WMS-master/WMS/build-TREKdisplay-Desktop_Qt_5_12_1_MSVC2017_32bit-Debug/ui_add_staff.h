/********************************************************************************
** Form generated from reading UI file 'add_staff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STAFF_H
#define UI_ADD_STAFF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_staff
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;

    void setupUi(QWidget *add_staff)
    {
        if (add_staff->objectName().isEmpty())
            add_staff->setObjectName(QString::fromUtf8("add_staff"));
        add_staff->resize(461, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\346\226\260\345\242\236.jpg"), QSize(), QIcon::Normal, QIcon::On);
        add_staff->setWindowIcon(icon);
        add_staff->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: qlineargradient(spread:pad, x1:0.500273, y1:0.438, x2:0.500727, y2:0.909, stop:0 rgba(190, 154, 124, 255), stop:0.971591 rgba(96, 71, 62, 255));\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(add_staff);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(add_staff);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(150, 110, 100, 255);"));

        gridLayout->addWidget(label, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 13, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label_6 = new QLabel(add_staff);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        label_7 = new QLabel(add_staff);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_7, 4, 4, 1, 1);

        label_8 = new QLabel(add_staff);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        label_9 = new QLabel(add_staff);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_9, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 6, 1, 1);

        label_3 = new QLabel(add_staff);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(150, 110, 100, 255);"));

        gridLayout->addWidget(label_3, 8, 4, 1, 1);

        label_4 = new QLabel(add_staff);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_4, 6, 4, 1, 1);

        comboBox = new QComboBox(add_staff);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 8, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        label_2 = new QLabel(add_staff);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(150, 110, 100, 255);"));

        gridLayout->addWidget(label_2, 12, 1, 1, 1);

        label_5 = new QLabel(add_staff);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 18, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(add_staff);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(70, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{  \n"
"color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:solid;  \n"
"background-color:rgb(255, 85, 0);\n"
"border-radius:5px;padding:2px 4px;/*border-radius\346\216\247\345\210\266\345\234\206\350\247\222\345\244\247\345\260\217*/  \n"
"}  \n"
"QPushButton:hover{  /*\351\274\240\346\240\207\346\224\276\344\270\212\345\220\216*/  \n"
"color: rgb(0, 0, 0);\n"
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
"                            s"
                        "top: 0.3 rgb(190,190,190),  \n"
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

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(add_staff);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(70, 25));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{  \n"
"color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:solid;  \n"
"background-color:rgb(255, 85, 0);\n"
"border-radius:5px;padding:2px 4px;/*border-radius\346\216\247\345\210\266\345\234\206\350\247\222\345\244\247\345\260\217*/  \n"
"}  \n"
"QPushButton:hover{  /*\351\274\240\346\240\207\346\224\276\344\270\212\345\220\216*/  \n"
"color: rgb(0, 0, 0);\n"
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
"                            s"
                        "top: 0.3 rgb(190,190,190),  \n"
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

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(add_staff);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(70, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{  \n"
"color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-style:solid;  \n"
"background-color:rgb(255, 85, 0);\n"
"border-radius:5px;padding:2px 4px;/*border-radius\346\216\247\345\210\266\345\234\206\350\247\222\345\244\247\345\260\217*/  \n"
"}  \n"
"QPushButton:hover{  /*\351\274\240\346\240\207\346\224\276\344\270\212\345\220\216*/  \n"
"color: rgb(0, 0, 0);\n"
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
"                            s"
                        "top: 0.3 rgb(190,190,190),  \n"
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

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 14, 1, 1, 5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 11, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);

        lineEdit = new QLineEdit(add_staff);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        lineEdit_2 = new QLineEdit(add_staff);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit_2, 1, 5, 1, 1);

        lineEdit_3 = new QLineEdit(add_staff);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));
        lineEdit_3->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(lineEdit_3, 4, 2, 1, 1);

        lineEdit_5 = new QLineEdit(add_staff);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit_5, 6, 2, 1, 1);

        lineEdit_6 = new QLineEdit(add_staff);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));

        gridLayout->addWidget(lineEdit_6, 6, 5, 1, 1);

        lineEdit_4 = new QLineEdit(add_staff);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgb(190, 154, 124, 255);"));
        lineEdit_4->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout->addWidget(lineEdit_4, 4, 5, 1, 1);

        lineEdit_7 = new QLineEdit(add_staff);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:rgb(150, 110, 100, 255);"));

        gridLayout->addWidget(lineEdit_7, 8, 2, 1, 1);

        lineEdit_8 = new QLineEdit(add_staff);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color:rgb(150, 110, 100, 255);"));

        gridLayout->addWidget(lineEdit_8, 12, 2, 1, 4);


        retranslateUi(add_staff);

        QMetaObject::connectSlotsByName(add_staff);
    } // setupUi

    void retranslateUi(QWidget *add_staff)
    {
        add_staff->setWindowTitle(QApplication::translate("add_staff", "Form", nullptr));
        label->setText(QApplication::translate("add_staff", "\347\224\265   \350\257\235\357\274\232", nullptr));
        label_6->setText(QApplication::translate("add_staff", "\345\257\206   \347\240\201\357\274\232", nullptr));
        label_7->setText(QApplication::translate("add_staff", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_8->setText(QApplication::translate("add_staff", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", nullptr));
        label_9->setText(QApplication::translate("add_staff", "\345\247\223     \345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("add_staff", "\350\247\222   \350\211\262\357\274\232", nullptr));
        label_4->setText(QApplication::translate("add_staff", "\351\202\256   \347\256\261\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("add_staff", "\345\221\230\345\267\245", nullptr));
        comboBox->setItemText(1, QApplication::translate("add_staff", "\344\270\273\347\256\241", nullptr));

        label_2->setText(QApplication::translate("add_staff", "\345\244\207   \346\263\250\357\274\232", nullptr));
        label_5->setText(QApplication::translate("add_staff", "\347\231\273\351\231\206\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("add_staff", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QApplication::translate("add_staff", "\351\207\215\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("add_staff", "\345\217\226\346\266\210", nullptr));
        lineEdit->setText(QApplication::translate("add_staff", "\347\263\273\347\273\237\350\207\252\345\212\250\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_staff: public Ui_add_staff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STAFF_H
