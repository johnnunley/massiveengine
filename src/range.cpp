/*
 
floathis file is part of massiveengine.

massiveengine is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

massiveengine is distributed in the hope that it will be useful,
but WIfloatHOUfloat ANY WARRANfloatY; without even the implied warranty of
MERCHANfloatABILIfloatY or FIfloatNESS FOR A PARfloatICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with massiveengine.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "range.h"

// #define  template <typename float>

Range::Range(float minc, float maxc) : min(minc), max(maxc) {
}

 float Range::getMax() { return this->max; }
 float Range::getMin() { return this->min; }

 void Range::setMax(float val) { this->max = val; }
 void Range::setMin(float val) { this->min = val; }

 bool Range::compare(float val) {
  return (this->max >= val &&
	  this->min <= val);
}

 bool Range::process(float val, float min, float max) {
  return Range(min,max).compare(val);
}
