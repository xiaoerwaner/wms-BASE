/********************************************************************************
** Form generated from reading UI file 'move_store.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_STORE_H
#define UI_MOVE_STORE_H

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

class Ui_move_store
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *move_store)
    {
        if (move_store->objectName().isEmpty())
            move_store->setObjectName(QString::fromUtf8("move_store"));
        move_store->resize(433, 264);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\346\233\264\346\226\260\345\233\276\346\240\207/export.ico"), QSize(), QIcon::Disabled, QIcon::Off);
        move_store->setWindowIcon(icon);
        move_store->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(move_store);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(move_store);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        lineEdit = new QLineEdit(move_store);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(move_store);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_3 = new QLabel(move_store);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        comboBox = new QComboBox(move_store);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(comboBox, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);

        label_2 = new QLabel(move_store);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_5 = new QLabel(move_store);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 2, 1, 1);

        lineEdit_5 = new QLineEdit(move_store);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(lineEdit_5, 5, 3, 1, 1);

        label_6 = new QLabel(move_store);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 2, 1, 1);

        lineEdit_4 = new QLineEdit(move_store);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(lineEdit_4, 3, 3, 1, 1);

        lineEdit_2 = new QLineEdit(move_store);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        lineEdit_3 = new QLineEdit(move_store);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #d7d7d7; \n"
"border-radius: 3px; \n"
"}"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(move_store);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(90, 1));
        pushButton_2->setMaximumSize(QSize(100, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"border-radius: 8px;\n"
"border: 3px groove rgb(98, 98, 98);\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: inset;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(move_store);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(90, 0));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color:rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"border-radius: 8px;\n"
"border: 3px groove rgb(98, 98, 98);\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: inset;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);


        retranslateUi(move_store);

        QMetaObject::connectSlotsByName(move_store);
    } // setupUi

    void retranslateUi(QWidget *move_store)
    {
        move_store->setWindowTitle(QApplication::translate("move_store", "Form", nullptr));
        label->setText(QApplication::translate("move_store", "\350\256\242 \345\215\225  \345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("move_store", "\344\272\247\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QApplication::translate("move_store", "\347\247\273\345\212\250\350\207\263\344\273\223\345\272\223\357\274\232", nullptr));
        label_2->setText(QApplication::translate("move_store", "\347\247\273\345\212\250\345\211\215\344\273\223\345\272\223\357\274\232", nullptr));
        label_5->setText(QApplication::translate("move_store", "\346\225\260   \351\207\217\357\274\232", nullptr));
        label_6->setText(QApplication::translate("move_store", "\347\247\273\345\212\250\346\225\260\351\207\217\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("move_store", "\347\241\256\345\256\232\347\247\273\345\272\223", nullptr));
        pushButton->setText(QApplication::translate("move_store", "\345\217\226\346\266\210\347\247\273\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class move_store: public Ui_move_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_STORE_H
