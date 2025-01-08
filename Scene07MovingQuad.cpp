#include "Scene07MovingQuad.hpp"
#include <SDL3/SDL.h>
#include "Renderer.hpp"
#include "PositionTextureVertex.hpp"
#include "Mat4.hpp"

void Scene08TextureQuadMoving::Load(Renderer &renderer)
{
    quad = new Quad(renderer);
}

bool Scene08TextureQuadMoving::Update(float dt)
{
    const bool isRunning = ManageInput(inputState);
    time += dt;
    quad->Rotate(time * 2, time, time * 0.5);
    return isRunning;
}

void Scene08TextureQuadMoving::Unload(Renderer &renderer)
{
    delete quad;
}

void Scene08TextureQuadMoving::Draw(Renderer &renderer)
{
    quad->Draw(renderer);
}