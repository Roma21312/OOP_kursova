#ifndef DIALOGFISH_H
#define DIALOGFISH_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class DialogFish;
}

class DialogFish : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFish(DBManager* dbManager, QWidget *parent = nullptr);
    ~DialogFish();

private:
    Ui::DialogFish *ui;
    DBManager* dbManager;
};

#endif // DIALOGFISH_H
