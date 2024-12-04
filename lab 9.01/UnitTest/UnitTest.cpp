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
			// ���������� ����
			x = 2.0;  // ������� ��������
			e = 0.0001; // �������
			s = 0.0;  // ����
			n = 0;    // ������� �������

			// ��������� �������� (���� ���� ��������� �� ��������� ������������ ������)
			double expected_arcth = 0.5 * log((x + 1) / (x - 1));

			// ��������� ��������� �������
			sum();

			// ����������, �� ��������� ���������� ������� � ����������
			Assert::AreEqual(expected_arcth, s, 0.0001, L"Calculated value does not match expected value");
		}
	};
}
