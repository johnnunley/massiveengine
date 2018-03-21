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

#include "model.h"

Model::Model(Polygon *poly, int s, Rotation r, Scale sc) : polys(poly), size(s), rotation(r), scale(sc) { }

Model::Model(Polygon *poly, int s) : Model(poly,s,Rotation(),Scale()) { }

Model::Model() : Model(new Polygon[0],0) { }

Model::~Model() {
  delete this->polys;
}

Rotation Model::getRotation() { return this->rotation; }
Scale Model::getScale() { return this->scale; }
void Model::setRotation(Rotation v) { this->rotation = v; }
void Model::setScale(Scale s) { this->scale = v; }

int Model::polygonCount() { return this->size; }

angle_t Model::getXAngle() { return this->rotation.getX(); }
angle_t Model::getYAngle() { return this->rotation.getY(); }
void Model::setXAngle(angle_t v) { this->rotation.setX(v); }
void Model::setYAngle(angle_t v) { this->rotation.setY(v); }

dist_t Model::getXScale() { return this->scale.getX(); }
dist_t Model::getYScale() { return this->scale.getY(); }
dist_t Model::getZScale() { return this->scale.getZ(); }
void Model::setXScale(dist_t v) { this->scale.setX(v); }
void Model::setYScale(dist_t v) { this->scale.setY(v); }
void Model::setZScale(dist_t v) { this->scale.setZ(v); }

bool Model::operator==(const Model &other) {
  return (this->rotation == other.rotation) &&
         (this->scale == other.scale);
}

bool Model::operator!=(const Model &other) {
  return !(*this == other);
}
