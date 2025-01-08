#ifndef SCENE05TRIANGLEINDEXED_HPP
#define SCENE05TRIANGLEINDEXED_HPP
#include <SDL3/SDL_gpu.h>
#include "Scene.hpp"
#include <array>
#include <string>
using std::array;
using std::string;
class Scene05TriangleIndexed : public Scene
{
public:
    void Load(Renderer &renderer) override;
    bool Update(float dt) override;
    void Draw(Renderer &renderer) override;
    void Unload(Renderer &renderer) override;

private:
    InputState inputState;
    const char *basePath;
    SDL_GPUShader *vertexShader;
    SDL_GPUShader *fragmentShader;
    SDL_GPUGraphicsPipeline *pipeline;
    SDL_GPUBuffer *vertexBuffer;
    SDL_GPUBuffer *indexBuffer;
    bool useIndexBuffer{true};
};
#endif // SCENE05TRIANGLEINDEXED_HPP