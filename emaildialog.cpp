#include "emaildialog.h"
#include "ui_emaildialog.h"

EmailDialog::EmailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmailDialog)
{
    ui->setupUi(this);
    for(int year = 1900; year <= 2022; year++){
        ui->comboBox->addItem(QString::number(year));
    }
    QStringList countries{"Mexico","Peru","España","Argentina","Ecuador","Colombia","Venezuela","Paraguay"};
    ui->comboBox_2->addItems(countries);
}

EmailDialog::~EmailDialog()
{
    delete ui;
}
