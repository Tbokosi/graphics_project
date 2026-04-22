#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <string>
using namespace std;
using namespace glm;

class GraphicsObject{
    public:
    virtual void Initialise(const string& shaderPath, const string& texturePath)=0;
    virtual void Update(float deltaTime) =0;
    virtual void Draw()=0;
    virtual void CleanUp()=0;

    virtual ~GraphicsObject(){}

    protected:
    mat4 m_transform;
    unsigned int m_VBO;
    unsigned int M_VAO;
};
  
