#include "WallMapItem.h"

namespace Sokoban {
;

WallMapItem::WallMapItem()
{

}

WallMapItem::~WallMapItem()
{
}

MapItemType WallMapItem::itemType() const
{
    return MapItemType::Wall;
}

void WallMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint WallMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void WallMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void WallMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void WallMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;


}

bool WallMapItem::isMoveable() const
{
    return false;
}

void WallMapItem::show()
{

    vision = 1;

}

void WallMapItem::hide()
{

    vision = 0;

}

bool WallMapItem::isVisible()
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



void WallMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}

bool WallMapItem::availableСell() const
{
    return false;
}

} // end of namespace Sokoban







