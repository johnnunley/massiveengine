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

#ifndef MODEL_H
#define MODEL_H

#include "polygon.h"

class Model {
  private:
    int size;
    Polygon *polys;
    Rotation rotation;
    Scale scale;
  public:
    Model(Polygon *, int, Rotation, Scale);
    Model(Polygon *, int);
    Model();

    ~Model();

    int polygonCount();

    Rotation getRotation();
    void setRotation(Rotation);
    Scale getScale();
    void setScale(Scale s);

    angle_t getXAngle();
    angle_t getYAngle();
    void setXAngle(angle_t);
    void setYAngle(angle_t);

    dist_t getXScale();
    dist_t getYScale();
    dist_t getZScale();
    void setXScale(dist_t);
    void setYScale(dist_t);
    void setZScale(dist_t);

    bool operator==(const Model &other);
    bool operator!=(const Model &other);
};

#endif
