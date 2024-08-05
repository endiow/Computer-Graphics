#pragma once
#include <iostream>
#include <omp.h> 
#include <memory>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>



using namespace glm;

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::make_shared;
using std::shared_ptr;

using point3 = vec3;
using color = vec3;
