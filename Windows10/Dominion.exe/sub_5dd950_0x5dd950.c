// 函数: sub_5dd950
// 地址: 0x5dd950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
int32_t xmm1 = (zx.o(0)).d
arg4 f- 0
int32_t eax_1
eax_1:1.b =
    (arg4 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg4, 0f) ? 1 : 0) << 2 | (arg4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int128_t* result
int128_t xmm0_2

if (p_1)
    float xmm4_2 = arg7 - 0f
    float xmm2_1
    
    if (0 f< xmm4_2)
        xmm2_1 = 1f
        
        if (not(xmm4_2 >= 1f))
            xmm2_1 = sub_4ae110(4, xmm4_2, 1.04999995f, xmm2_1)
            xmm1 = (zx.o(0)).d
    else
        xmm2_1 = 1.04999995f
    
    float xmm3 = arg4 - 0f
    float var_a0_1 = xmm2_1
    float var_a4_1
    
    if (not(0f < xmm3))
        var_a4_1 = 1f
    else if (xmm3 < 1f)
        xmm1 = (zx.o(0)).d
        var_a4_1 = sub_4ae110(4, xmm3, 1f, xmm2_1)
    else
        var_a4_1 = xmm2_1
    
    if (not(0 f< xmm3))
        var_a0_1 = (zx.o(0)).d
    else if (not(xmm3 >= 1f))
        int32_t xmm0_7 = sub_4ae110(4, xmm3, xmm1, var_a0_1)
        xmm1 = (zx.o(0)).d
        var_a0_1 = xmm0_7
    
    float xmm3_2 = arg8 - 0f
    float var_9c_2
    
    if (not(0 f< xmm3_2))
        var_9c_2 = 0f
    else if (xmm3_2 < 1f)
        var_9c_2 = sub_4ae110(4, xmm3_2, xmm1, 1f)
    else
        var_9c_2 = 1f
    
    float var_cc_1 = 1f
    float xmm2_4
    
    if (sub_4dad50() != 1)
        xmm2_4 = var_cc_1
    else if (arg9 == 0)
        xmm2_4 = 1f
    else if (arg9 == 1)
        xmm2_4 = 1.20000005f
    else
        if (arg9 != 2)
            sub_63b870(arg9 - 2, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3b6d, "MousoverScale")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        xmm2_4 = 1.60000002f
    
    float xmm4_3 = arg2[1]
    float xmm3_3 = *arg2
    float xmm2_8 = ((xmm2_4 - 1f) * var_9c_2 + 1f) * var_a4_1
    float xmm3_4
    
    if (xmm4_3 <= 700f)
        xmm3_4 = xmm3_3 + 50f
    else
        xmm3_4 = xmm3_3 * 0.5f
        xmm4_3 = xmm4_3 * 0.5f
    
    int128_t xmm1_2 = data_800248
    int32_t var_ac_1 = 0
    float var_b4_1 = xmm3_4
    int32_t xmm3_5 = xmm3_4 ^ (data_8937c0.o).d
    int128_t var_38 = 0x3f800000.o
    float var_b0_1 = xmm4_3
    int32_t var_ac_2 = 0
    int32_t xmm4_4 = xmm4_3 ^ (data_8937c0.o).d
    int128_t var_28_1 = xmm1_2
    var_b4_1.q = 0
    int128_t var_98 = xmm2_8.o
    int32_t var_ac_3 = 0x80000000
    int128_t var_88_1 = xmm1_2
    int32_t var_b4_2 = xmm3_5
    int32_t var_b0_2 = xmm4_4
    int128_t var_78 = xmm2_8.o
    int128_t var_68_1 = xmm1_2
    int128_t var_f0
    sub_4eb600(&var_98, &var_78, &var_f0, &var_98)
    var_78 = var_f0
    int128_t var_e0
    int128_t var_68_2 = var_e0
    int128_t var_58
    sub_4eb600(&var_38, &var_78, &var_58, &var_38)
    var_38 = var_58
    int128_t xmm0_22 = data_800248
    float var_b4_3 = var_a0_1 * (*arg6 + 0f)
    float var_b0_3 = var_a0_1 * (arg6[1] f+ 0f)
    float var_ac_4 = var_a0_1 * 0f
    var_58 = 0x3f800000.o
    int128_t var_48_1 = xmm0_22
    float* eax_11 = sub_4eb600(&var_38, &var_58, &var_f0, &var_38)
    var_58 = var_f0
    int128_t var_48_2 = var_e0
    sub_4eb600(eax_11, &var_58, &var_38, arg3)
    result = arg5
    *result = var_38
    int128_t var_48
    xmm0_2 = var_48
else
    result = arg5
    *result = *arg3
    xmm0_2 = arg3[1]

result[1] = xmm0_2
CookieCheckFunction(result)
return result
