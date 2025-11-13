// 函数: sub_c54ac8
// 地址: 0xc54ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x25 = arg4
int32_t* x23 = arg3
int32_t* x19 = arg2
int32_t* x20 = arg1
int32_t x0 = std::__ndk1::__sort4<ItemSort&, HandleItem*>(arg1, arg2, arg3, arg4, arg6)
int32_t x27 = *arg5
int32_t x28 = *x25
int32_t x24 = x0
int32_t x0_2 = (*gPile)(zx.q(x27), zx.q(x28), zx.q(*arg6))

if ((x0_2 & 0x80000000) == 0 && (x27 s< x28 || x0_2 != 0))
    int32_t x9_1 = *x25
    x24 = x0 + 1
    *x25 = *arg5
    *arg5 = x9_1
    int32_t x26_1 = *x25
    int32_t x27_1 = *x23
    int32_t x0_4 = (*gPile)(zx.q(x26_1), zx.q(x27_1), zx.q(*arg6))
    
    if ((x0_4 & 0x80000000) == 0 && (x26_1 s< x27_1 || x0_4 != 0))
        int32_t x9_2 = *x23
        x24 = x0 + 2
        *x23 = *x25
        *x25 = x9_2
        int32_t x25_1 = *x23
        int32_t x26_2 = *x19
        int32_t x0_6 = (*gPile)(zx.q(x25_1), zx.q(x26_2), zx.q(*arg6))
        
        if ((x0_6 & 0x80000000) == 0 && (x25_1 s< x26_2 || x0_6 != 0))
            int32_t x9_3 = *x19
            x24 = x0 + 3
            *x19 = *x23
            *x23 = x9_3
            int32_t x23_1 = *x19
            int32_t x25_2 = *x20
            int32_t x0_8 = (*gPile)(zx.q(x23_1), zx.q(x25_2), zx.q(*arg6))
            
            if ((x0_8 & 0x80000000) == 0 && (x23_1 s< x25_2 || x0_8 != 0))
                int32_t x9_4 = *x20
                x24 = x0 + 4
                *x20 = *x19
                *x19 = x9_4

return zx.q(x24)
