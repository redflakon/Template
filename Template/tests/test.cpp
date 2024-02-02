#include <gtest/gtest.h>
#include "Header.hpp"

TEST(Tests, Example)
{
	const int a = 10, const b = 20;

	EXPECT_EQ(function(a, b), 30);
}
