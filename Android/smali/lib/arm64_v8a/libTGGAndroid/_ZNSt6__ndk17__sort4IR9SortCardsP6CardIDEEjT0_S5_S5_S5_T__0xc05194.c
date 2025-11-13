// 函数: _ZNSt6__ndk17__sort4IR9SortCardsP6CardIDEEjT0_S5_S5_S5_T_
// 地址: 0xc05194
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result_1 = std::__ndk1::__sort3<SortCards&, CardID*>(arg1, arg2, arg3, arg5)
*arg3
int32_t result = result_1

if ((SortCards::operator()(arg5, zx.q(*arg4)) & 1) != 0)
    int32_t x9_1 = *arg3
    *arg3 = *arg4
    *arg4 = x9_1
    *arg2
    
    if ((SortCards::operator()(arg5, zx.q(*arg3)) & 1) == 0)
        return result + 1
    
    int32_t x9_2 = *arg2
    *arg2 = *arg3
    *arg3 = x9_2
    *arg1
    
    if ((SortCards::operator()(arg5, zx.q(*arg2)) & 1) == 0)
        return result + 2
    
    int32_t x9_3 = *arg1
    result += 3
    *arg1 = *arg2
    *arg2 = x9_3

return result
