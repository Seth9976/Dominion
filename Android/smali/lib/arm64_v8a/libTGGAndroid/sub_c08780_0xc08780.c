// 函数: sub_c08780
// 地址: 0xc08780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t x22 = arg6.w
int16_t* x24 = arg4
int16_t* x23 = arg3
int16_t* x20 = arg2
int16_t* x21 = arg1
int32_t x0 = std::__ndk1::__sort4<SortCardDisplayEntries&, int16_t*>(arg1, arg2, arg3, arg4, arg6)
*x24
int32_t x19 = x0

if ((SortCardDisplayEntries::operator()(x22, *arg5) & 1) != 0)
    int16_t x9_1 = *x24
    *x24 = *arg5
    *arg5 = x9_1
    *x23
    
    if ((SortCardDisplayEntries::operator()(x22, *x24) & 1) == 0)
        x19 += 1
    else
        int16_t x9_2 = *x23
        *x23 = *x24
        *x24 = x9_2
        *x20
        
        if ((SortCardDisplayEntries::operator()(x22, *x23) & 1) == 0)
            x19 += 2
        else
            int16_t x9_3 = *x20
            *x20 = *x23
            *x23 = x9_3
            *x21
            
            if ((SortCardDisplayEntries::operator()(x22, *x20) & 1) == 0)
                x19 += 3
            else
                int16_t x9_4 = *x21
                x19 += 4
                *x21 = *x20
                *x20 = x9_4

return zx.q(x19)
