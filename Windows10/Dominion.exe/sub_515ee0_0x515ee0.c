// 函数: sub_515ee0
// 地址: 0x515ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg2
int32_t var_14
int32_t var_10[0x2]
int32_t* eax
int32_t i
bool cond:1_1

if (*arg1 == 0x384)
    i = 0
    eax = sub_516fa0(*(arg1 + 4)) + 0x14
    
    do
        int32_t ecx_1 = *eax
        
        if (ecx_1 == 0)
            break
        
        var_10[i] = ecx_1
        eax = &eax[1]
        i += 1
    while (i s< 2)
    
    int32_t edi_1 = 0
    cond:1_1 = i == 0
    
    if (i s> 0)
        do
            if (sub_515b00(0, var_10[edi_1]).b == 0)
                eax = (&var_14)[i]
                i -= 1
                var_10[edi_1] = eax
                edi_1 -= 1
            
            edi_1 += 1
        while (edi_1 s< i)
        
        cond:1_1 = i == 0

if (*arg1 == 0x384 && not(cond:1_1))
    int32_t ecx_3
    eax, ecx_3 = sub_515c00(&var_14, i, &var_10, &var_14, 1, nullptr)
    
    if (eax == 0)
        sub_515e60(&var_10, i)
        return 
    
    if (eax != 1)
        sub_63b870(eax, &data_801800, "numPiles == 1", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x1aa8, "AddThemeStamp")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edi_2 = 0
    
    if (i s> 0)
        do
            int32_t var_24_1 = 0
            eax, ecx_3 = sub_50ac80(eax, var_14, var_10[edi_2], ecx_3, 0)
            edi_2 += 1
        while (edi_2 s< i)
else if (ebx.b != 0)
    sub_5174a0()
