#include "collisions.hpp"

// verificando as bordas do mapa
bool inRange(float x, float bound1, float bound2)
{
    float low = std::min(bound1, bound2);
    float high = std::max(bound1, bound2);
    return (x <= high && x >= low);
}

bool collidingTest(float limite, float bboxMax, float bboxMin)
{
    bool isColliding = inRange(limite, bboxMax, bboxMin) || inRange(-limite, bboxMax, bboxMin);

    return isColliding;
}


