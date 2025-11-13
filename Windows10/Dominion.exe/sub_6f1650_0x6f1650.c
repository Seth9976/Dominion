// 函数: sub_6f1650
// 地址: 0x6f1650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

BOOL i
int32_t eax
sub_6f0bd0(eax, arg1, &i, arg2)
BOOL result = i
int32_t var_8

if (result == 1)
    data_147d474 = var_8
    data_147d47c.w = 0x100
else if (result != 2)
    if (result != 3)
        return result
    
    int32_t* eax_3 = sub_6ee800()
    
    if (eax_3 == 0)
        sub_63b870(eax_3, &data_801800, "pTrack", "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 
            0x6f6, "EditorAddNode")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t i_1
    float edx_2
    i_1, edx_2 = sub_6eee20(arg1, arg2)
    int32_t ecx_2 = eax_3[2]
    int32_t esi_1 = 0
    i = i_1
    
    if (ecx_2 s> 0)
        int32_t* eax_5 = *eax_3 + 8
        
        while (not(*eax_5 f> i))
            esi_1 += 1
            eax_5 = &eax_5[4]
            
            if (esi_1 s>= ecx_2)
                break
    
    int32_t var_24_1 = ecx_2
    int32_t* eax_6 = sub_69dd00(data_1777598, 0)
    sub_6fb630(eax_6, eax_6, eax_3, esi_1)
    float xmm0_2 = edx_2
    BOOL i_2 = i
    int32_t eax_8 = esi_1 << 4
    char* ecx_6 = *eax_3 + eax_8
    *ecx_6 = xmm0_2
    *(ecx_6 + 8) = i_2
    
    if (eax_3[2] s<= 1)
        *(ecx_6 + 0xc) = 1
    else
        void* edx_4 = *eax_3
        
        if (esi_1 s<= 0)
            *(ecx_6 + 0xc) = *(edx_4 + 0x1c)
            xmm0_2 = xmm0_2 f+ *(edx_4 + 0x14) f- *(edx_4 + 0x10)
        else
            float* edx_6 = edx_4 - 0x10 + eax_8
            *(ecx_6 + 0xc) = edx_6[3]
            xmm0_2 = xmm0_2 + edx_6[1] - *edx_6
    
    void* eax_11 = data_147ded0
    *(ecx_6 + 4) = xmm0_2
    
    if (eax_11 != 0)
        int32_t eax_12 = *(eax_11 + 4)
        
        if (eax_12 == 0x19)
            ecx_6 = sub_6f0170(0xffffffff, 0xffffffff)
        else if (eax_12 == 0x1b)
            ecx_6 = sub_6f0970(0xffffffff)
    
    sub_6ee530(ecx_6)
    data_147d474 = esi_1
    data_147d47c.w = 0x100
else
    data_147d474 = var_8
    data_147d47c.w = 0x101
SetFocus(data_147d470)
SetCapture(data_147d470)
return sub_6ef970()
