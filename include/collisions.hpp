
#include <fstream>

// Headers da biblioteca GLM: criação de matrizes e vetores.
#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>

// Estrutura de asteroides (obstaculos)
struct AsteroidObj
{
    float pos_x;
    float pos_y;
    float pos_z;
    float rotation_speed_x;
    float rotation_speed_y;

    AsteroidObj()
    {
        pos_x = 0.0f;
        pos_y = -1.0f;
        pos_z = -60.0f;
        rotation_speed_x = 1.0f;
        rotation_speed_y = 1.0f;
    }
};

struct UFOObj
{
    float pos_x;
    float pos_y;
    float pos_z;
    float rotation_speed_x;

    UFOObj()
    {
        pos_x = 0.0f;
        pos_y = -10.0f;
        pos_z = -60.0f;
        rotation_speed_x = 1.0f;
    }
};

bool inRange(float x, float bound1, float bound2);

bool collidingTest(float limite1, float limite2, float bboxMax, float bboxMin);

bool collisionSpaceshipAsteroid(glm::vec4 spaceship_pos, AsteroidObj asteroide);
