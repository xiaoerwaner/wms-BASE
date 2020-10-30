/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrator
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *administrator)
    {
        if (administrator->objectName().isEmpty())
            administrator->setObjectName(QString::fromUtf8("administrator"));
        administrator->resize(170, 23);
        label = new QLabel(administrator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 54, 12));
        label_2 = new QLabel(administrator);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 0, 54, 12));

        retranslateUi(administrator);

        QMetaObject::connectSlotsByName(administrator);
    } // setupUi

    void retranslateUi(QWidget *administrator)
    {
        administrator->setWindowTitle(QApplication::translate("administrator", "Form", nullptr));
        label->setText(QApplication::translate("administrator", "Username\357\274\232", nullptr));
        label_2->setText(QApplication::translate("administrator", "\345\220\215  \345\255\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class administrator: public Ui_administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
