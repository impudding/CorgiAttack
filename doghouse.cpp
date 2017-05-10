#include"doghouse.h"
#include<QPixmap>
#include"artillery.h"
#include"game.h"
#include<QTimer>

extern Game *game;

DogHouse::DogHouse(QGraphicsItem *parent) : QGraphicsPixmapItem(parent), QObject()
{
    //set the graphics
    setPixmap(QPixmap(":/Documents/doghouse.png"));

    //set the position of doghouseA
    setPos(70,500);


}
//void DogHouse::attack_target()
//{

//}


