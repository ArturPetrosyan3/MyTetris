#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include "shape.h"
class Board  : public QWidget
{
public:
    Board();
    Board(QWidget *parent = 0);
private:
    enum { BoardWidth = 10, BoardHeight = 22 };
    //Shape shape[]
    
};

#endif // BOARD_H
