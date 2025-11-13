// 函数: _ZNSt6__ndk17__sort3IR8ItemSortP10HandleItemEEjT0_S5_S5_T_
// 地址: 0xc5481c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *arg2
int32_t x24 = *arg1
int32_t x0_1 = (*gPile)(zx.q(x23), zx.q(x24), zx.q(*arg4))

if ((x0_1 & 0x80000000) != 0 || (x23 s>= x24 && x0_1 == 0))
    int32_t x23_1 = *arg3
    int32_t x24_1 = *arg2
    int32_t result = (*gPile)(zx.q(x23_1), zx.q(x24_1), zx.q(*arg4))
    
    if ((result & 0x80000000) != 0)
        return 0
    
    if (x23_1 s>= x24_1 && result == 0)
        return result
    
    int32_t x9_1 = *arg2
    *arg2 = *arg3
    *arg3 = x9_1
    int32_t x21_1 = *arg2
    int32_t x23_2 = *arg1
    int32_t x0_4 = (*gPile)(zx.q(x21_1), zx.q(x23_2), zx.q(*arg4))
    
    if ((x0_4 & 0x80000000) == 0 && (x21_1 s< x23_2 || x0_4 != 0))
        int32_t x9_2 = *arg1
        *arg1 = *arg2
        *arg2 = x9_2
        return 2
else
    int32_t x23_3 = *arg3
    int32_t x24_2 = *arg2
    int32_t x0_6 = (*gPile)(zx.q(x23_3), zx.q(x24_2), zx.q(*arg4))
    
    if ((x0_6 & 0x80000000) == 0 && (x23_3 s< x24_2 || x0_6 != 0))
        int32_t x9_3 = *arg1
        *arg1 = *arg3
        *arg3 = x9_3
        return 1
    
    int32_t x23_4 = *arg1
    *arg1 = *arg2
    *arg2 = x23_4
    int32_t x20_1 = *arg3
    int32_t x0_8 = (*gPile)(zx.q(x20_1), zx.q(x23_4), zx.q(*arg4))
    
    if ((x0_8 & 0x80000000) == 0 && (x20_1 s< x23_4 || x0_8 != 0))
        int32_t x9_4 = *arg2
        *arg2 = *arg3
        *arg3 = x9_4
        return 2

return 1
