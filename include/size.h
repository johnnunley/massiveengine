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

#ifndef SIZE_H
#define SIZE_H

#include "massiveengine_config.h"

class Size {
  private:
    dist_t l;
    dist_t w;
    dist_t h;
  public:
    Size(dist_t,dist_t,dist_t);
    Size();
    dist_t getLength();
    dist_t getWidth();
    dist_t getHeight();
    void setLength(dist_t);
    void setWidth(dist_t);
    void setHeight(dist_t);
};

#endif
