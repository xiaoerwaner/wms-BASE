/********************************************************************************
** Form generated from reading UI file 'product_modify2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_MODIFY2_H
#define UI_PRODUCT_MODIFY2_H

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

class Ui_product_modify2
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_9;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_8;

    void setupUi(QWidget *product_modify2)
    {
        if (product_modify2->objectName().isEmpty())
            product_modify2->setObjectName(QString::fromUtf8("product_modify2"));
        product_modify2->resize(485, 344);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\344\277\256\346\224\271.png"), QSize(), QIcon::Active, QIcon::On);
        product_modify2->setWindowIcon(icon);
        product_modify2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(product_modify2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 1, 1, 1);

        label = new QLabel(product_modify2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_5 = new QLabel(product_modify2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 1, 1, 1);

        comboBox = new QComboBox(product_modify2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 5, 2, 1, 1);

        comboBox_2 = new QComboBox(product_modify2);
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

        label_6 = new QLabel(product_modify2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 3, 1, 1);

        lineEdit = new QLineEdit(product_modify2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit, 1, 2, 1, 3);

        lineEdit_9 = new QLineEdit(product_modify2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 13, 2, 1, 3);

        label_9 = new QLabel(product_modify2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 11, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(product_modify2);
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

        pushButton_3 = new QPushButton(product_modify2);
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

        pushButton_2 = new QPushButton(product_modify2);
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


        gridLayout->addLayout(horizontalLayout, 15, 1, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 14, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 1, 1, 1);

        lineEdit_2 = new QLineEdit(product_modify2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 2, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 5, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 2, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_9, 0, 1, 1, 1);

        label_3 = new QLabel(product_modify2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        label_2 = new QLabel(product_modify2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        label_11 = new QLabel(product_modify2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 13, 1, 1, 1);

        label_4 = new QLabel(product_modify2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 3, 1, 1);

        label_8 = new QLabel(product_modify2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 3, 1, 1);

        lineEdit_5 = new QLineEdit(product_modify2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_5, 9, 2, 1, 1);

        lineEdit_6 = new QLineEdit(product_modify2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 9, 4, 1, 1);

        lineEdit_4 = new QLineEdit(product_modify2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 7, 4, 1, 1);

        label_7 = new QLabel(product_modify2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 1, 1, 1);

        lineEdit_7 = new QLineEdit(product_modify2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setCursor(QCursor(Qt::ForbiddenCursor));

        gridLayout->addWidget(lineEdit_7, 11, 2, 1, 1);

        label_10 = new QLabel(product_modify2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 12, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 10, 1, 1, 1);

        lineEdit_3 = new QLineEdit(product_modify2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 7, 2, 1, 1);

        lineEdit_8 = new QLineEdit(product_modify2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_8->setFocusPolicy(Qt::NoFocus);
        lineEdit_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_8, 11, 4, 1, 1);


        retranslateUi(product_modify2);

        QMetaObject::connectSlotsByName(product_modify2);
    } // setupUi

    void retranslateUi(QWidget *product_modify2)
    {
        product_modify2->setWindowTitle(QApplication::translate("product_modify2", "Form", nullptr));
        label->setText(QApplication::translate("product_modify2", "\344\272\247 \345\223\201 \347\274\226 \345\217\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("product_modify2", "\346\225\260     \351\207\217\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("product_modify2", "\350\257\267\351\200\211\346\213\251\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(1, QApplication::translate("product_modify2", "\344\272\224\351\207\221", nullptr));
        comboBox->setItemText(2, QApplication::translate("product_modify2", "\346\234\215\350\243\205", nullptr));
        comboBox->setItemText(3, QApplication::translate("product_modify2", "\347\224\265\345\255\220\344\272\247\345\223\201", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("product_modify2", "\350\257\267\351\200\211\346\213\251\345\215\225\344\275\215", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("product_modify2", "\347\256\261", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("product_modify2", "\345\217\260", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("product_modify2", "\344\273\266", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("product_modify2", "\350\242\213", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("product_modify2", "\345\220\250", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("product_modify2", "\345\215\267", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("product_modify2", "\346\224\257", nullptr));

        label_6->setText(QApplication::translate("product_modify2", "\350\277\233\350\264\247\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
        label_9->setText(QApplication::translate("product_modify2", "\347\224\237 \344\272\247 \345\216\202 \345\225\206\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("product_modify2", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QApplication::translate("product_modify2", "\351\207\215\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("product_modify2", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QApplication::translate("product_modify2", "\347\261\273     \345\210\253\357\274\232", nullptr));
        label_2->setText(QApplication::translate("product_modify2", "\344\272\247 \345\223\201 \345\220\215 \347\247\260\357\274\232", nullptr));
        label_11->setText(QApplication::translate("product_modify2", "\345\244\207   \346\263\250\357\274\232", nullptr));
        label_4->setText(QApplication::translate("product_modify2", "\345\215\225    \344\275\215\357\274\232", nullptr));
        label_8->setText(QApplication::translate("product_modify2", "\351\233\266\345\224\256\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
        label_7->setText(QApplication::translate("product_modify2", "\346\211\271\345\217\221\344\273\267\357\274\210\345\205\203\357\274\211\357\274\232", nullptr));
        label_10->setText(QApplication::translate("product_modify2", "\347\224\237 \344\272\247 \346\227\245 \346\234\237\357\274\232", nullptr));
        lineEdit_8->setInputMask(QString());
        lineEdit_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class product_modify2: public Ui_product_modify2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_MODIFY2_H
