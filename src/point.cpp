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

#include "point.h"

Point::Point(coord_t xc, coord_t yc, coord_t zc) : x(xc), y(yc), z(zc) { }

Point::Point() : Point(0.0,0.0,0.0) { }

coord_t Point::getX() { return this->x; }
coord_t Point::getY() { return this->y; }
coord_t Point::getZ() { return this->z; }
void Point::setX(coord_t v) { this->x = v; }
void Point::setY(coord_t v) { this->y = v; }
void Point::setZ(coord_t v) { this->z = v; }
