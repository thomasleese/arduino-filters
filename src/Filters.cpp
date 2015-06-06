/*
  Filters.cpp - Library implementing a load of filters.
  Created by Tom Leese, June 6, 2015.
  Released under the MIT License.
*/

#include <Arduino.h>

#include "Filters.h"


using namespace Filters;


Complementary::Complementary(double proportion) {
    mProportion = proportion;
    mOppositeProportion = 1.0 - proportion;
}

double Complementary::apply(double value1, double value2) const {
    return mProportion * value1 + mOppositeProportion * value2;
}
