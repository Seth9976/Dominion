// 函数: _ZNSt6__ndk17__sort3IR22SortCardDisplayEntriesPsEEjT0_S4_S4_T_
// 地址: 0xc085a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1
int16_t x22 = arg4.w
int32_t x0_1 = SortCardDisplayEntries::operator()(arg4.w, *arg2)
*arg2
int32_t x0_3 = SortCardDisplayEntries::operator()(x22, *arg3)

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    int16_t x9_1 = *arg2
    *arg2 = *arg3
    *arg3 = x9_1
    *arg1
    
    if ((SortCardDisplayEntries::operator()(x22, *arg2) & 1) != 0)
        int16_t x9_2 = *arg1
        *arg1 = *arg2
        *arg2 = x9_2
        return 2
else
    int16_t x2_2 = *arg1
    
    if ((x0_3 & 1) != 0)
        *arg1 = *arg3
        *arg3 = x2_2
        return 1
    
    *arg1 = *arg2
    *arg2 = x2_2
    
    if ((SortCardDisplayEntries::operator()(x22, *arg3) & 1) != 0)
        int16_t x9_3 = *arg2
        *arg2 = *arg3
        *arg3 = x9_3
        return 2

return 1
