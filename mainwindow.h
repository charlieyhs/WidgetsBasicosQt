#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class ButtonDialog;
class CheckBoxDialog;
class ComboBoxDialog;
class ContainerDialog;
class DateTimeDialog;
class EmailDialog;
class RadioButtonDialog;
class SpinBoxDialog;
class QMdiSubWindow;

namespace Ui { class MainWindow; }


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

private slots:
    void on_actionSalir_triggered();

    void on_actionButton_Dialog_triggered();

    void on_actionCheckBox_Dialog_triggered();

    void on_actionComboBox_Dialog_triggered();

    void on_actionContainer_Dialog_triggered();

    void on_actionDateTime_Dialog_triggered();

    void on_actionEmail_Dialog_triggered();

    void on_actionRadioButton_Dialog_triggered();

    void on_actionSpinBox_Dialog_triggered();

    void on_actionButton_subWindow_triggered();

    void on_actionCheckBox_subWindow_triggered();

    void on_actionComboBox_subWindow_triggered();

    void on_actionContainer_subWindow_triggered();

    void on_actionDateTime_subWindow_triggered();

    void on_actionEmail_subWindow_triggered();

    void on_actionRadioButton_subWindow_triggered();

    void on_actionSpinBox_subWindow_triggered();

private:
    Ui::MainWindow *ui;
    ButtonDialog *m_buttonDialog;
    CheckBoxDialog *m_checkBoxDialog;
    ComboBoxDialog *m_comboBoxDialog;
    ContainerDialog *m_containerDialog;
    DateTimeDialog *m_dateTimeDialog;
    EmailDialog *m_emailDialog;
    RadioButtonDialog *m_radioButtonDialog;
    SpinBoxDialog *m_spinBoxDialog;

    QMdiSubWindow *m_buttonSubWindow;
    QMdiSubWindow *m_checkBoxSubWindow;
    QMdiSubWindow *m_comboBoxSubWindow;
    QMdiSubWindow *m_containerSubWindow;
    QMdiSubWindow *m_dateTimeSubWindow;
    QMdiSubWindow *m_emailSubWindow;
    QMdiSubWindow *m_radioButtonSubWindow;
    QMdiSubWindow *m_spinBoxSubWindow;
};
#endif // MAINWINDOW_H
