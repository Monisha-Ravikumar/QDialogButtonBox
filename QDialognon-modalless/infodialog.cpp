#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_pushButton_clicked()
{
    QString UserPosition=ui->lineEdit->text();
    if(UserPosition.isEmpty())
    {
        position=UserPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavouriteOS="Windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavouriteOS="Mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavouriteOS="Linux";
        }
    }
    accept();
}

void InfoDialog::on_CANCELpushButton_clicked()
{
    reject();
}


