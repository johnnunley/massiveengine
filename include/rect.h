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

class Rectangle {
  private:
    coord_t x;
    coord_t y;
    coord_t z;
    dist_t w;
    dist_t l;
    dist_t h;
  public:
    Rectangle(coord_t,coord_t,coord_t,dist_t,dist_t,dist_t);
    Rectangle(Point,Size);
    Rectangle();
    coord_t getX();
    coord_t getY();
    coord_t getZ();
    void setX(coord_t);
    void setY(coord_t);
    void setZ(coord_t);
};

#endif