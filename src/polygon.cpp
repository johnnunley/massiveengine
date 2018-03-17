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

Polygon::Polygon(Point *p, Vector *p, int s) {
  this->size = s;
  this->pointVectors = new _PVPairing[s]; 
  for (int i = 0; i < s; i++) {
    this->pointVectors[s] = _PVPairing(p[s],v[s]);
  } 
}

Polygon::~Polygon() {
  delete this->pointVectors;
}

_PVPairing Polygon::getPVPairing(int index) {
  return this->pointVectors[index];
}

int Polygon:count() {
  return this->size;
}

Point Polygon::getPoint(int index) {
  return this->getPVPairing(index).p;
}

Vector Polygon::getVector(int index) {
  return this->getPVPairing(index).v;
}

void Polygon::setPoint(int index, Point p) {
  this->pointVectors[index].p = p;
}

void Polygon::setVector(int index, Vector v) {
  this->pointVectors[index].v = v;
}

bool Polygon::operator==(const Point &other) {
  if (this->size == other->count()) return false;
  for (int i = 0; i < this->size; i++) {
    if ((this->getPoint(i) != other->getPoint(i)) ||
	(this->getVector(i) != other->getVector(i)))
	    return false;
  }
  return true;
}

bool Polygon::operator!=(const Point &other) {
  return !(*this == other);
}
