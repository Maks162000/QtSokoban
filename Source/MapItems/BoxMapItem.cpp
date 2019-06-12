#include "BoxMapItem.h"

namespace Sokoban {
;

BoxMapItem::BoxMapItem()
{

}

BoxMapItem::~BoxMapItem()
{

}

MapItemType BoxMapItem::itemType() const
{
    return MapItemType::Box;
}

void BoxMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint BoxMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void BoxMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void BoxMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void BoxMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;


}

bool BoxMapItem::isMoveable() const
{
    return true;
}

void BoxMapItem::show()
{

    vision = 1;

}

void BoxMapItem::hide()
{

    vision = 0;

}

bool BoxMapItem::isVisible()
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


bool BoxMapItem::canMove()
{
  //Не дописал

}


void BoxMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}

bool BoxMapItem::availableСell() const
{
    return false;
}

} // end of namespace Sokoban
