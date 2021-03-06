//
// Created by botan on 6/2/2020.
//


#ifndef ML_TEST_ACTIVATIONFUNCTION_H
#define ML_TEST_ACTIVATIONFUNCTION_H


#include <cstring>
#include "../matrix/Matrix.h"

class ActivationFunction {

public:

    virtual string getName() = 0;

    virtual void activate(Matrix &matrix) = 0;

    virtual double getDerivation(double x) = 0;

};

#endif //ML_TEST_ACTIVATIONFUNCTION_H
