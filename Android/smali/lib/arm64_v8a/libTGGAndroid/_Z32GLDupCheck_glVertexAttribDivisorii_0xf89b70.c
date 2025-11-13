// 函数: _Z32GLDupCheck_glVertexAttribDivisorii
// 地址: 0xf89b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(*gOpenGLInterface + ((sx.q(arg1) + 0x75) << 2) + 0x4020) == arg2 && zx.d(*gGLHasVAO) == 0)
    return 

glVertexAttribDivisor(arg1, zx.q(arg2))
*(*gOpenGLInterface + ((sx.q(arg1) + 0x75) << 2) + 0x4020) = arg2
