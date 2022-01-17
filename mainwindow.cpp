#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "buttondialog.h"
#include "checkboxdialog.h"
#include "comboboxdialog.h"
#include "containerdialog.h"
#include "datetimedialog.h"
#include "emaildialog.h"
#include "radiobuttondialog.h"
#include "spinboxdialog.h"

#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_buttonDialog = new ButtonDialog(this);
    m_checkBoxDialog = new CheckBoxDialog(this);
    m_comboBoxDialog = new ComboBoxDialog(this);
    m_containerDialog = new ContainerDialog(this);
    m_dateTimeDialog = new DateTimeDialog(this);
    m_emailDialog = new EmailDialog(this);
    m_radioButtonDialog = new RadioButtonDialog(this);
    m_spinBoxDialog = new SpinBoxDialog(this);

    m_buttonSubWindow = nullptr;
    m_checkBoxSubWindow = nullptr;
    m_comboBoxSubWindow = nullptr;
    m_containerSubWindow = nullptr;
    m_dateTimeSubWindow = nullptr;
    m_emailSubWindow = nullptr;
    m_radioButtonSubWindow = nullptr;
    m_spinBoxSubWindow = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSalir_triggered()
{
    close();
}


void MainWindow::on_actionButton_Dialog_triggered()
{
    m_buttonDialog->show();
}


void MainWindow::on_actionCheckBox_Dialog_triggered()
{
    m_checkBoxDialog->show();
}


void MainWindow::on_actionComboBox_Dialog_triggered()
{
    m_comboBoxDialog->show();
}


void MainWindow::on_actionContainer_Dialog_triggered()
{
    m_containerDialog->show();
}


void MainWindow::on_actionDateTime_Dialog_triggered()
{
    m_dateTimeDialog->show();
}


void MainWindow::on_actionEmail_Dialog_triggered()
{
    m_emailDialog->show();
}


void MainWindow::on_actionRadioButton_Dialog_triggered()
{
    m_radioButtonDialog->show();
}


void MainWindow::on_actionSpinBox_Dialog_triggered()
{
    m_spinBoxDialog->show();
}


void MainWindow::on_actionButton_subWindow_triggered()
{
    m_buttonSubWindow = ui->mdiArea->addSubWindow(new ButtonDialog(this));
    m_buttonSubWindow->show();
}


void MainWindow::on_actionCheckBox_subWindow_triggered()
{
    m_checkBoxSubWindow = ui->mdiArea->addSubWindow(new CheckBoxDialog(this));
    m_checkBoxSubWindow->show();
}


void MainWindow::on_actionComboBox_subWindow_triggered()
{
    m_comboBoxSubWindow = ui->mdiArea->addSubWindow(new ComboBoxDialog(this));
    m_comboBoxSubWindow->show();
}


void MainWindow::on_actionContainer_subWindow_triggered()
{
    m_containerSubWindow = ui->mdiArea->addSubWindow(new ContainerDialog(this));
    m_containerSubWindow->show();
}


void MainWindow::on_actionDateTime_subWindow_triggered()
{
    m_dateTimeSubWindow = ui->mdiArea->addSubWindow(new DateTimeDialog(this));
    m_dateTimeSubWindow->show();
}


void MainWindow::on_actionEmail_subWindow_triggered()
{
    m_emailSubWindow = ui->mdiArea->addSubWindow(new EmailDialog(this));
    m_emailSubWindow->show();
}


void MainWindow::on_actionRadioButton_subWindow_triggered()
{
    m_radioButtonSubWindow = ui->mdiArea->addSubWindow(new RadioButtonDialog(this));
    m_radioButtonSubWindow->show();
}


void MainWindow::on_actionSpinBox_subWindow_triggered()
{
    m_spinBoxSubWindow = ui->mdiArea->addSubWindow(new SpinBoxDialog(this));
    m_spinBoxSubWindow->show();
}

