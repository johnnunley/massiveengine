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

#include "range.h"

#define TEMPLATE template <classname T>

TEMPLATE Range::Range(T minc, T maxc) : min(minc), max(maxc) {
}

TEMPLATE T Range::getMax() { return this->max; }
TEMPLATE T Range::getMin() { return this->min; }

TEMPLATE void Range::setMax(T val) { this->max = val; }
TEMPLATE void Range::setMin(T val) { this->min = val; }

TEMPLATE bool Range::compare(T val) {
  return (this->max >= val &&
	  this->min <= val);
}

TEMPLATE bool Range::process(T val, T min, T max) {
  return Range(min,max).compare(val);
}
