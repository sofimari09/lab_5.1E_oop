#include "pch.h"
#include "CppUnitTest.h"
#include "../Rational.cpp"
#include "../Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r(1, 2);
			Assert::IsTrue(Rational{ 1, 2 } == r);

		}
	};
}
