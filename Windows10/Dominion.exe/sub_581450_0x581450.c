// 函数: sub_581450
// 地址: 0x581450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg3
int32_t i = 0
void* var_18 = esi
int32_t result = 0
int32_t i_1 = 0
int32_t result_1 = 0

if (*(esi + 0x19b8) s> 0)
    void* edi_1 = esi + 0x3b5c4
    void* ecx = esi + 0x3b5b4
    void* var_1c_1 = edi_1
    void* ebx_1 = esi + 0x3b568
    void* var_10_1 = ecx
    
    do
        uint32_t edx = *(ebx_1 + 0x14)
        
        if (edx != arg2)
            result = result_1
        else
            esi = var_18
            
            if (*ebx_1 != arg4)
                result = result_1
            else
                int32_t eax = arg5
                
                if (*(ebx_1 + 8) != eax)
                    goto label_5814bd
                
                void* eax_1 = arg6
                
                if (*(ebx_1 + 0xc) == eax_1)
                label_5814cd:
                    
                    if (*(ebx_1 + 0x4c) == 3)
                        uint32_t ecx_1 = *(ebx_1 + 0x18)
                        eax_1 = *(esi + 0x1504)
                        
                        if (ecx_1 == 0xffffffff)
                            ecx_1 = edx
                        
                        if (eax_1 != 3 && eax_1 != 5 && eax_1 != 4 && eax_1 != 6)
                            uint32_t var_54_1 = ecx_1
                            ecx_1.b = eax_1 == 2
                            eax_1 = sub_61b1b0(eax_1, 0x1c, ecx_1.b, var_54_1, *(ebx_1 + 0x50), 
                                *(ebx_1 + 0x54), nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
                    
                    int32_t* ecx_2 = *(ebx_1 + 0x7c)
                    char const* const var_34
                    int32_t var_30
                    char const* const var_2c_2
                    char* ecx_8
                    
                    if (ecx_2 != 0)
                        uint32_t edx_1 = *(ebx_1 + 0x18)
                        
                        if (edx_1 != 0xffffffff)
                            int32_t eax_2 = *(esi + 0x1504)
                            
                            if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6)
                                int32_t* var_4c_2 = ecx_2
                                ecx_2.b = eax_2 == 2
                                sub_61b1b0(eax_2, 0x1c, ecx_2.b, edx_1, 0x14, var_4c_2, 
                                    *(ebx_1 + 0x80), nullptr, nullptr, 0, 0, 0, 0, 0)
                            
                            goto label_581577
                        
                        var_2c_2 = "RemovePlayerOngoingDuration"
                        var_30 = 0x28a7
                        var_34 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                        ecx_8 = "whoLost != PLAYER_NONE"
                    label_581689:
                        sub_63b870(eax_1, &data_801800, ecx_8, var_34, var_30, var_2c_2)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                label_581577:
                    
                    if (*var_10_1 == 2 && *edi_1 != 0)
                        eax_1 = *(ebx_1 + 0x2c) << 0x12
                        
                        if (eax_1 u>> 0x12 != *(ebx_1 + 0x2c))
                            var_2c_2 = "AbilityID::set_payload"
                            var_30 = 0x14d
                            var_34 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                            ecx_8 = "payload() == arg_payload"
                            goto label_581689
                        
                        sub_573260(eax_1, arg2, esi, eax_1)
                        (*edi_1)()
                        TEB* fsbase
                        void* ecx_6 = *fsbase->ThreadLocalStoragePointer
                        eax_1 = *(ecx_6 + 0xf010)
                        
                        if (eax_1 s<= 0)
                            var_2c_2 = "DomPopContext"
                            var_30 = 0x792
                            var_34 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                            ecx_8 = "cs.numContexts > 0"
                            goto label_581689
                        
                        *(ecx_6 + 0xf010) = eax_1 - 1
                    
                    *(esi + 0x19b8) -= 1
                    void* edi_2 = ebx_1
                    ebx_1 -= 0xa8
                    __builtin_memcpy(edi_2, esi + 0x3b568 + *(esi + 0x19b8) * 0xa8, 0xa8)
                    i = i_1 - 1
                    ecx = var_10_1 - 0xa8
                    esi = var_18
                    edi_1 = var_1c_1 - 0xa8
                    result = result_1 + 1
                    result_1 = result
                else
                    eax = arg5
                label_5814bd:
                    eax_1 = eax & arg6
                    
                    if (eax_1 == 0xffffffff)
                        goto label_5814cd
                    
                    i = i_1
                    result = result_1
        
        i += 1
        ecx += 0xa8
        edi_1 += 0xa8
        i_1 = i
        ebx_1 += 0xa8
        var_10_1 = ecx
        var_1c_1 = edi_1
    while (i s< *(esi + 0x19b8))

return result
