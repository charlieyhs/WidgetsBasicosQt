#ifndef BUTTONDIALOG_H
#define BUTTONDIALOG_H

#include <QDialog>

namespace Ui {
class ButtonDialog;
}

class ButtonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ButtonDialog(QWidget *parent = nullptr);
    ~ButtonDialog();

private slots:
    void on_msg1PushButton_clicked();

    void on_msg2PushButton_clicked();

    void on_msg3pushButton_3_clicked();

    void on_msg4pushButton_4_clicked();

    void on_msg5pushButton_5_clicked();

    void on_msg6pushButton_6_clicked();

    void on_msg7pushButton_7_clicked();

    void on_msg8pushButton_8_clicked();

    void on_msg9pushButton_9_clicked();

    void on_msg10pushButton_10_clicked();

private:
    Ui::ButtonDialog *ui;
};

#endif // BUTTONDIALOG_H
