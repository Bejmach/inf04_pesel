#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, QString name, QString surname, QString color)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText(QString(name + " " + surname + " kolor oczu " + color));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    delete this;
}

