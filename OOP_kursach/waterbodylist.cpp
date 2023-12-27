#include "waterbodylist.h"
#include "ui_waterbodylist.h"

WaterbodyList::WaterbodyList(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WaterbodyList)
{
    ui->setupUi(this);
    // Ініціалізуємо модель для представлення даних із вказанням назв стовпців
    this->setupModelPlant(TABLE_MESSAGES,
                     QStringList() << tr("id")
                                   << tr("Дата")
                                   << tr("Година")
                                   << tr("Випадкове число")
                                   << tr("Повідомлення")
                     );

    // Ініціалізуємо зовнішній вигляд таблиці з даними
    this->createPlantUI();

    // Ініціалізуємо модель для представлення даних із вказанням назв стовпців
    this->setupModelFish(TABLE_MESSAGES,
                     QStringList() << tr("id")
                                   << tr("Дата")
                                   << tr("Година")
                                   << tr("Випадкове число")
                                   << tr("Повідомлення")
                     );

    // Ініціалізуємо зовнішній вигляд таблиці з даними
    this->createFishUI();

    // Ініціалізуємо модель для представлення даних із вказанням назв стовпців
    this->setupModelWaterbody(TABLE_MESSAGES,
                     QStringList() << tr("id")
                                   << tr("Дата")
                                   << tr("Година")
                                   << tr("Випадкове число")
                                   << tr("Повідомлення")
                     );

    // Ініціалізуємо зовнішній вигляд таблиці з даними
    this->createWaterbodyUI();
}

WaterbodyList::~WaterbodyList()
{
    delete ui;
    if (model)
        delete model;
}

void WaterbodyList::setupModelPlant(const QString& tableName, const QStringList& headers) {
    /* Виконуємо ініціалізацію моделі представлення даних
     * з вказанням імені таблиці в базі даних, до якої
     * буде виконуватись звернення
     * */
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);

    // Встановлюємо назви стовпців в таблиці із сортуванням даних
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    // Встановлюємо сортування по збільшення даних по нульовому стовпцю'2ry'2ry'2ry
    model->setSort(0, Qt::AscendingOrder);
}

void WaterbodyList::createPlantUI() {
    // Встановлюємо модель для TableView
    ui->tableView->setModel(model);
    // Приховуємо колонку з id таблиці БД
    ui->tableView->setColumnHidden(0, true);
    // Дозволяємо виділення рядків
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Встановлюємо режим виділення лише одного рядка в таблиці
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Встановлюємо розмір колонок по вмісту
    ui->tableView->resizeColumnsToContents();
    // Встановлюємо стратегію редагування - при подвійному кліку
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    // Розтягуємо останній стовпчик tableView на всю ширину вікна
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    // Виконуємо вибірку даних із таблиці
    model->select();
}

void WaterbodyList::setupModelFish(const QString& tableName, const QStringList& headers) {
    /* Виконуємо ініціалізацію моделі представлення даних
     * з вказанням імені таблиці в базі даних, до якої
     * буде виконуватись звернення
     * */
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);

    // Встановлюємо назви стовпців в таблиці із сортуванням даних
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    // Встановлюємо сортування по збільшення даних по нульовому стовпцю'2ry'2ry'2ry
    model->setSort(0, Qt::AscendingOrder);
}

void WaterbodyList::createFishUI() {
    // Встановлюємо модель для TableView
    ui->tableView->setModel(model);
    // Приховуємо колонку з id таблиці БД
    ui->tableView->setColumnHidden(0, true);
    // Дозволяємо виділення рядків
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Встановлюємо режим виділення лише одного рядка в таблиці
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Встановлюємо розмір колонок по вмісту
    ui->tableView->resizeColumnsToContents();
    // Встановлюємо стратегію редагування - при подвійному кліку
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    // Розтягуємо останній стовпчик tableView на всю ширину вікна
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    // Виконуємо вибірку даних із таблиці
    model->select();
}

void WaterbodyList::setupModelWaterbody(const QString& tableName, const QStringList& headers) {
    /* Виконуємо ініціалізацію моделі представлення даних
     * з вказанням імені таблиці в базі даних, до якої
     * буде виконуватись звернення
     * */
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);

    // Встановлюємо назви стовпців в таблиці із сортуванням даних
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    // Встановлюємо сортування по збільшення даних по нульовому стовпцю'2ry'2ry'2ry
    model->setSort(0, Qt::AscendingOrder);
}

void WaterbodyList::createWaterbodyUI() {
    // Встановлюємо модель для TableView
    ui->tableView->setModel(model);
    // Приховуємо колонку з id таблиці БД
    ui->tableView->setColumnHidden(0, true);
    // Дозволяємо виділення рядків
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Встановлюємо режим виділення лише одного рядка в таблиці
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Встановлюємо розмір колонок по вмісту
    ui->tableView->resizeColumnsToContents();
    // Встановлюємо стратегію редагування - при подвійному кліку
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    // Розтягуємо останній стовпчик tableView на всю ширину вікна
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    // Виконуємо вибірку даних із таблиці
    model->select();
}
