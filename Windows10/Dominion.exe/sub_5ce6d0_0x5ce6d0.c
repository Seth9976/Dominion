// 函数: sub_5ce6d0
// 地址: 0x5ce6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = sub_5cc410(__security_cookie ^ &__saved_ebp, arg3, arg2, arg4, arg5)

if (result == 0)
    void* result_1 = sub_637730(&data_b809e0)
    int32_t var_74_1 = 6
    *(result_1 + 0x2c) = 3
    *(result_1 + 0x58) = arg3
    *(result_1 + 0x30) = 0
    *(result_1 + 0x5c) = arg2
    *(result_1 + 0x60) = arg4
    *(result_1 + 0x64) = arg5
    *(result_1 + 0x70) = 0
    *(result_1 + 0x74) = 0
    *(result_1 + 0x68) = arg6
    
    if (arg2 == 0x3ee || arg2 == 0x3ef || arg2 == 0x3f0)
        var_74_1 = 0x15
    
    int128_t var_70
    int128_t xmm0_6
    int32_t var_d8
    
    if (arg2 - 0x44c u> 0x27)
        int32_t* eax_7 = sub_5cc540(&var_d8, arg2, var_74_1, &var_d8, arg4, arg5, arg3, 0, result_1)
        var_70 = *eax_7
        int128_t var_60_2 = *(eax_7 + 0x10)
        int128_t var_50_2 = *(eax_7 + 0x20)
        int128_t var_40_2 = *(eax_7 + 0x30)
        int128_t var_30_2 = *(eax_7 + 0x40)
        xmm0_6 = *(eax_7 + 0x50)
    else
        void var_bc
        int32_t eax_4 = memset(&var_bc, 0, 0x40)
        var_d8 = 0x1e
        int32_t var_d4_1 = 0
        uint32_t var_d0_1 = arg3
        uint32_t var_cc_1 = sub_5cd0a0(eax_4, arg3, result_1, 0xffffffff)
        int64_t var_c8_1 = 0
        int32_t var_c0_1 = 0
        void* result_2 = result_1
        var_70 = var_d8.o
        int128_t var_60_1 = var_c8_1.o
        int128_t var_b8
        int128_t var_50_1 = var_b8
        int128_t var_a8
        int128_t var_40_1 = var_a8
        int128_t var_98
        int128_t var_30_1 = var_98
        int128_t var_88
        xmm0_6 = var_88
    int128_t var_20_1 = xmm0_6
    sub_5cb630(result_1 + 0x258, &var_70)
    
    if (arg2 == 0x3ee)
        sub_5cbfe0(result_1, 0)
    else if ((arg2 == 0x3ef || arg2 == 0x3f0) && data_b7fcf4 == 0)
        sub_5cbfe0(result_1, 0)
    
    result = result_1

CookieCheckFunction(result)
return result
