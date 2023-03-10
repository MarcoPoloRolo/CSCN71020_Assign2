#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GeometryTestCases
{
	TEST_CLASS(GeometryTestCases)
	{
	public:
		
		TEST_METHOD(PerimeterTest) {
			int perimLength = 5;
			int perimWidth = 10;
			int expectedPerim = 30;
			int actualPerim = getPerimeter(&perimLength, &perimWidth);
			Assert::AreEqual(expectedPerim, actualPerim);
		}

		TEST_METHOD(AreaTest) {
			int areaLength = 5;
			int areaWidth = 10;
			int expectedArea = 50;
			int actualArea = getArea(&areaLength, &areaWidth);
			Assert::AreEqual(expectedArea, actualArea);

		}
	};
}
