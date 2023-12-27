#ifndef DIALOGPLANT_H
#define DIALOGPLANT_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class DialogPlant;
}

class DialogPlant : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPlant(DBManager* dbManager, QWidget *parent = nullptr);
    ~DialogPlant();

private:
    Ui::DialogPlant *ui;
    DBManager* dbManager;
};

#endif // DIALOGPLANT_H
