/********************************************************************************
** Form generated from reading UI file 'add_product.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PRODUCT_H
#define UI_ADD_PRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_product
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_8;
    QLabel *label_11;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_2;
    QDateEdit *dateEdit;

    void setupUi(QWidget *add_product)
    {
        if (add_product->objectName().isEmpty())
            add_product->setObjectName(QString::fromUtf8("add_product"));
        add_product->resize(486, 320);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\346\226\260\345\242\236.jpg"), QSize(), QIcon::Active, QIcon::On);
        add_product->setWindowIcon(icon);
        add_product->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(add_product);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 15, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 0, 2, 1, 1);

        label_2 = new QLabel(add_product);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 12, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 4, 2, 1, 1);

        label_3 = new QLabel(add_product);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        comboBox = new QComboBox(add_product);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 5, 2, 1, 1);

        label_10 = new QLabel(add_product);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 3, 1, 1);

        lineEdit_9 = new QLineEdit(add_product);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 13, 2, 1, 3);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 2, 2, 1, 1);

        label_7 = new QLabel(add_product);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 1, 1, 1);

        lineEdit = new QLineEdit(add_product);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 3);

        lineEdit_8 = new QLineEdit(add_product);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 11, 4, 1, 1);

        label_11 = new QLabel(add_product);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 13, 1, 1, 1);

        label_9 = new QLabel(add_product);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 11, 1, 1, 1);

        lineEdit_2 = new QLineEdit(add_product);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 10, 2, 1, 1);

        label_8 = new QLabel(add_product);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 3, 1, 1);

        lineEdit_6 = new QLineEdit(add_product);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 9, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(add_product);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
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

        pushButton_3 = new QPushButton(add_product);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
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

        pushButton = new QPushButton(add_product);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
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


        gridLayout->addLayout(horizontalLayout, 16, 1, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        label = new QLabel(add_product);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_4 = new QLabel(add_product);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 3, 1, 1);

        label_5 = new QLabel(add_product);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 1, 1, 1);

        lineEdit_3 = new QLineEdit(add_product);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 7, 2, 1, 1);

        comboBox_2 = new QComboBox(add_product);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 5, 4, 1, 1);

        label_6 = new QLabel(add_product);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 3, 1, 1);

        lineEdit_5 = new QLineEdit(add_product);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 9, 2, 1, 1);

        lineEdit_4 = new QLineEdit(add_product);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 7, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 5, 1, 1);

        dateEdit = new QDateEdit(add_product);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 11, 2, 1, 1);


        retranslateUi(add_product);

        QMetaObject::connectSlotsByName(add_product);
    } // setupUi

    void retranslateUi(QWidget *add_product)
    {
        add_product->setWindowTitle(QApplication::translate("add_product", "Form", nullptr));
        label_2->setText(QApplication::translate("add_product", "\344\272\247 \345\223\201 \345\220\215 \347\247\260\357\274\232", nullptr));
        label_3->setText(QApplication::translate("add_product", "\347\261\273     \345\210\253\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("add_product", "\350\257\267\351\200\211\346\213\251\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(1, QApplication::translate("add_product", "\344\272\224\351\207\221", nullptr));
        comboBox->setItemText(2, QApplication::translate("add_product", "\346\234\215\350\243\205", nullptr));
        comboBox->setItemText(3, QApplication::translate("add_product", "\347\224\265\345\255\220\344\272\247\345\223\201", nullptr));

        label_10->setText(QApplication::translate("add_product", "\347\224\237 \344\272\247 \345\216\202 \345\225\206\357\274\232", nullptr));
        label_7->setText(QApplication::translate("add_product", "\346\211\271\345\217\221\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
        label_11->setText(QApplication::translate("add_product", "\345\244\207     \346\263\250\357\274\232", nullptr));
        label_9->setText(QApplication::translate("add_product", "\347\224\237 \344\272\247 \346\227\245 \346\234\237\357\274\232", nullptr));
        label_8->setText(QApplication::translate("add_product", "\351\233\266\345\224\256\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("add_product", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QApplication::translate("add_product", "\351\207\215\347\275\256", nullptr));
        pushButton->setText(QApplication::translate("add_product", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("add_product", "\344\272\247 \345\223\201 \347\274\226 \345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("add_product", "\345\215\225     \344\275\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("add_product", "\346\225\260     \351\207\217\357\274\232", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("add_product", "\350\257\267\351\200\211\346\213\251\345\215\225\344\275\215", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("add_product", "\347\256\261", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("add_product", "\345\220\250", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("add_product", "\345\217\260", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("add_product", "\344\273\266", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("add_product", "\350\242\213", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("add_product", "\346\224\257", nullptr));
        comboBox_2->setItemText(7, QString());

        label_6->setText(QApplication::translate("add_product", "\350\277\233\350\264\247\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_product: public Ui_add_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRODUCT_H
