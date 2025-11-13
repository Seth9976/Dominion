// 函数: sub_688ac0
// 地址: 0x688ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_147abe8
char result

if (*(arg1 + 0x5a) == 0)
label_688b17:
    
    if (arg1[0xa] != 0)
        float xmm4_1 = arg1[0xd]
        float xmm2_1 = arg1[0xe]
        float xmm3_4 = (*(ecx + 0x28) f- arg1[0xb] - 0f) / (arg1[0xc] f- 0f)
        
        if (not(0 f>= xmm3_4))
            if (xmm3_4 < 1f)
                xmm4_1 = sub_4ae110(1, xmm3_4, xmm4_1, xmm2_1)
            else
                xmm4_1 = xmm2_1
        
        arg1[0xf] = xmm4_1
    
    void* eax_4
    float xmm0_7
    eax_4, xmm0_7 = sub_688590(arg1)
    float xmm1_2 = arg1[0x12]
    xmm1_2 - xmm0_7
    eax_4:1.b = (xmm1_2 == xmm0_7 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm0_7) ? 1 : 0) << 2
        | (xmm1_2 < xmm0_7 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        int32_t* ecx_3 = data_147abec
        arg1[0x12] = xmm0_7
        int32_t* var_8_2 = ecx_3
        (*(*ecx_3 + 0x20))(arg1, xmm0_7)
    
    (*(*data_147abec + 0x1c))(arg1)
    result = (*(*data_147abec + 0x14))(arg1)
    
    if (result != 0)
        *(arg1 + 0x5a) = 0
        return sub_688260(arg1) __tailcall
else
    int32_t eax_1 = arg1[0xa]
    
    if (eax_1 == 0 || *(ecx + 0x28) f- arg1[0xb] f< arg1[0xc])
        goto label_688b17
    
    if (eax_1 != 1)
        if (eax_1 == 2)
            arg1[0xf] = arg1[0xe]
            arg1[0xa] = 0
            goto label_688b17
        
        sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Engine\Sound.cpp", 0x2ae, 
            "SoundUpdateInstance")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = (*(*data_147abec + 0x28))(arg1)
    *(arg1 + 0x5a) = 0

return result
