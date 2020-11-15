#include <math/mathUtils.h>

MathUtils::MathUtils(int x, int y) : x(x), y(y)
{
}

MathUtils::~MathUtils()
{
}

int MathUtils::sum()
{
    return x + y;
}
