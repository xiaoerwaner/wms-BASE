/********************************************************************************
** Form generated from reading UI file 'storage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_H
#define UI_STORAGE_H

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

class Ui_storage
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_6;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_10;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QLabel *label_7;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer;
    QLabel *label_9;

    void setupUi(QWidget *storage)
    {
        if (storage->objectName().isEmpty())
            storage->setObjectName(QString::fromUtf8("storage"));
        storage->setWindowModality(Qt::NonModal);
        storage->setEnabled(true);
        storage->resize(600, 400);
        storage->setMaximumSize(QSize(600, 400));
        storage->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qt \345\233\276\346\240\207/\346\226\260\345\242\236.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        storage->setWindowIcon(icon);
        storage->setWindowOpacity(1.000000000000000);
        storage->setLayoutDirection(Qt::LeftToRight);
        storage->setAutoFillBackground(false);
        storage->setStyleSheet(QString::fromUtf8("\n"
"font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(144, 144, 144);\n"
"color:rgb(0, 0, 0)\n"
""));
        storage->setInputMethodHints(Qt::ImhNone);
        gridLayout = new QGridLayout(storage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_6 = new QLineEdit(storage);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_6, 6, 1, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 3, 0, 1, 1);

        label_11 = new QLabel(storage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_11, 6, 3, 1, 1);

        label_2 = new QLabel(storage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_12 = new QLabel(storage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 9, 0, 1, 1);

        label_6 = new QLabel(storage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        lineEdit_5 = new QLineEdit(storage);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_5, 10, 1, 1, 2);

        lineEdit_10 = new QLineEdit(storage);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_10, 8, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 1, 0, 1, 1);

        label_4 = new QLabel(storage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_9 = new QLineEdit(storage);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_9, 8, 1, 1, 2);

        lineEdit_7 = new QLineEdit(storage);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_7, 6, 4, 1, 1);

        label_13 = new QLabel(storage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_13, 8, 3, 1, 1);

        label_7 = new QLabel(storage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_7, 10, 3, 1, 1);

        comboBox = new QComboBox(storage);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(140, 0));

        gridLayout->addWidget(comboBox, 10, 4, 1, 1);

        lineEdit_3 = new QLineEdit(storage);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_3, 4, 1, 1, 2);

        lineEdit_1 = new QLineEdit(storage);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setCursor(QCursor(Qt::ForbiddenCursor));
        lineEdit_1->setAutoFillBackground(false);
        lineEdit_1->setStyleSheet(QString::fromUtf8(""));
        lineEdit_1->setInputMethodHints(Qt::ImhHiddenText);
        lineEdit_1->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(lineEdit_1, 2, 1, 1, 2);

        lineEdit_4 = new QLineEdit(storage);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_4, 4, 4, 1, 1);

        lineEdit_2 = new QLineEdit(storage);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lineEdit_2, 2, 4, 1, 1);

        label_8 = new QLabel(storage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_3 = new QLabel(storage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_3, 2, 3, 1, 1);

        label_5 = new QLabel(storage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_5, 4, 3, 1, 1);

        label_10 = new QLabel(storage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_10, 12, 0, 1, 1);

        lineEdit_8 = new QLineEdit(storage);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(true);
        lineEdit_8->setStyleSheet(QString::fromUtf8(""));
        lineEdit_8->setEchoMode(QLineEdit::NoEcho);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 12, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(storage);
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

        pushButton_2 = new QPushButton(storage);
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

        pushButton_3 = new QPushButton(storage);
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


        gridLayout->addLayout(horizontalLayout, 14, 0, 1, 5);

        comboBox_2 = new QComboBox(storage);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(145, 0));

        gridLayout->addWidget(comboBox_2, 12, 1, 1, 2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 15, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        label_9 = new QLabel(storage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_9, 12, 3, 1, 1);


        retranslateUi(storage);

        QMetaObject::connectSlotsByName(storage);
    } // setupUi

    void retranslateUi(QWidget *storage)
    {
        storage->setWindowTitle(QApplication::translate("storage", "\346\226\260\345\242\236\350\256\242\345\215\225", nullptr));
        label_11->setText(QApplication::translate("storage", "\345\215\225   \344\275\215", nullptr));
        label_2->setText(QApplication::translate("storage", "\350\256\242 \345\215\225 \345\217\267", nullptr));
        label_12->setText(QApplication::translate("storage", "\347\224\237\344\272\247\346\227\245\346\234\237    ", nullptr));
        label_6->setText(QApplication::translate("storage", "\344\272\247\345\223\201\346\225\260\351\207\217", nullptr));
        label_4->setText(QApplication::translate("storage", "\344\272\247\345\223\201\347\274\226\345\217\267", nullptr));
        label_13->setText(QApplication::translate("storage", "\347\224\237\346\210\220\345\216\202\345\225\206", nullptr));
        label_7->setText(QApplication::translate("storage", "\344\273\223\345\272\223\347\274\226\345\217\267", nullptr));
        lineEdit_1->setInputMask(QString());
        lineEdit_1->setText(QString());
        label_8->setText(QApplication::translate("storage", "\344\272\247\345\223\201\347\261\273\345\210\253", nullptr));
        label_3->setText(QApplication::translate("storage", "\344\272\247\345\223\201\345\220\215\347\247\260", nullptr));
        label_5->setText(QApplication::translate("storage", "\346\240\207\347\255\276\347\274\226\345\217\267", nullptr));
        label_10->setText(QApplication::translate("storage", "\347\256\241 \347\220\206 \345\221\230", nullptr));
        lineEdit_8->setText(QString());
        lineEdit_8->setPlaceholderText(QApplication::translate("storage", "NOW DATE", nullptr));
        pushButton->setText(QApplication::translate("storage", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("storage", "\351\207\215\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("storage", "\345\217\226\346\266\210", nullptr));
        label_9->setText(QApplication::translate("storage", "\345\205\245\345\272\223\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storage: public Ui_storage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_H
