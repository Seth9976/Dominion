// 函数: sub_52ef70
// 地址: 0x52ef70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = 0
int32_t i = 7
int32_t* eax_4 = *(sub_573400() + 4) + 0x1594
int32_t var_78[0x1b]

do
    int32_t edx_1 = *eax_4
    
    if (edx_1 != 0)
        var_78[ebx] = edx_1
        ebx += 1
    
    i += 1
    eax_4 = &eax_4[4]
while (i s< 0x21)

if (ebx s> 0x19)
    sub_63b870(eax_4, &data_801800, 
        "num <= NUM_KINGDOM_PILES + MAX_EXTRA_KINGDOM_PILES + MAX_STANDARD_PILES", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Empires.cpp", 0x4be, 
        "DefiledShrine_Setup::<lambda_ff2536cb2c7524f8b80e893fda9c3f7e>::operator ()")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = 0
uint32_t result_1 = 0

if (ebx s> 0)
    while (true)
        int32_t edi_1 = var_78[result]
        void* eax_5 = sub_573400()
        
        if (edi_1 != 0)
            uint32_t eax_6 = sub_573890(eax_5, edi_1, *(eax_5 + 4), 1, 0x20004, 0)
            
            if ((eax_6 & 4) != 0 && (eax_6 & 0x20000) == 0)
                void* eax_9 = sub_573400()
                void* esi_1 = *(eax_9 + 4)
                int32_t eax_10 = sub_57da30(esi_1, edi_1)
                int32_t edx_4 = 7
                void* esi_2 = esi_1 + 0x1594
                void* esi_3
                
                while (true)
                    int32_t i_1 = *esi_2
                    
                    if (i_1 != edi_1 && *(esi_2 + 4) != edi_1 && i_1 != eax_10)
                        edx_4 += 1
                        esi_2 += 0x10
                        
                        if (edx_4 s< 0x48)
                            continue
                    else if (i_1 != 0)
                        esi_3 = 7
                        int32_t* eax_13 = *(eax_9 + 4) + 0x1594
                        
                        while (*eax_13 != i_1)
                            if (eax_13[1] == i_1)
                                break
                            
                            esi_3 += 1
                            eax_13 = &eax_13[4]
                            
                            if (esi_3 s>= 0x48)
                                goto label_52f074
                        
                        break
                    
                label_52f074:
                    esi_3 = nullptr
                    break
                
                void* eax_14 = sub_573400()
                int32_t var_94_1 = 0
                int32_t var_98_1 = 0xffffffff
                int32_t var_9c_1 = 0
                sub_571fa0(eax_14, 0xffffffff, *(eax_14 + 4), 0x601, 2, esi_3, nullptr)
        
        result = result_1 + 1
        result_1 = result
        
        if (result s>= ebx)
            break

CookieCheckFunction(result)
return result
