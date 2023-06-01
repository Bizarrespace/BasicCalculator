#include "pch.h"
#include "..\CalCalculator\Header.h" 

TEST(calTest, addFunction) {
	calculator calc;
	EXPECT_EQ(calc.add(2, 2), 4);
}

TEST(calTest, subFunction) {
	calculator calc;
	EXPECT_EQ(calc.subtract(2, 2), 0);
}