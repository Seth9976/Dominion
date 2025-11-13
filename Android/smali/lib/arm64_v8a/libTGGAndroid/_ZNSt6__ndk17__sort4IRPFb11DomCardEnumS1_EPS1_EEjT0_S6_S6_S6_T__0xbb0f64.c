// 函数: _ZNSt6__ndk17__sort4IRPFb11DomCardEnumS1_EPS1_EEjT0_S6_S6_S6_T_
// 地址: 0xbb0f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg5)(zx.q(*arg2), zx.q(*arg1))
int32_t x0_3 = (*arg5)(zx.q(*arg3), zx.q(*arg2))
int32_t result

if ((x0_1 & 1) != 0)
    int32_t x1_2 = *arg1
    
    if ((x0_3 & 1) == 0)
        *arg1 = *arg2
        *arg2 = x1_2
        
        if (((*arg5)(zx.q(*arg3)) & 1) == 0)
            result = 1
        else
            int32_t x9_3 = *arg2
            *arg2 = *arg3
            *arg3 = x9_3
            result = 2
    else
        result = 1
        *arg1 = *arg3
        *arg3 = x1_2
else if ((x0_3 & 1) == 0)
    result = 0
else
    int32_t x9_1 = *arg2
    *arg2 = *arg3
    *arg3 = x9_1
    
    if (((*arg5)(zx.q(*arg2), zx.q(*arg1)) & 1) == 0)
        result = 1
    else
        int32_t x9_2 = *arg1
        *arg1 = *arg2
        *arg2 = x9_2
        result = 2

if (((*arg5)(zx.q(*arg4), zx.q(*arg3)) & 1) != 0)
    int32_t x9_4 = *arg3
    *arg3 = *arg4
    *arg4 = x9_4
    
    if (((*arg5)(zx.q(*arg3), zx.q(*arg2)) & 1) == 0)
        return result + 1
    
    int32_t x9_5 = *arg2
    *arg2 = *arg3
    *arg3 = x9_5
    
    if (((*arg5)(zx.q(*arg2), zx.q(*arg1)) & 1) == 0)
        return result + 2
    
    int32_t x9_6 = *arg1
    result += 3
    *arg1 = *arg2
    *arg2 = x9_6

return result
