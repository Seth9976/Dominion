// 函数: sub_748080
// 地址: 0x748080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_1593c7c
int32_t ebx
ebx.b = arg3
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_2

if (eax == 0)
    void* eax_1 = sub_744f10(data_151245c, nullptr)
    int128_t xmm0_1
    
    if (ebx.b == 0)
        float xmm2_1 = *(eax_1 + 0x10)
        float xmm1_2 = *(eax_1 + 0x18) - xmm2_1
        float xmm2_2 = *(eax_1 + 0x14)
        float var_c_1 = xmm1_2 f* *(eax_1 + 0xa0) + xmm2_1
        float xmm1_6 = *(eax_1 + 0x1c) - xmm2_2
        float var_8_1 = xmm1_6 f* *(eax_1 + 0xa4) + xmm2_2
        float var_10_1 = xmm1_6 f* *(eax_1 + 0x9c) + xmm2_2
        xmm0_1 = (xmm1_2 f* *(eax_1 + 0x98) + xmm2_1).o
    else
        xmm0_1 = *(eax_1 + 0x10)
    
    int32_t edi_1 = 1
    *arg4 = xmm0_1
    
    if (data_151345c s<= 1)
        return arg4
    
    while (true)
        eax = sub_744f10((&data_151245c)[edi_1], nullptr)
        float xmm1_9 = *arg4
        
        if (ebx.b == 0)
            float xmm0_10 = *(eax + 0x10)
            float xmm3_2 = *(eax + 0x18) - xmm0_10
            float xmm6_1 = *(arg4 + 8)
            float xmm3_4 = xmm3_2 f* *(eax + 0xa0) + xmm0_10
            float xmm5_3 = xmm3_2 f* *(eax + 0x98) + xmm0_10
            float xmm0_11 = *(eax + 0x14)
            float xmm4_2 = *(eax + 0x1c) - xmm0_11
            float xmm4_4 = xmm4_2 f* *(eax + 0xa4) + xmm0_11
            float xmm7_3 = xmm4_2 f* *(eax + 0x9c) + xmm0_11
            
            if (xmm6_1 < xmm1_9)
            label_74815f:
                var_24 = "RectUnion"
                var_28 = 0xdb
                var_2c = "C:\x\ax2017\Engine\Rect.cpp"
                ecx_2 = "RectIsNormalized(r0)"
                break
            
            float xmm2_3 = *(arg4 + 4)
            float xmm0_12 = *(arg4 + 0xc)
            
            if (xmm0_12 < xmm2_3)
                goto label_74815f
            
            if (not(xmm5_3 > xmm1_9))
                xmm1_9 = xmm5_3
            
            if (not(xmm6_1 > xmm3_4))
                xmm6_1 = xmm3_4
            
            if (not(xmm7_3 > xmm2_3))
                xmm2_3 = xmm7_3
            
            if (not(xmm0_12 > xmm4_4))
                xmm0_12 = xmm4_4
            
            *arg4 = xmm1_9
            *(arg4 + 4) = xmm2_3
            *(arg4 + 8) = xmm6_1
            *(arg4 + 0xc) = xmm0_12
        else if (*(arg4 + 8) f< xmm1_9 || not(*(arg4 + 0xc) f>= *(arg4 + 4)))
            goto label_74815f
        
        edi_1 += 1
        
        if (edi_1 s>= data_151345c)
            return arg4
else if (eax != 2)
    var_24 = "DragSelectionRect"
    var_28 = 0x4b4
    var_2c = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    ecx_2 = "Halt"
else
    int32_t* ecx_3 = data_1512450
    
    if (ecx_3[1] == 0x1e)
        *arg4 = *(sub_5af880(ecx_3) + 0xc)
        return arg4
    
    var_24 = "UIDefGet"
    var_28 = 0x127
    var_2c = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_2 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax, &data_801800, ecx_2, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
