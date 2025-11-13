// 函数: _Z36GLDupCheck_glEnableVertexAttribArrayib
// 地址: 0xf89af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2.d & 1

if (*(*gOpenGLInterface + ((sx.q(arg1) + 0x65) << 2) + 0x4020) == x21 && zx.d(*gGLHasVAO) == 0)
    return 

if ((arg2.d & 1) == 0)
    glDisableVertexAttribArray()
else
    glEnableVertexAttribArray()

*(*gOpenGLInterface + ((sx.q(arg1) + 0x65) << 2) + 0x4020) = x21
