// 函数: _ZNSt6__ndk17__sort4IR8ItemSortP10HandleItemEEjT0_S5_S5_S5_T_
// 地址: 0xc549a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result_1 = std::__ndk1::__sort3<ItemSort&, HandleItem*>(arg1, arg2, arg3, arg5)
int32_t x26 = *arg4
int32_t x27 = *arg3
int32_t result = result_1
int32_t x0_1 = (*gPile)(zx.q(x26), zx.q(x27), zx.q(*arg5))

if ((x0_1 & 0x80000000) == 0 && (x26 s< x27 || x0_1 != 0))
    int32_t x9_1 = *arg3
    result = result_1 + 1
    *arg3 = *arg4
    *arg4 = x9_1
    int32_t x25_1 = *arg3
    int32_t x26_1 = *arg2
    int32_t x0_3 = (*gPile)(zx.q(x25_1), zx.q(x26_1), zx.q(*arg5))
    
    if ((x0_3 & 0x80000000) == 0 && (x25_1 s< x26_1 || x0_3 != 0))
        int32_t x9_2 = *arg2
        result = result_1 + 2
        *arg2 = *arg3
        *arg3 = x9_2
        int32_t x24_1 = *arg2
        int32_t x25_2 = *arg1
        int32_t x0_5 = (*gPile)(zx.q(x24_1), zx.q(x25_2), zx.q(*arg5))
        
        if ((x0_5 & 0x80000000) == 0 && (x24_1 s< x25_2 || x0_5 != 0))
            int32_t x9_3 = *arg1
            result = result_1 + 3
            *arg1 = *arg2
            *arg2 = x9_3

return result
