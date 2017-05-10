#ifndef DOGHOUSE_H
#define DOGHOUSE_H

#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QPointF>
#include<QObject>

class DogHouse : public QGraphicsPixmapItem,public QObject
{

    Q_OBJECT

public:
    DogHouse(QGraphicsItem * parent = 0);

public slots:
    void attack_target();

private://素材放這裡
    QPointF attack_dest;

};

#endif//GAME_H
