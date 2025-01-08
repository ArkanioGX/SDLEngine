#ifndef SCENE08TEXTUREQUADMOVING_HPP
#define SCENE08TEXTUREQUADMOVING_HPP
#include <SDL3/SDL_gpu.h>
#include "Scene.hpp"
#include <array>
#include <string>
using std::array;
using std::string;
#include "QuadObject.hpp"

class Scene08TextureQuadMoving : public Scene
{
public:
    void Load(Renderer &renderer) override;
    bool Update(float dt) override;
    void Draw(Renderer &renderer) override;
    void Unload(Renderer &renderer) override;

private:
    Quad *quad;

    InputState inputState;
    float time{0};
};
#endif // SCENE08TEXTUREQUADMOVING_HPP