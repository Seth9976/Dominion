// 函数: _Z24GLDupCheck_glBindTextureii
// 地址: 0xf89f10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x9_2 = *gOpenGLInterface + (zx.q(arg2 + 0x20) << 2) + 0x4020

if (*x9_2 == arg1)
    return 

*x9_2 = arg1
int32_t* x8_1 = *gOpenGLInterface + 0x409c

if (*x8_1 != arg2)
    *x8_1 = arg2
    glActiveTexture(zx.q(arg2 + 0x84c0))

return glBindTexture(0xde1, zx.q(arg1)) __tailcall
