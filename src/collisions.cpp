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

bool collisionSpaceshipAsteroid(glm::vec4 spaceship_pos, AsteroidObj asteroide){

//    bool collision_x = true;
//
//    bool collision_y = false;
//
//    bool collision_z = true;

    bool collision_x = collidingTest(asteroide.pos_x-0.1f, asteroide.pos_x+0.1f, spaceship_pos.x-2.0f, spaceship_pos.x+2.0f);

    bool collision_y = collidingTest(asteroide.pos_y-0.1f, asteroide.pos_y+0.1f, spaceship_pos.y+1.0f, spaceship_pos.y-1.0f);

    bool collision_z = collidingTest(asteroide.pos_z-0.1f, asteroide.pos_z+0.1f, spaceship_pos.z+0.25f, spaceship_pos.z);

    return collision_x && collision_y && collision_z;
}


