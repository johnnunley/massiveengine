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

#ifndef VECTOR_H
#define VECTOR_H

#include "massiveengine_config.h"
class Vector {
  private:
    angle_t x;
    angle_t y;
  public:
    Vector(angle_t,angle_t);
    Vector();

    angle_t getX();
    angle_t getY();

    void setX(angle_t);
    void setY(angle_t);
};

typedef Vector Point2D;
typedef Vector Rotation;

#endif
