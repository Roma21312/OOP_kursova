#ifndef FISHLIST_H
#define FISHLIST_H

#include <QDialog>

namespace Ui {
class FishList;
}

class FishList : public QDialog
{
    Q_OBJECT

public:
    explicit FishList(QWidget *parent = nullptr);
    ~FishList();

private:
    Ui::FishList *ui;
};

#endif // FISHLIST_H
