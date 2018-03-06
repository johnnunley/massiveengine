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

#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include "vector.h"

class _PVPairing {
  public:
    Vector v;
    Point p;
};

class Polygon {
  private:
    int size;
    _PVPairing * pointVectors;
    _PVPairing getPVPairing(int index);
  public:
    Polygon(Point *, Vector *, int);
    ~Polygon();
    int count();
    Point getPoint(int);
    Vector getVector(int);
    void setPoint(int,Point);
    void setVector(int,Vector); 
};

#endif
