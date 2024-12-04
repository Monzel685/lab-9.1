#include "series.h"
#include <cmath>

double calculateSeries(double x, double eps, int& n) {
    double a = x;
    double s = a;
    n = 0;
    do {
        n++;
        double R = (2 * n - 1) / (2 * n * x * x + x * x);
        a *= R;
        s += a;
    } while (fabs(a) >= eps);
    return s;
}