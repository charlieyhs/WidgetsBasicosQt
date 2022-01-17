#include "buttondialog.h"
#include "ui_buttondialog.h"
#include <QMessageBox>

ButtonDialog::ButtonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ButtonDialog)
{
    ui->setupUi(this);
}

ButtonDialog::~ButtonDialog()
{
    delete ui;
}

void ButtonDialog::on_msg1PushButton_clicked()
{
    QMessageBox::information(this,"Mensaje 1", "Hola Mundo");
}


void ButtonDialog::on_msg2PushButton_clicked()
{
    QMessageBox::information(this,"Mensaje 2", "Hola Mundo 2");
}


void ButtonDialog::on_msg3pushButton_3_clicked()
{
    QMessageBox::information(this,"Mensaje 3", "Hola Mundo 3");
}


void ButtonDialog::on_msg4pushButton_4_clicked()
{
    QMessageBox::information(this,"Mensaje 4", "Hola Mundo 4");
}


void ButtonDialog::on_msg5pushButton_5_clicked()
{
    QMessageBox::information(this,"Mensaje 5", "Hola Mundo 5");
}


void ButtonDialog::on_msg6pushButton_6_clicked()
{
    QMessageBox::information(this,"Mensaje 6", "Hola Mundo 6");
}


void ButtonDialog::on_msg7pushButton_7_clicked()
{
    QMessageBox::information(this,"Mensaje 7", "Hola Mundo 7");
}


void ButtonDialog::on_msg8pushButton_8_clicked()
{
    QMessageBox::information(this,"Mensaje 8", "Hola Mundo 8");
}


void ButtonDialog::on_msg9pushButton_9_clicked()
{
    QMessageBox::information(this,"Mensaje 9", "Hola Mundo 9");
}


void ButtonDialog::on_msg10pushButton_10_clicked()
{
    QMessageBox::information(this,"Mensaje 10", "Hola Mundo 10");
}

