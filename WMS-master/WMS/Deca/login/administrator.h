﻿#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#pragma execution_character_set("utf-8")
#include <QWidget>

namespace Ui {
class administrator;
}

class administrator : public QWidget
{
    Q_OBJECT

public:
    explicit administrator(QWidget *parent = 0);
    ~administrator();

private:
    Ui::administrator *ui;
};

#endif // ADMINISTRATOR_H
