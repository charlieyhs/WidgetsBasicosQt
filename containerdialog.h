#ifndef CONTAINERDIALOG_H
#define CONTAINERDIALOG_H

#include <QDialog>

namespace Ui {
class ContainerDialog;
}

class ContainerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ContainerDialog(QWidget *parent = nullptr);
    ~ContainerDialog();

private:
    Ui::ContainerDialog *ui;
};

#endif // CONTAINERDIALOG_H
