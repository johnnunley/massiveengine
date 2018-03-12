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

#include "rect.h"

Rectangle::Rectangle(coord_t x, coord_t y, coord_t z, coord_t w, coord_t l, coord_t h) {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
  this->l = l;
  this->h = h;
}

Rectangle::Rectangle(Point p, Size s) : Rectangle(p.getX(),p.getY(),p.getZ(),s.getWidth(),s.getLength(),s.getHeight()) { }

Rectangle::Rectangle() : Rectangle(0.0,0.0,0.0,0.0,0.0,0.0) { }

Rectangle Rectangle::LRTBFB(coord_t left, coord_t right, coord_t top, coord_t bottom, coord_t front, coord_t back) {
  return Rectangle(left,top,front,right-left,bottom-top,back-front);
}

coord_t Rectangle::getX() { return this->x; }
coord_t Rectangle::getY() { return this->y; }
coord_t Rectangle::getZ() { return this->z; }

void Rectangle::setX(coord_t v) { this->x = v; }
void Rectangle::setY(coord_t v) { this->y = v; }
void Rectangle::setZ(coord_t v) { this->z = v; }

dist_t Rectangle::getWidth() { return this->w; }
dist_t Rectangle::getLength() { return this->l; }
dist_t Rectangle::getHeight() { return this->h; }

void Rectangle::setWidth(dist_t v) { this->w = v; }
void Rectangle::setLength(dist_t v) { this->l = v; }
void Rectangle::setHeight(dist_t v) { this->h = v; }


coord_t Rectangle::left() { return this->x; }
coord_t Rectangle::right() { return this->x + this->w; }
coord_t Rectangle::top() { return this->y; }
coord_t Rectangle::bottom() { return this->y + this->l; }
coord_t Rectangle::front() { return this->z; }
coord_t Rectangle::back() { return this->z + this->h; }

Point Rectangle::getPoint() { return Point(this->x,this->y,this->z); }
Size Rectangle::getSize() { return Size(this->w,this->l,this->h); }

void Rectangle::setPoint(Point p) {
  this->x = p.getX();
  this->y = p.getY();
  this->z = p.getZ();
}

void Rectangle::setSize(Size s) {
  this->w = s.getWidth();
  this->l = s.getLength();
  this->h = s.getHeight();
}

bool Rectangle::containsXYZ(coord_t x, coord_t y, coord_t z) {
  return ((this->left() <= x && this->right() >= x) &&
          (this->top() <= y && this->bottom() >= y) &&
	  (this->front() <= z && this->back() >= z));
}

bool Rectangle::contains(Point p) { return this->containsXYZ(p.getX(),p.getY(),p.getZ()); }

bool Rectangle::containsRect(Rectangle rect) {
  return ((this->left() <= rect.left() && this->right() >= rect.right()) &&
          (this->top() <= rect.top() && this->bottom() >= rect.bottom()) &&
	  (this->front() <= rect.front() && this->back() >= rect.back()));
}

bool Rectangle::containsPolygon(Polygon poly) {
  int count = 0;
  for (int i = 0; i < poly.count(); i++) {
    Point pt = poly.getPoint(i);
    if (this->contains(pt))
      count++;
  }
  return count >= poly.size();
}

bool Rectangle::intersects(Rectangle rect) {
 // TODO: implement this once we have ranges
 return false;
}

bool Rectangle::intersectsPolygon(Polygon poly) {
  for (int i = 0; i < poly.count(); i++) {
    if (this->contains(poly.getPoint(i)))
      return true;
  }
  return false;
}
