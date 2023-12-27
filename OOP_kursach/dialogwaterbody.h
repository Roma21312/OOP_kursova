#ifndef DIALOGWATERBODY_H
#define DIALOGWATERBODY_H

#include <QDialog>
#include <QSqlTableModel>
#include "dialogfish.h"
#include "dialogplant.h"

namespace Ui {
class DialogWaterbody;
}

class DialogWaterbody : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWaterbody(DBManager* dbManager, QWidget *parent = nullptr);
    ~DialogWaterbody();

private slots:
    void on_AddFishPB_clicked();

    void on_AddPlantPB_clicked();

private:
    Ui::DialogWaterbody *ui;
    DialogFish* dialogFish;
    DialogPlant* dialogPlant;

    DBManager* dbManager;
    QSqlTableModel* modelwaterbody;
    QSqlTableModel* modelplant;
    QSqlTableModel* modelfish;
};

#endif // DIALOGWATERBODY_H
