/********************************************************************************
** Form generated from reading UI file 'add_store.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STORE_H
#define UI_ADD_STORE_H

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

class Ui_add_store
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_9;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_7;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *add_store)
    {
        if (add_store->objectName().isEmpty())
            add_store->setObjectName(QString::fromUtf8("add_store"));
        add_store->resize(443, 317);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/add1.ico"), QSize(), QIcon::Active, QIcon::On);
        add_store->setWindowIcon(icon);
        add_store->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(add_store);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_9 = new QLineEdit(add_store);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 9, 2, 1, 3);

        label_9 = new QLabel(add_store);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 1, 1, 1);

        lineEdit_6 = new QLineEdit(add_store);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit_6, 7, 4, 1, 1);

        label_8 = new QLabel(add_store);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 3, 1, 1);

        comboBox = new QComboBox(add_store);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);

        gridLayout->addWidget(comboBox, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 2, 1, 1);

        label_2 = new QLabel(add_store);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(add_store);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(50, 25));
        pushButton_2->setMaximumSize(QSize(50, 25));
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

        pushButton = new QPushButton(add_store);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(50, 25));
        pushButton->setMaximumSize(QSize(50, 25));
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

        pushButton_3 = new QPushButton(add_store);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(50, 25));
        pushButton_3->setMaximumSize(QSize(50, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 12, 1, 1, 4);

        lineEdit_2 = new QLineEdit(add_store);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 1, 1, 1);

        label_5 = new QLabel(add_store);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        lineEdit_3 = new QLineEdit(add_store);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        label = new QLabel(add_store);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit_5 = new QLineEdit(add_store);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 5, 2, 1, 1);

        lineEdit = new QLineEdit(add_store);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        label_6 = new QLabel(add_store);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 3, 1, 1);

        label_3 = new QLabel(add_store);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        label_7 = new QLabel(add_store);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 2, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 2, 1, 1);

        lineEdit_4 = new QLineEdit(add_store);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 4, 1, 1);

        lineEdit_7 = new QLineEdit(add_store);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 5, 4, 1, 1);

        label_4 = new QLabel(add_store);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 2, 1, 1);


        retranslateUi(add_store);

        QMetaObject::connectSlotsByName(add_store);
    } // setupUi

    void retranslateUi(QWidget *add_store)
    {
        add_store->setWindowTitle(QApplication::translate("add_store", "Form", nullptr));
        label_9->setText(QApplication::translate("add_store", "\345\244\207    \346\263\250\357\274\232", nullptr));
        label_8->setText(QApplication::translate("add_store", "\347\224\265    \350\257\235\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("add_store", "\350\257\267\351\200\211\346\213\251\347\256\241\347\220\206\345\221\230", nullptr));

        label_2->setText(QApplication::translate("add_store", "\344\273\223\345\272\223\347\261\273\345\236\213\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("add_store", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QApplication::translate("add_store", "\351\207\215\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("add_store", "\345\217\226\346\266\210", nullptr));
        label_5->setText(QApplication::translate("add_store", "\345\272\223\345\255\230\345\256\271\351\207\217\357\274\232", nullptr));
        label->setText(QApplication::translate("add_store", "\344\273\223\345\272\223\347\274\226\345\217\267\357\274\232", nullptr));
        lineEdit->setText(QApplication::translate("add_store", "\347\263\273\347\273\237\350\207\252\345\212\250\347\224\237\346\210\220", nullptr));
        label_6->setText(QApplication::translate("add_store", "\347\212\266    \346\200\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("add_store", "\344\273\223\345\272\223\345\220\215\347\247\260\357\274\232", nullptr));
        label_7->setText(QApplication::translate("add_store", "\347\256\241 \347\220\206 \345\221\230\357\274\232", nullptr));
        label_4->setText(QApplication::translate("add_store", "\347\216\260\346\234\211\345\272\223\345\255\230\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_store: public Ui_add_store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STORE_H
