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

#ifndef POINT_H
#define POINT_H

#include "massiveengine_config.h"

class Point {
  private:
    coord_t x;
    coord_t y;
    coord_t z;
  public:
    Point();
    Point(coord_t,coord_t,coord_t);
    coord_t getX();
    coord_t getY();
    coord_t getZ();
    void setX(coord_t);
    void setY(coord_t);
    void setZ(coord_t);

};

#endif
