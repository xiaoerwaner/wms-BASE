/********************************************************************************
** Form generated from reading UI file 'staff_modify2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_MODIFY2_H
#define UI_STAFF_MODIFY2_H

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

class Ui_staff_modify2
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *staff_modify2)
    {
        if (staff_modify2->objectName().isEmpty())
            staff_modify2->setObjectName(QString::fromUtf8("staff_modify2"));
        staff_modify2->resize(433, 315);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\344\277\256\346\224\271\345\233\276\346\240\207/document-write.ico"), QSize(), QIcon::Active, QIcon::On);
        staff_modify2->setWindowIcon(icon);
        staff_modify2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)"));
        gridLayout = new QGridLayout(staff_modify2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 7, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 3, 1, 1);

        label_2 = new QLabel(staff_modify2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 5, 1, 1);

        lineEdit_7 = new QLineEdit(staff_modify2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 7, 3, 1, 4);

        lineEdit_2 = new QLineEdit(staff_modify2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit_2, 1, 6, 1, 1);

        comboBox = new QComboBox(staff_modify2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 5, 6, 1, 1);

        label_7 = new QLabel(staff_modify2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 3, 1, 1);

        lineEdit_5 = new QLineEdit(staff_modify2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 5, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 3, 1, 1);

        label_6 = new QLabel(staff_modify2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 8, 1, 1);

        lineEdit_3 = new QLineEdit(staff_modify2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 3, 1, 1);

        label_8 = new QLabel(staff_modify2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 3, 1, 1);

        label_5 = new QLabel(staff_modify2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 2, 1, 1);

        lineEdit_4 = new QLineEdit(staff_modify2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 6, 1, 1);

        label_4 = new QLabel(staff_modify2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        lineEdit = new QLineEdit(staff_modify2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(lineEdit, 1, 3, 1, 1);

        label_3 = new QLabel(staff_modify2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(staff_modify2);
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

        pushButton_2 = new QPushButton(staff_modify2);
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


        gridLayout->addLayout(horizontalLayout, 10, 2, 1, 5);


        retranslateUi(staff_modify2);

        QMetaObject::connectSlotsByName(staff_modify2);
    } // setupUi

    void retranslateUi(QWidget *staff_modify2)
    {
        staff_modify2->setWindowTitle(QApplication::translate("staff_modify2", "Form", nullptr));
        label_2->setText(QApplication::translate("staff_modify2", "\351\202\256   \347\256\261\357\274\232", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("staff_modify2", "\345\221\230\345\267\245", nullptr));
        comboBox->setItemText(2, QApplication::translate("staff_modify2", "\344\270\273\347\256\241", nullptr));

        label_7->setText(QApplication::translate("staff_modify2", "\350\247\222   \350\211\262\357\274\232", nullptr));
        label_6->setText(QApplication::translate("staff_modify2", "\347\224\265   \350\257\235\357\274\232", nullptr));
        label_8->setText(QApplication::translate("staff_modify2", "\345\244\207  \346\263\250\357\274\232", nullptr));
        label_5->setText(QApplication::translate("staff_modify2", "\347\224\250 \346\210\267 \345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("staff_modify2", "\345\221\230\345\267\245\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("staff_modify2", "\345\247\223   \345\220\215\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("staff_modify2", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("staff_modify2", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class staff_modify2: public Ui_staff_modify2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_MODIFY2_H
