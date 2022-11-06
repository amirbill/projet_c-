#ifndef MINIMAP_H
#define MINIMAP_H
#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

namespace Ui {
class minimap;
}
class minimap :public QDialog
{

 Q_OBJECT
public:
    minimap();
    explicit minimap(QWidget *parent = 0);
    ~minimap();
private:
    Ui::minimap *ui;

    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
};

#endif // MINIMAP_H
