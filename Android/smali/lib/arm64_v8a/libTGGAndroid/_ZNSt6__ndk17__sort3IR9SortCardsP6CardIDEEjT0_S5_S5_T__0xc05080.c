// 函数: _ZNSt6__ndk17__sort3IR9SortCardsP6CardIDEEjT0_S5_S5_T_
// 地址: 0xc05080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1
int32_t x0_1 = SortCards::operator()(arg4, zx.q(*arg2))
*arg2
int32_t x0_3 = SortCards::operator()(arg4, zx.q(*arg3))

if ((x0_1 & 1) == 0)
    if ((x0_3 & 1) == 0)
        return 0
    
    int32_t x9_1 = *arg2
    *arg2 = *arg3
    *arg3 = x9_1
    *arg1
    
    if ((SortCards::operator()(arg4, zx.q(*arg2)) & 1) != 0)
        int32_t x9_2 = *arg1
        *arg1 = *arg2
        *arg2 = x9_2
        return 2
else
    int32_t x2_2 = *arg1
    
    if ((x0_3 & 1) != 0)
        *arg1 = *arg3
        *arg3 = x2_2
        return 1
    
    *arg1 = *arg2
    *arg2 = x2_2
    
    if ((SortCards::operator()(arg4, zx.q(*arg3)) & 1) != 0)
        int32_t x9_3 = *arg2
        *arg2 = *arg3
        *arg3 = x9_3
        return 2

return 1
