// 函数: __gxx_personality_v0
// 地址: 0x10fe6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t result = 3

if (arg1 == 1 && arg4 != 0 && arg5 != 0)
    int64_t x21_1 = arg3 & 0xffffffffffffff00
    int64_t var_78
    int64_t var_60
    int32_t result_1
    
    if ((arg2 & 1) != 0)
        sub_10fe8c4(&var_78, arg2, x21_1 == 0x434c4e47432b2b00 ? 1 : 0, arg4, arg5)
        result = result_1
        
        if (result == 6 && x21_1 == 0x434c4e47432b2b00)
            result = 6
            *(arg4 - 0x24) = var_78.d
            int128_t var_70
            *(arg4 - 0x20) = var_70
            arg4[-2] = var_60
            int64_t var_58
            arg4[-1] = var_58
    else if ((arg2 & 2) == 0)
        result = 3
    else if ((arg2 & 4) != 0)
        int64_t x21_2
        int64_t x22_1
        
        if (x21_1 != 0x434c4e47432b2b00)
            sub_10fe8c4(&var_78, arg2, 0, arg4, arg5)
            
            if (result_1 != 6)
                sub_10feeac(0, arg4)
                noreturn
            
            x21_2 = var_78
            x22_1 = var_60
        else
            x21_2 = sx.q(*(arg4 - 0x24))
            var_78 = x21_2
            int128_t var_70_1 = *(arg4 - 0x20)
            x22_1 = arg4[-2]
            int64_t var_60_1 = x22_1
            int64_t var_58_1 = arg4[-1]
        
        sub_1102084(arg5, 0, arg4)
        sub_1102084(arg5, 1, x21_2)
        sub_11020bc(arg5, x22_1)
        result = 7
    else
        sub_10fe8c4(&var_78, arg2, x21_1 == 0x434c4e47432b2b00 ? 1 : 0, arg4, arg5)
        result = result_1
        
        if (result == 6)
            sub_1102084(arg5, 0, arg4)
            sub_1102084(arg5, 1, var_78)
            sub_11020bc(arg5, var_60)
            result = 7

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
