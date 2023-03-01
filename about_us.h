#ifndef ABOUT_US_H
#define ABOUT_US_H

#include <QDialog>

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = nullptr);
    ~homepage();

private:
    Ui::homepage *ui;
};

#endif // ABOUT_US_H
