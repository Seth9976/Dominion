// 函数: _Z23GLDupCheck_IsInt3Change12DupStateTypeiii
// 地址: 0xf89c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = *gOpenGLInterface
int64_t x9_1 = sx.q(arg1)

if (*(x12 + (zx.q(arg1) << 2) + 0x4020) == arg2 && *(x12 + ((x9_1 + 1) << 2) + 0x4020) == arg3
        && *(x12 + (x9_1 << 2) + 0x4028) == arg4)
    return 0

*(x12 + (zx.q(arg1) << 2) + 0x4020) = arg2
*(*gOpenGLInterface + ((x9_1 + 1) << 2) + 0x4020) = arg3
*(*gOpenGLInterface + (x9_1 << 2) + 0x4028) = arg4
return 1
