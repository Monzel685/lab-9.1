#include "pch.h"
#include "CppUnitTest.h"
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Ініціалізуємо змінні
			x = 2.0;  // тестове значення
			e = 0.0001; // точність
			s = 0.0;  // сума
			n = 0;    // кількість доданків

			// Очікуване значення (може бути обчислене за допомогою математичних засобів)
			double expected_arcth = 0.5 * log((x + 1) / (x - 1));

			// Викликаємо тестовану функцію
			sum();

			// Перевіряємо, чи результат обчислення співпадає з очікуваним
			Assert::AreEqual(expected_arcth, s, 0.0001, L"Calculated value does not match expected value");
		}
	};
}
