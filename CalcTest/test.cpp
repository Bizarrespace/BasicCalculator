#include "pch.h"
#include "..\CalCalculator\Header.h" 
#include <sstream>

TEST(calTest, addPosNum) {
	calculator calc;
	EXPECT_EQ(calc.add(2, 2), 4);
}

TEST(calTest, addNegNum) {
	calculator calc;
	EXPECT_EQ(calc.add(-2, -5), -7);
}

TEST(calTest, addZero) {
	calculator calc;
	double result = calc.add(8.75, 0.0);
	EXPECT_DOUBLE_EQ(result, 8.75);
}

TEST(calTest, addBigNum) {
	calculator calc;
	double result = calc.add(1.0e9, 2.0e9);
	EXPECT_DOUBLE_EQ(result, 3.0e9);
}

TEST(calTest, subtractPosNum) {
	calculator calc;
	double result = calc.subtract(7.5, 2.5);
	EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST(calTest, divideNegNum) {
	calculator calc;
	double result = calc.divide(-10.0, -2.0);
	EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST(calTest, multiplyZeroByNumber) {
	calculator calc;
	double result = calc.multiply(0.0, 3.75);
	EXPECT_DOUBLE_EQ(result, 0.0);
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}