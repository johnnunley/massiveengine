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

#ifndef RANGE_H
#define RANGE_H

class Range {
  private:
    float max;
    float min;
  public:
    Range(float,float);
    float getMax();
    float getMin();
    void setMax(float);
    void setMin(float);
    bool compare(float);
    static bool process(float,float,float);
};

#endif
