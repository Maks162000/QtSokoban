#include "StockMapItem.h"

namespace Sokoban {
;

StockMapItem::StockMapItem()
{

}

StockMapItem::~StockMapItem()
{

}

MapItemType StockMapItem::itemType() const
{
    return MapItemType::Stock;
}

void StockMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint StockMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void StockMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void StockMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void StockMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;



}

bool StockMapItem::activeStock() const
{
    /// Не дописал
}

bool StockMapItem::availableСell() const
{
    return true;
}


bool StockMapItem::isMoveable() const
{
    return false;
}

void StockMapItem::show()
{

    vision = 1;

}

void StockMapItem::hide()
{

    vision = 0;

}

bool StockMapItem::isVisible()
{
    if(vision==1)

    {
        return true;
    }

    else
    {
        return false;
    }
}


void StockMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}



} // end of namespace Sokoban
