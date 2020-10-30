/********************************************************************************
** Form generated from reading UI file 'store_modify2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORE_MODIFY2_H
#define UI_STORE_MODIFY2_H

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

class Ui_store_modify2
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_7;
    QComboBox *comboBox;
    QLineEdit *lineEdit_9;
    QLabel *label_8;
    QLineEdit *lineEdit_7;

    void setupUi(QWidget *store_modify2)
    {
        if (store_modify2->objectName().isEmpty())
            store_modify2->setObjectName(QString::fromUtf8("store_modify2"));
        store_modify2->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\344\277\256\346\224\271\345\233\276\346\240\207/write.ico"), QSize(), QIcon::Active, QIcon::On);
        store_modify2->setWindowIcon(icon);
        store_modify2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(store_modify2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 2, 1, 1);

        lineEdit_3 = new QLineEdit(store_modify2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 2, 1, 1);

        lineEdit = new QLineEdit(store_modify2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        lineEdit_2 = new QLineEdit(store_modify2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 5, 1, 1);

        label_4 = new QLabel(store_modify2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 6, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(store_modify2);
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

        pushButton = new QPushButton(store_modify2);
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

        pushButton_3 = new QPushButton(store_modify2);
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


        gridLayout->addLayout(horizontalLayout, 11, 1, 1, 5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 2, 1, 1);

        label_7 = new QLabel(store_modify2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 1, 1, 1);

        lineEdit_6 = new QLineEdit(store_modify2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 5, 5, 1, 1);

        label_2 = new QLabel(store_modify2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 4, 1, 1);

        label = new QLabel(store_modify2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_9 = new QLabel(store_modify2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 1, 1, 1);

        label_3 = new QLabel(store_modify2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        lineEdit_4 = new QLineEdit(store_modify2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 5, 1, 1);

        label_5 = new QLabel(store_modify2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        lineEdit_5 = new QLineEdit(store_modify2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 5, 2, 1, 1);

        label_6 = new QLabel(store_modify2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 4, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 10, 2, 1, 1);

        comboBox = new QComboBox(store_modify2);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 7, 2, 1, 1);

        lineEdit_9 = new QLineEdit(store_modify2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 9, 2, 1, 4);

        label_8 = new QLabel(store_modify2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 4, 1, 1);

        lineEdit_7 = new QLineEdit(store_modify2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit_7, 7, 5, 1, 1);


        retranslateUi(store_modify2);

        QMetaObject::connectSlotsByName(store_modify2);
    } // setupUi

    void retranslateUi(QWidget *store_modify2)
    {
        store_modify2->setWindowTitle(QApplication::translate("store_modify2", "Form", nullptr));
        label_4->setText(QApplication::translate("store_modify2", "\347\216\260\346\234\211\345\272\223\345\255\230\357\274\232", nullptr));
        pushButton_2->setText(QApplication::translate("store_modify2", "\347\241\256\350\256\244", nullptr));
        pushButton->setText(QApplication::translate("store_modify2", "\351\207\215\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("store_modify2", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QApplication::translate("store_modify2", "\347\256\241 \347\220\206 \345\221\230\357\274\232", nullptr));
        label_2->setText(QApplication::translate("store_modify2", "\344\273\223\345\272\223\345\220\215\347\247\260\357\274\232", nullptr));
        label->setText(QApplication::translate("store_modify2", "\344\273\223\345\272\223\347\274\226\345\217\267\357\274\232", nullptr));
        label_9->setText(QApplication::translate("store_modify2", "\345\244\207    \346\263\250\357\274\232", nullptr));
        label_3->setText(QApplication::translate("store_modify2", "\344\273\223\345\272\223\347\261\273\345\236\213\357\274\232", nullptr));
        label_5->setText(QApplication::translate("store_modify2", "\345\272\223\345\255\230\345\256\271\351\207\217\357\274\232", nullptr));
        label_6->setText(QApplication::translate("store_modify2", "\347\212\266   \346\200\201\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("store_modify2", "\350\257\267\351\200\211\346\213\251\347\256\241\347\220\206\345\221\230", nullptr));

        label_8->setText(QApplication::translate("store_modify2", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class store_modify2: public Ui_store_modify2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORE_MODIFY2_H
