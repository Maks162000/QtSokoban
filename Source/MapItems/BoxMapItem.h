#ifndef NULLEDMAPITEM_H
#define NULLEDMAPITEM_H

#include "MapItemBase.h"

namespace Sokoban {
;


class BoxMapItem : public MapItemBase
{
public:
    BoxMapItem();
    ~BoxMapItem() override;

    // MapItemBase interface
public:
    MapItemType  itemType() const override;
    const Map    *map() const override;
    void         setMap(Map *newMap) override;
    const QPoint position() const override;
    void         setPosition(int x, int y) override;
    void         setPosition(QPoint newPosition) override;
    void         move(int dx, int dy) override;
    bool         isMoveable() const override;
    void         show() override;
    void         hide() override;
    bool         isVisible() override;
    void         draw(QPainter * const painter) const override;
    bool         canMove(int newX, int newY)const override;
    bool         availableСell() const override;
private:
    Map* selectMap;
    QPoint setPositionXY;
    int moveX;
    int moveY;
    bool vision;

};

} // end of namespace Sokoban

#endif // NULLEDMAPITEM_H
