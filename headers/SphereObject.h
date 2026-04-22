#pragma once
#include "GraphicsObject.h"
#include "../headers/Sphere.h"
using namespace std;
using namespace glm;

class SphereObject : public GraphicsObject{
    public:
    SphereObject();

    void Initialise(const string& shaderPath, const string& texturePath) override;
    void Update(float deltaTime) override;
    void Draw()override;
    void CleanUp() override;

    void setPosition(float x, float y , float z);
    void setScale(float scale);
    void setOrbitSpeed(float orbitRadius, float orbitSpeed);
    void setSpinSpeed(float spinSpeed);
    void setParent(GraphicsObject* parent);

    vec3 GetPosition() const;

    void increaseSoinSpeed(float amount);
    void decreaseSpinSpeed(float amount);
    void increaseOrbitSpeed(float amount);
    void decreaseOrbitSpeed(float amount);


private: 

unsigned int m_shaderProgram;
unsigned int m_texture;
unsigned int m_EBO;

Sphere* m_sphere;

vec3 m_position;
float m_scale;

float m_spinAngle;
float m_spinSpeed;

float m_orbitAngle;
float m_orbitRadius;
float m_orbitSpeed;

SphereObject* m_parent;

unsigned int LoadTexture(const string& path);
unsigned int LoadShader(const string& vertPath, const string& fragPath)

};
