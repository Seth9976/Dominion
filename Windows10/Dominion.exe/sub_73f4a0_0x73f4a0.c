// 函数: sub_73f4a0
// 地址: 0x73f4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
uint32_t result

if (data_147ef94 != 0)
    int32_t* ecx_1 = data_147df90
    
    if (ecx_1[1] != 0x20)
        int32_t __saved_ebp
        sub_63b870(__security_cookie ^ &__saved_ebp, &data_801800, 
            "ptr->assetType == ASSET_TYPE_FAB", "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_2 = sub_5af880(ecx_1)
    int128_t var_80
    float* eax_4 = sub_6cd460(&var_80, 0x87f4b8, data_147df94 * 0xe0 + *eax_2, &var_80)
    int32_t i = 1
    int128_t var_50 = *eax_4
    int128_t var_40_1 = *(eax_4 + 0x10)
    int64_t var_30_1 = *(eax_4 + 0x20)
    
    if (data_147ef94 s> 1)
        do
            float var_108[0xa]
            float* eax_6 =
                sub_6cd460(&var_108, 0x87f4b8, (&data_147df94)[i] * 0xe0 + *eax_2, &var_108)
            var_80 = *eax_6
            int128_t var_70_1 = *(eax_6 + 0x10)
            int64_t var_60_1 = *(eax_6 + 0x20)
            float* eax_8 = sub_73f1b0(&var_108, &var_80, &var_50, &var_108)
            i += 1
            var_50 = *eax_8
            var_40_1 = *(eax_8 + 0x10)
            var_30_1 = *(eax_8 + 0x20)
        while (i s< data_147ef94)
    
    float var_e0
    sub_6db800(&var_50, &var_e0)
    float xmm4_1 = var_e0
    void var_cc
    void* eax_9 = &var_cc
    float xmm6_2 = xmm4_1 - 0f
    float var_dc
    float xmm5_2 = var_dc - 0f
    float var_d8
    float xmm3_2 = var_d8 - 0f
    int32_t i_2 = 7
    float xmm4_2 = xmm4_1 + 0f
    float xmm1_2 = var_dc + 0f
    float xmm2_2 = var_d8 + 0f
    var_40_1.d = xmm6_2
    var_40_1:4.d = xmm5_2
    var_40_1:8.d = xmm3_2
    var_40_1:0xc.d = xmm4_2
    var_30_1.d = xmm1_2
    var_30_1:4.d = xmm2_2
    int32_t i_1
    
    do
        float xmm0_10 = *(eax_9 - 8)
        
        if (not(xmm6_2 <= xmm0_10))
            xmm6_2 = xmm0_10
            var_40_1.d = xmm6_2
        else if (not(xmm0_10 <= xmm4_2))
            xmm4_2 = xmm0_10
            var_40_1:0xc.d = xmm4_2
        
        float xmm0_11 = *(eax_9 - 4)
        
        if (not(xmm5_2 <= xmm0_11))
            xmm5_2 = xmm0_11
            var_40_1:4.d = xmm5_2
        else if (not(xmm0_11 <= xmm1_2))
            xmm1_2 = xmm0_11
            var_30_1.d = xmm1_2
        
        float xmm0_12 = *eax_9
        
        if (not(xmm3_2 <= xmm0_12))
            xmm3_2 = xmm0_12
            var_40_1:8.d = xmm3_2
        else if (not(xmm0_12 <= xmm2_2))
            xmm2_2 = xmm0_12
            var_30_1:4.d = xmm2_2
        
        eax_9 += 0xc
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = arg1
    *result = var_40_1
else
    result = arg1
    __builtin_memcpy(result, 
        "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x18)

CookieCheckFunction(result)
return result
