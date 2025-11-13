// 函数: _Z23GLDupCheck_IsInt2Change12DupStateTypeii
// 地址: 0xf89c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = *gOpenGLInterface

if (*(x11 + (zx.q(arg1) << 2) + 0x4020) == arg2
        && *(x11 + ((sx.q(arg1) + 1) << 2) + 0x4020) == arg3)
    return 0

*(x11 + (zx.q(arg1) << 2) + 0x4020) = arg2
*(*gOpenGLInterface + ((sx.q(arg1) + 1) << 2) + 0x4020) = arg3
return 1
