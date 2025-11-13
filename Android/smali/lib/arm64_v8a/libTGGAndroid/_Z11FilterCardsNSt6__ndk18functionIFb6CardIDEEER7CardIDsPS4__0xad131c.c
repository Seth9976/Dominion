// 函数: _Z11FilterCardsNSt6__ndk18functionIFb6CardIDEEER7CardIDsPS4_
// 地址: 0xad131c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = arg1
int64_t* result
int64_t x8_10

if (arg3 == 0)
    int64_t* x0_2 = *(x8 + 0x20)
    void var_90
    int64_t* result_1
    
    if (x0_2 == 0)
        result_1 = nullptr
    else if (x8 == x0_2)
        result_1 = &var_90
        (*(*x0_2 + 0x18))(x0_2, &var_90)
    else
        result_1 = (*(*x0_2 + 0x10))()
    
    int32_t var_54
    *(arg2 + 0xc80) = FilterCardsInt(&var_90, arg2, *(arg2 + 0xc80), nullptr, &var_54)
    result = result_1
    
    if (&var_90 == result)
        x8_10 = *(*result + 0x20)
    else
        if (result == 0)
            return result
        
        x8_10 = *(*result + 0x28)
else
    int64_t* x0 = *(x8 + 0x20)
    void var_50
    int64_t* result_2
    
    if (x0 == 0)
        result_2 = nullptr
    else if (x8 == x0)
        result_2 = &var_50
        (*(*x0 + 0x18))(x0, &var_50)
    else
        result_2 = (*(*x0 + 0x10))()
    
    *(arg2 + 0xc80) = FilterCardsInt(&var_50, arg2, *(arg2 + 0xc80), arg3, arg3 + 0xc80)
    result = result_2
    
    if (&var_50 == result)
        x8_10 = *(*result + 0x20)
    else
        if (result == 0)
            return result
        
        x8_10 = *(*result + 0x28)

return x8_10(result)
