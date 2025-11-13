// 函数: sub_6c64a0
// 地址: 0x6c64a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* eax = sub_64bfd0(4)
eax[3] += 1

if (*eax == 0)
    sub_64be70(eax)

void*** ecx_2 = *eax
data_147deec = ecx_2
data_147abf8 = ecx_2
*eax = *ecx_2
*ecx_2 = &data_88eee8
void*** eax_2 = operator new(0xc)
void*** var_8_1 = eax_2
data_151244c = eax_2
data_147abec = eax_2
eax_2[1] = 0
*eax_2 = &data_890a7c
eax_2[2].b = 0
eax_2[1] = 0
int32_t eax_3 = data_147b074
int32_t eax_4 = eax_3

if (eax_3 != 0)
    int32_t eax_5 = eax_4 - 1
    char const* const var_1c_1
    int32_t var_18_1
    char const* const var_14_1
    char* ecx_3
    
    if (eax_4 != 1)
        int32_t temp2_1 = eax_5
        eax_5 -= 1
        
        if (temp2_1 != 1)
            var_14_1 = "WindowsInitInterfaces"
            var_18_1 = 0x44
            var_1c_1 = "C:\x\ax2017\Engine\Windows\WindowsApp.cpp"
            ecx_3 = "Halt"
            goto label_6c669e
        
        int32_t* eax_6 = sub_64bfd0(0x64)
        eax_6[3] += 1
        
        if (*eax_6 == 0)
            sub_64be70(eax_6)
        
        int32_t* esi_1 = *eax_6
        *eax_6 = *esi_1
        int32_t eax_8 = memset(esi_1, 0, 0x64)
        *esi_1 = &data_87c818
        esi_1[0xf] = 0
        esi_1[0x10] = 0
        esi_1[0x11] = 0
        esi_1[0x12] = 0
        esi_1[0x13] = 1
        esi_1[0x14] = 0
        data_147b078 = esi_1
        data_147b070 = esi_1
        return eax_8
    
    bool cond:0_1 = data_147ded4 != 0
    data_147b074 = 1
    
    if (cond:0_1)
        var_14_1 = "OpenGLInterfaceCreate"
        var_18_1 = 0x3f6
        var_1c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
        ecx_3 = "!gOpenGLInterface"
    label_6c669e:
        sub_63b870(eax_5, &data_801800, ecx_3, var_1c_1, var_18_1, var_14_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_9 = sub_64bfd0(0x5048)
    eax_9[3] += 1
    void* var_1c_3
    void*** esi_2
    
    if (eax_9[4] != 0xffffffff)
        if (*eax_9 == 0)
            sub_64be70(eax_9)
        
        esi_2 = *eax_9
        int32_t var_14_3 = 0x4248
        int32_t var_18_3 = 0
        *eax_9 = *esi_2
        var_1c_3 = &esi_2[1]
    else
        esi_2 = sub_687730(0x5048)
        int32_t var_14_2 = 0x4248
        int32_t var_18_2 = 0
        var_1c_3 = &esi_2[1]
    
    memset(var_1c_3, 0, 0x4248)
    eax_4 = memset(&esi_2[0x1094], 0, 0xdf8)
    *esi_2 = &data_88d548
    __builtin_memset(&esi_2[0x1093], 0, 0x14)
    esi_2[0x1098] = 1
    esi_2[0x1099] = 0
    data_147ded4 = esi_2
    data_147b070 = esi_2

return eax_4
