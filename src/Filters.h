/*
  Filters.h - Library implementing a load of filters.
  Created by Tom Leese, June 6, 2015.
  Released under the MIT License.
*/

#ifndef FILTERS_H
#define FILTERS_H

namespace Filters {

    class Complementary {

    public:
        Complementary(double proportion);

        double apply(double value1, double value2) const;

    private:
        double mProportion;
        double mOppositeProportion;

    };

}

#endif // FILTERS_H
