#include "CppUnitTest.h"
#include "..\MaxLib\Max.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MaxUnitTest
{
	TEST_CLASS(MaxUnitTest)
	{
	public:
		

		TEST_METHOD(TestThirdDigitSum)
		{
			int sum;
			sum = thirdDigitSum(247365);
			Assert::AreEqual(sum, 5);
			sum = thirdDigitSum(22);
			Assert::AreEqual(sum, 0);
			sum = thirdDigitSum(2212);
			Assert::AreEqual(sum, 2);
			sum = thirdDigitSum(5515111);
			Assert::AreEqual(sum, 6);
		}

	};
}
