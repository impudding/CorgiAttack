#include"game.h"
#include<QGraphicsScene>
#include"doghouse.h"
#include"artillery.h"

Game::Game()
{
    //create the scene
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,600,800);

    //set the scene
    setScene(scene);

    DogHouse *doghouseA = new DogHouse();
    DogHouse *doghouseB = new DogHouse();
    doghouseB->setPos(370,500);
    scene->addItem(doghouseA);
    scene->addItem(doghouseB);


    setFixedSize(600,800);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}

void Game::mousePressEvent(QMouseEvent *event)
{
  //create artillery
    Artillery *artillery = new Artillery();
    artillery->setPos(event->pos());

    scene->addItem(artillery);

}
