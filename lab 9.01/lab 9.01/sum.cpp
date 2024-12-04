#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" 

using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
    double arcth = 0.5 * log((x + 1) / (x - 1)); 
    n = 0;
    a = 1.0 / x; 
    s = a;

    do {
        n++;
        dod();
        s += a;
    } while (fabs(a) >= e);
}