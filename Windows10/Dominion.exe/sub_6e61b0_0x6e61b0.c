// 函数: sub_6e61b0
// 地址: 0x6e61b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (data_147abe8 == 0)
    return 

int32_t eax_1 = sub_69f030(arg1, 0x18)
void* edi_1 = data_147abe8
int32_t ecx_2 = eax_1
int32_t var_8_1 = ecx_2

if (edi_1 == 0)
    sub_63b870(eax_1, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t** edi_2 = *(edi_1 + 0xc)
int32_t* esi_1 = nullptr

while (true)
    if (esi_1 != 0)
        esi_1 = &esi_1[0x25]
    else
        esi_1 = *edi_2
    
    void* eax = &(*edi_2)[edi_2[1] * 0x25]
    
    if (esi_1 u>= eax)
        break
    
    while ((esi_1[0x24] & 0xffff0000) == 0)
        esi_1 = &esi_1[0x25]
        
        if (esi_1 u>= eax)
            return 
    
    if (*esi_1 == ecx_2)
        int32_t eax_3 = esi_1[0x1b]
        
        if (eax_3 s> 0 && eax_3 != *(arg2 + 0x28))
            sub_6e5a00(esi_1)
            int32_t eax_4 = esi_1[0x1b]
            
            if (esi_1[0x1e] s>= eax_4)
                esi_1[0x1e] = eax_4 - 1
        
        int32_t edx_1 = esi_1[3]
        int32_t ecx_4 = *(arg2 + 0x58)
        
        if (edx_1 s>= ecx_4)
            esi_1[4] = 1
            esi_1[3] = ecx_4 - 1
        else if (esi_1[4] + edx_1 s>= ecx_4)
            esi_1[4] = ecx_4 - edx_1
        
        ecx_2 = var_8_1
