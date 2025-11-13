// 函数: sub_5efc00
// 地址: 0x5efc00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax

if (data_b824dc == 0)
    int32_t edi_1 = *(arg1 + 0x1c)
    int32_t esi_1 = 0
    
    if (edi_1 s> 0)
        int16_t* ecx = *(arg1 + 0x14)
        
        do
            eax = zx.d(*ecx)
            
            if (arg2 == eax)
                void* edx = data_cc8d5c
                
                if (edx != 0)
                    eax = sub_622830(eax, *(edx + 0x7590), 0x16, 4)
                    
                    if (eax.b != 0)
                        if ((*(arg1 + 0x20) & 1) != 0)
                            return (*(*(arg1 + 0x14) + (esi_1 << 2)) u>> 0x12).b & 1
                        
                    label_5efc94:
                        int32_t eax_5
                        eax_5.b = *(*(arg1 + 0x14) + (esi_1 << 2) + 2)
                        eax_5.b &= 1
                        return eax_5
                    
                    void* edx_2 = data_cc8d5c
                    
                    if (edx_2 != 0)
                        if (sub_622830(eax, *(edx_2 + 0x7590), 0x16, 7) == 0
                                || (*(arg1 + 0x20) & 1) == 0)
                            goto label_5efc94
                        
                        return (*(*(arg1 + 0x14) + (esi_1 << 2)) u>> 0x12).b & 1
                
                sub_63b870(eax, &data_801800, "gClient", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            esi_1 += 1
            ecx = &ecx[2]
        while (esi_1 s< edi_1)

eax.b = 0
return eax
