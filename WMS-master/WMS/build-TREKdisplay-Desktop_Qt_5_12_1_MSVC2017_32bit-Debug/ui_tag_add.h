/********************************************************************************
** Form generated from reading UI file 'tag_add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAG_ADD_H
#define UI_TAG_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tag_add
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *tag_add)
    {
        if (tag_add->objectName().isEmpty())
            tag_add->setObjectName(QString::fromUtf8("tag_add"));
        tag_add->resize(450, 300);
        tag_add->setMinimumSize(QSize(450, 300));
        tag_add->setMaximumSize(QSize(450, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\346\240\207\347\255\276.jpg"), QSize(), QIcon::Normal, QIcon::On);
        tag_add->setWindowIcon(icon);
        tag_add->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(tag_add);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tag_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(300, 50));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tag_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(tag_add);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(150, 16777215));
        lineEdit->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_3 = new QLabel(tag_add);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(tag_add);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(tag_add);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(tag_add);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 0));
        lineEdit_3->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_5 = new QLabel(tag_add);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(tag_add);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(tag_add);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(tag_add);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_5->addWidget(lineEdit_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_7 = new QLabel(tag_add);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        dateEdit = new QDateEdit(tag_add);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(142, 0));

        horizontalLayout_5->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(tag_add);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_7 = new QLineEdit(tag_add);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_6->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(tag_add);
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

        pushButton_2 = new QPushButton(tag_add);
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

        pushButton_3 = new QPushButton(tag_add);
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


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 3, 1, 1, 1);


        retranslateUi(tag_add);

        QMetaObject::connectSlotsByName(tag_add);
    } // setupUi

    void retranslateUi(QWidget *tag_add)
    {
        tag_add->setWindowTitle(QApplication::translate("tag_add", "\346\226\260\345\242\236\346\240\207\347\255\276", nullptr));
        label->setText(QApplication::translate("tag_add", "                  \346\226\260\345\242\236\346\240\207\347\255\276", nullptr));
        label_2->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\274\226\345\217\267", nullptr));
        label_3->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\346\240\207\350\257\206", nullptr));
        label_4->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\261\273\345\236\213", nullptr));
        label_5->setText(QApplication::translate("tag_add", "\346\240\207\347\255\276\347\212\266\346\200\201", nullptr));
        label_6->setText(QApplication::translate("tag_add", "\347\224\237\344\272\247\345\216\202\345\225\206", nullptr));
        label_7->setText(QApplication::translate("tag_add", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        label_8->setText(QApplication::translate("tag_add", "\345\244\207    \346\263\250", nullptr));
        pushButton->setText(QApplication::translate("tag_add", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QApplication::translate("tag_add", "\351\207\215\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("tag_add", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tag_add: public Ui_tag_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAG_ADD_H
