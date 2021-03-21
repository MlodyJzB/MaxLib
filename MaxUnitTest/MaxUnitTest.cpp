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
		TEST_METHOD(TestMax1)
		{
			std::array<std::array<int, maxColumns>, maxRows> t = { {{1,2,3},{4,5,6},{7,8,9}} };
			int maxElement = max(t, 3, 3);
			Assert::AreEqual(maxElement, 0);
		}
		TEST_METHOD(TestMax2)
		{
			std::array<std::array<int, maxColumns>, maxRows> t = { {{121,2,223},{4,5,625144},{7,8,999}} };
			int maxElement = max(t, 3, 3);
			Assert::AreEqual(maxElement, 223);
		}
		TEST_METHOD(TestMax3)
		{
			std::array<std::array<int, maxColumns>, maxRows> t = { {{121,555555,223},{4,5,625144},{777777,8,999}} };
			int maxElement = max(t, 3, 3);
			Assert::AreEqual(maxElement, 777777);
		}
		TEST_METHOD(TestMax4)
		{
			std::array<std::array<int, maxColumns>, maxRows> t = { {{121,555555,223,444,23222},{4,5,625244,555,12345}} };
			int maxElement = max(t, 2, 5);
			Assert::AreEqual(maxElement, 625244);
		}
		TEST_METHOD(TestMax5)
		{
			std::array<std::array<int, maxColumns>, maxRows> t = { {{121,555555,223,444,23222,1000000,1552}} };
			int maxElement = max(t, 1, 7);
			Assert::AreEqual(maxElement, 1000000);
		}
	};
}

