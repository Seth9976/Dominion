// 函数: _Z17GLSetSamplerStateiP24ShaderDynamicStateHolderP16OpenGLBufferData
// 地址: 0xf8e73c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg2 + 0x358)

if (*(x22 + 0xca0) s< 1)
    return 

int64_t i = 0
void* x21_1 = x22 + 0xcb0

do
    GLSetSamplerRenderState(arg1, x21_1, arg3)
    i += 1
    x21_1 += 0x28
while (i s< sx.q(*(x22 + 0xca0)))
