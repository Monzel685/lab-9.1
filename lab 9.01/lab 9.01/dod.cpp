#include "dod.h"
#include "var.h" // ��������� �������� ���������� ������
using namespace nsVar;
void nsDod::dod() {
	R = (2 * n - 1) / (2 * n * x * x + x * x);
	a *= R;
}