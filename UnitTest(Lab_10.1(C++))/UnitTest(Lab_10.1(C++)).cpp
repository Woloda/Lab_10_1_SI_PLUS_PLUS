#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.1(C++)/Lab_10.1(C++).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab101C
{
	TEST_CLASS(UnitTestLab101C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[101] = "E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_10.1(C++)\\Lab_10.1(C++)\\test.txt";

			bool b = perevirka(fname);

			Assert::AreEqual(b, true);
		}
	};
}
