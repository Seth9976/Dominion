// 函数: sub_4f5340
// 地址: 0x4f5340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2
int32_t ecx = 0
int32_t result_1 = result
int32_t var_8 = 0

if (result s> 0)
    int32_t edx_1 = arg4 << 8
    int32_t* ebx_1 = arg3 + 0x98
    arg4 = edx_1
    
    do
        int32_t edi_1 = ebx_1[-3]
        result = edi_1 - edx_1
        
        if (result == ecx)
            int32_t ecx_2 = edi_1 s% 0x2717
            
            for (int32_t* i = *((ecx_2 << 2) + &data_1938e70); i != 0; i = i[0x6e])
                if (*i == edi_1)
                    sub_63b870(i, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x7cc, "CreateCardData")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            int32_t* eax_6 = malloc(0x1c0)
            memset(eax_6, 0, 0x1c0)
            edx_1 = arg4
            *eax_6 = edi_1
            eax_6[0x6e] = *((ecx_2 << 2) + &data_1938e70)
            int32_t ecx_4 = ebx_1[1]
            *((ecx_2 << 2) + &data_1938e70) = eax_6
            result = *ebx_1
            eax_6[3] = ecx_4
            ecx = var_8
            eax_6[2] = result
            eax_6[1] = edi_1
        
        ecx += 1
        ebx_1 = &ebx_1[0x1a6]
        var_8 = ecx
    while (ecx s< result_1)

return result
