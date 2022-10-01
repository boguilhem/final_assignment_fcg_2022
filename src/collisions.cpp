#include "collisions.hpp"

// verificando as bordas do mapa
bool inRange(float x, float bound1, float bound2)
{
    float low = std::min(bound1, bound2);
    float high = std::max(bound1, bound2);
    return (x <= high && x >= low);
}

bool collidingTest(float limite1, float limite2, float bboxMax, float bboxMin)
{
    bool isColliding = inRange(limite1, bboxMax, bboxMin) || inRange(limite2, bboxMax, bboxMin);

    return isColliding;
}


