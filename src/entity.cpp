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

#include "entity.h"

Entity::Entity(Model m, Rectangle *hb, int s) : model(m), hitboxes(hb), size(s) { }

Entity::~Entity() {
  delete hitboxes;
}

Model Entity::getModel() {
  return this->model;
}

Rectangle Entity::getHitbox(int index) {
  return this->hitboxes[index];
}

int Entity::getHitboxCount() {
  return this->size;
}
