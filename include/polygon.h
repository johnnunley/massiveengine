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

class Polygon {
  private:
    int size;
    Point points;
  public:
    Polygon(Point *, int);
    ~Polygon();
    int count();
    Point getPoint(int);
    Vector getVector(int);
    void setPoint(int,Point);

    // NOTE: this is probably impossible with vector calculations, and is not to be trifled with
    //void setVector(int,Vector); 

    bool operator==(const Point &other);
    bool operator!=(const Point &other);
};

#endif
