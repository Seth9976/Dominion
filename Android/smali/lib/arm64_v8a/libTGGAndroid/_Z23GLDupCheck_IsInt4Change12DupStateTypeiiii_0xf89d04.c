// 函数: _Z23GLDupCheck_IsInt4Change12DupStateTypeiiii
// 地址: 0xf89d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = *gOpenGLInterface
int64_t x9_1 = sx.q(arg1)

if (*(x12 + (zx.q(arg1) << 2) + 0x4020) == arg2 && *(x12 + ((x9_1 + 1) << 2) + 0x4020) == arg3)
    int64_t x12_1 = x12 + (x9_1 << 2)
    
    if (*(x12_1 + 0x4028) == arg4 && *(x12_1 + 0x402c) == arg5)
        return 0

*(x12 + (zx.q(arg1) << 2) + 0x4020) = arg2
int64_t x9_2 = x9_1 << 2
*(*gOpenGLInterface + ((x9_1 + 1) << 2) + 0x4020) = arg3
*(x9_2 + *gOpenGLInterface + 0x4028) = arg4
*(x9_2 + *gOpenGLInterface + 0x402c) = arg5
return 1
