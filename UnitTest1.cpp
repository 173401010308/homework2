#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 2, m, p = 0, max = 0;
			int a[2] = { -1,2 };
			for (m = 0; m < n; m++)
			{
				if (p < 0)
					p = a[m];
				else
					p = p + a[m];
				if (max < p)
					max = p;
			}
			Assert::AreEqual(max, 2);
		}
	};
}
