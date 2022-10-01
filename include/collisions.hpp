
#include <fstream>

// Headers da biblioteca GLM: criação de matrizes e vetores.
#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>

bool inRange(float x, float bound1, float bound2);

bool collidingTest(float limite1, float limite2, float bboxMax, float bboxMin);
