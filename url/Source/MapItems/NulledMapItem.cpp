#include "NulledMapItem.h"

namespace Sokoban {
;

NulledMapItem::NulledMapItem()
{

}

NulledMapItem::~NulledMapItem()
{

}

MapItemType NulledMapItem::itemType() const
{
    return MapItemType::None;
}

void NulledMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint NulledMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void NulledMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void NulledMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void NulledMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;


}

bool NulledMapItem::isMoveable() const
{
    return false;
}

void NulledMapItem::show()
{

    vision = 1;

}

void NulledMapItem::hide()
{

    vision = 0;

}

bool NulledMapItem::isVisible()
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



void NulledMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}

bool NulledMapItem::availableСell() const
{
    return false;
}

} // end of namespace Sokoban
