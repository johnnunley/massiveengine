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

#include "vector.h"

Vector::Vector(angle_t xc, angle_t yc) : x(xc), y(yc) { }

Vector::Vector() : Vector(0.0,0.0) { }

angle_t Vector::getX() { return this->x; }
angle_t Vector::getY() { return this->y; }

void Vector::setX(angle_t v) { this->x = v; }
void Vector::setY(angle_t v) { this->y = v; }
