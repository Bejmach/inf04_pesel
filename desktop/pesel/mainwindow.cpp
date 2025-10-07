#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    image = ui->label_4;
    finger = ui->label_5;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    dialog = new Dialog(this, name, surname, color);
    dialog->show();
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    if(arg1 == "000"){
        QPixmap newImage = QPixmap(":/new/prefix1/000-zdjecie.jpg");
        QPixmap newFinger = QPixmap(":/new/prefix1/000-odcisk.jpg");
        image->setPixmap(newImage);
        finger->setPixmap(newFinger);
    }
    else if(arg1 == "111"){
        QPixmap newImage = QPixmap(":/new/prefix1/111-zdjecie.jpg");
        QPixmap newFinger = QPixmap(":/new/prefix1/111-odcisk.jpg");
        image->setPixmap(newImage);
        finger->setPixmap(newFinger);
    }
    else if(arg1 == "333"){
        QPixmap newImage = QPixmap(":/new/prefix1/333-zdjecie.jpg");
        QPixmap newFinger = QPixmap(":/new/prefix1/333-odcisk.jpg");
        image->setPixmap(newImage);
        finger->setPixmap(newFinger);
    }
}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    name = arg1;
}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    surname = arg1;
}


void MainWindow::on_radioButton_toggled(bool checked)
{
    if (checked){
        color = "niebieskie";
    }
}


void MainWindow::on_radioButton_2_toggled(bool checked)
{
    if (checked){
        color = "zielone";
    }
}


void MainWindow::on_radioButton_3_toggled(bool checked)
{
    if (checked){
        color = "piwne";
    }
}

