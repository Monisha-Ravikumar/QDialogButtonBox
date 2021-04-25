#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    QString getFavouriteOS() const;

    QString getPosition() const;

private slots:
    void on_pushButton_clicked();

    void on_CANCELpushButton_clicked();

private:
    QString position;
    QString FavouriteOS;
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
