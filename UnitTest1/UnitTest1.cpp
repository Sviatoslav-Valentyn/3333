#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.5/Date.h"
#include "../lab 1.5/Date.cpp"
#include "../lab 1.5/Triad.h"
#include "../lab 1.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Date z;
			z.DayCheck(-5);
			bool b = z.DayCheck(-5);
			Assert::AreEqual(false, b);
		}
	};
}
