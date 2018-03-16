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

#include "size.h"

Size::Size(dist_t lc, dist_t wc, dist_t hc) : l(lc), w(wc), h(hc) { }

Size::Size() : Size(0.0,0.0,0.0) { }

dist_t Size::getLength() { return this->l; }
dist_t Size::getWidth() { return this->w; }
dist_t Size::getHeight() { return this->h; }

void Size::setLength(dist_t v) { this->l = v; }
void Size::setWidth(dist_t v) { this->w = v; }
void Size::setHeight(dist_t v) { this->h = v; }

bool Size::operator==(const Size &other) {
  return ((this->l == other->getLength()) &&
	  (this->w == other->getWidth())  &&
	  (this->h == other->getHeight()));
}

bool Size::operator!=(const Size &other) {
  return !(*this == other);
}
