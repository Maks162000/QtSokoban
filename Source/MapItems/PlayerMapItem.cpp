#include "PlayerMapItem.h"
#include "FloorMapItem.h"

namespace Sokoban {
;

PlayerMapItem::PlayerMapItem()
{

}

PlayerMapItem::~PlayerMapItem()
{

}

MapItemType PlayerMapItem::itemType() const
{
    return MapItemType::Player;
}

void PlayerMapItem::setMap(Map *newMap)
{

  selectMap = newMap;

}

const QPoint PlayerMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void PlayerMapItem::setPosition(int x, int y)
{

   setPositionXY.setX(x);
   setPositionXY.setY(y);

}

void PlayerMapItem::setPosition(QPoint newPosition)
{

    setPositionXY=newPosition;

}

void PlayerMapItem::move(int dx, int dy)
{

    moveX = dx;
    moveY = dy;


}

bool PlayerMapItem::isMoveable() const
{
    return false;
}

void PlayerMapItem::show()
{

    vision = 1;

}

void PlayerMapItem::hide()
{

    vision = 0;

}

bool PlayerMapItem::isVisible()
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



void PlayerMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}

bool PlayerMapItem::canMove()
{
  //Не дописал

}

bool PlayerMapItem::availableСell() const
{
    return false;
}

} // end of namespace Sokoban
