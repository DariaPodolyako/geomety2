#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(per_test, result_test)
{
    // Given
    const float r = 2;

    // When
    const float result = per(r);

    // Then
    const float expected = 12.566;
    const float tol = 0.001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(square_test, result_test)
{
    // Given
    const float r = 5;

    // When
    const float result = square(r);

    // Then
    const float expected = 78.5375;
    const float tol = 0.0001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(peres_test, result_test1)
{
    // Given
    const float r = 1;
    const float x = 2;
    const float y = 3;
    const float r1 = 1;
    const float x1 = 4;
    const float y1 = 3;


    // When
    const float result = peres(r, x, y, r1, x1, y1);

    // Then
    const float expected = 1;
    const float tol = 0.000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(peres_test, result_test2)
{
    // Given
    const float r = 1;
    const float x = 2;
    const float y = 3;
    const float r1 = 2;
    const float x1 = 4;
    const float y1 = 3;


    // When
    const float result = peres(r, x, y, r1, x1, y1);

    // Then
    const float expected = 2;
    const float tol = 0.000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(peres_test, result_test3)
{
    // Given
    const float r = 1;
    const float x = 1;
    const float y = 1;
    const float r1 = 1;
    const float x1 = 5;
    const float y1 = 5;


    // When
    const float result = peres(r, x, y, r1, x1, y1);

    // Then
    const float expected = 3;
    const float tol = 0.000001;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
