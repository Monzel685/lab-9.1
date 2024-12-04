#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod() {
	R = (2 * n - 1) / (2 * n * x * x + x * x);
	a *= R;
}