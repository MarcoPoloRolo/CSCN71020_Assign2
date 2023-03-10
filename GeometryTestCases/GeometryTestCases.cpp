#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

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

		TEST_METHOD(setWidthTestONE) {
			//setWidth test ONE with expected = 23, input = 23
			int expectedwidth1 = 23;
			int width1 = 8;
			int inputwidth1 = 23;
			setWidth(inputwidth1, &width1);
			Assert::AreEqual(expectedwidth1, width1);
		}

		TEST_METHOD(setWidthTestTWO) {
			//setWidth test TWO with expected = -15, input = -15
			int expectedwidth2 = -15;
			int width2 = 8;
			int inputwidth2 = -15;
			setWidth(inputwidth2, &width2);
			Assert::AreEqual(expectedwidth2, width2);
		}

		TEST_METHOD(setWidthTestTHREE) {
			//setWidth test THREE with expected = 120, input = 120
			int expectedwidth3 = 120;
			int width3 = 8;
			int inputwidth3 = 120;
			setWidth(inputwidth3, &width3);
			Assert::AreEqual(expectedwidth3, width3);
		}

		TEST_METHOD(setLengthTestONE) {
			//setLength test ONE with expected = 15, input = 15
			int expectedLength1 = 15;
			int length1 = 10;
			int inputLength1 = 15;
			setLength(inputLength1, &length1);
			Assert::AreEqual(expectedLength1, length1);
		}

		TEST_METHOD(setLengthTestTWO) {
			//setLength test TWO with expected = 4.8, input = 4.8
			int expectedLength2 = 4.8;
			int length2 = 10;
			int inputLength2 = 4.8;
			setLength(inputLength2, &length2);
			Assert::AreEqual(expectedLength2, length2);
		}

		TEST_METHOD(setLengthTestTHREE) {
			//setLength test TWO with expected = 0, input = 0
			int expectedLength3 = 0;
			int length3 = 10;
			int inputLength3 = 0;
			setLength(inputLength3, &length3);
			Assert::AreEqual(expectedLength3, length3);
		}
	};
}
