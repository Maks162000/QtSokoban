#include "FloorMapItem.h"

namespace Sokoban {
;

FloorMapItem::FloorMapItem()
{

}

FloorMapItem::~FloorMapItem()
{

}

MapItemType FloorMapItem::itemType() const
{
    return MapItemType::Floor;
}

void FloorMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint FloorMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void FloorMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void FloorMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void FloorMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;


}

bool FloorMapItem::isMoveable() const
{
    return false;
}

void FloorMapItem::show()
{

    vision = 1;

}

void FloorMapItem::hide()
{

    vision = 0;

}

bool FloorMapItem::isVisible()
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



void FloorMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}

bool FloorMapItem::availableСell() const
{
    return true;
}

} // end of namespace Sokoban
