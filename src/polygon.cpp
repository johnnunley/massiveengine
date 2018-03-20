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

#include "polygon.h"

Polygon::Polygon(Point *p, int s) {
  this->size = s;
  this->points = p;
}

Polygon::~Polygon() {
  delete this->points;
}

int Polygon::count() {
  return this->size;
}

Point Polygon::getPoint(int index) {
  return this->points[index];
}

Vector Polygon::getVector(int index) {
  // TODO: vector calculations
  return this->points[index];
}

void Polygon::setPoint(int index, Point p) {
  this->points[index] = p;
}

bool Polygon::operator==(const Polygon &other) {
  if (this->size == other.size) return false;
  for (int i = 0; i < this->size; i++) {
    if (this->getPoint(i) != other.points[i])
      return false;
  }
  return true;
}

bool Polygon::operator!=(const Polygon &other) {
  return !(*this == other);
}
