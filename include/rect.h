/*
 
This file is part of massiveengine.

massiveengine is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

massiveengine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with massiveengine.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef RECT_H
#define RECT_H

#include "point.h"
#include "size.h"
#include "polygon.h"
#include "rect.h"
#include "range.h"

class Rectangle {
  private:
    coord_t x;
    coord_t y;
    coord_t z;
    dist_t w;
    dist_t l;
    dist_t h;

    // i define my ranges here and keep them in the rect to reduce overhead
    Range xwidth;
    Range ylength;
    Range zheight;

    void updateRanges(bool,bool,bool,bool);
  public:
    Rectangle(coord_t,coord_t,coord_t,dist_t,dist_t,dist_t);
    Rectangle(Point,Size);
    Rectangle();
    static Rectangle LRTBFB(coord_t,coord_t,coord_t,coord_t,coord_t,coord_t);

    coord_t getX();
    coord_t getY();
    coord_t getZ();
    void setX(coord_t);
    void setY(coord_t);
    void setZ(coord_t);

    dist_t getWidth();
    dist_t getLength();
    dist_t getHeight();
    void setWidth(dist_t);
    void setLegnth(dist_t);
    void setHeight(dist_t);

    coord_t left();
    coord_t right();
    coord_t top();
    coord_t back();
    coord_t front();
    coord_t bottom();

    Point getPoint();
    void setPoint(Point);
    Size getSize();
    void setSize(Size);

    bool contains(Point);
    bool containsXYZ(coord_t,coord_t,coord_t);
    bool containsRect(Rectangle);
    bool containsPolygon(Polygon);

    bool intersects(Rectangle);
    bool intersectsPolygon(Polygon);

    Rectagle getIntersectingRect(Rectangle);

    bool operator==(const Rectangle &other);
    bool operator!=(const Rectangle &other); 
};

#endif
