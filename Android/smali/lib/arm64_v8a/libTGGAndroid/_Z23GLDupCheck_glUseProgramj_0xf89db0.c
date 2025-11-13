// 函数: _Z23GLDupCheck_glUseProgramj
// 地址: 0xf89db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gOpenGLInterface

if (*(x8 + 0x4050) == arg1)
    return 

*(x8 + 0x4050) = arg1
int32_t* x20 = *(x8 + 0x4248) + mulu.dp.d(arg1 & 0xffff, 0x158)
glUseProgram(zx.q(*x20))
return memset(*gOpenGLInterface + 0x20, 0xfe, sx.q(x20[0x41] << 4)) __tailcall
