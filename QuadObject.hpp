#include "Renderer.hpp"
#include "Mat4.hpp"

typedef struct FragMultiplyUniform
{
    float r, g, b, a;
} fragMultiplyUniform;

class Quad
{
private:
    void Load(Renderer &rendererT);
    void Unload();

    Renderer &renderer;

    const char *basePath{nullptr};
    SDL_GPUShader *vertexShader{nullptr};
    SDL_GPUShader *fragmentShader{nullptr};
    SDL_GPUGraphicsPipeline *pipeline{nullptr};
    SDL_GPUBuffer *vertexBuffer{nullptr};
    SDL_GPUBuffer *indexBuffer{nullptr};
    SDL_GPUTexture *texture{nullptr};
    SDL_GPUSampler *sampler{nullptr};

public:
    Quad() = delete;
    Quad(Renderer &rendererT);

    ~Quad();

    Mat4 transform;

    void Rotate(float x, float y, float z);

    void Draw(Renderer &rendererT);
};