#include <gtest/gtest.h>
#include "vec3.h"

using namespace testing;

TEST(VEC3_TESTS, TEST_INIT_UNDEF)
{
    vec3 a();

    EXPECT_EQ(0.0, a[0]);
    EXPECT_EQ(0.0, a[1]);
    EXPECT_EQ(0.0, a[2]);
}

TEST(VEC3_TESTS, TEST_INIT_DEF)
{
    vec3 a(1, 2, 3);

    EXPECT_EQ(1.0, a[0]);
    EXPECT_EQ(2.0, a[1]);
    EXPECT_EQ(3.0, a[2]);
}


TEST(VEC3_TESTS, TEST_SUM)
{
    vec3 a(1, 0, 1);
    vec3 b(0, 1, 0);

    b = a + b;

    EXPECT_EQ(1.0, b[0]);
    EXPECT_EQ(1.0, b[1]);
    EXPECT_EQ(1.0, b[2]);
}

TEST(VEC3_TESTS, TEST_CONST)
{
    vec3 a(1, 0, 1);

    a = a*5;

    EXPECT_EQ(5.0, a[0]);
    EXPECT_EQ(0.0, a[1]);
    EXPECT_EQ(5.0, a[2]);

    a = a/5.0;

    EXPECT_EQ(1.0, a[0]);
    EXPECT_EQ(0.0, a[1]);
    EXPECT_EQ(1.0, a[2]);
}
