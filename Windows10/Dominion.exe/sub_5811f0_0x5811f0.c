// 函数: sub_5811f0
// 地址: 0x5811f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t result = 0
void* var_1c = esi
int32_t result_1 = 0

if (*(esi + 0x19cc) != arg2)
    return 0

int32_t i = 0
int32_t i_1 = 0

if (*(esi + 0x19b8) s> 0)
    void* edi_1 = esi + 0x3b5c4
    void* edx = esi + 0x3b5b4
    void* var_18_1 = edi_1
    void* ebx_1 = esi + 0x3b568
    void* var_c_1 = edx
    
    do
        uint32_t ecx = *(ebx_1 + 0x14)
        
        if (ecx != arg2 || *ebx_1 != 8)
            result = result_1
        else
            void* eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(*(esi + 0x19e4))
            
            if (*(ebx_1 + 8) != eax_3 || *(ebx_1 + 0xc) != edx_1)
                if (*(ebx_1 + 0x4c) == 3)
                    eax_3 = *(esi + 0x1504)
                    
                    if (*(ebx_1 + 0x18) != 0xffffffff)
                        ecx = *(ebx_1 + 0x18)
                    
                    if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6)
                        uint32_t var_58_1 = ecx
                        ecx.b = eax_3 == 2
                        eax_3 = sub_61b1b0(eax_3, 0x1c, ecx.b, var_58_1, *(ebx_1 + 0x50), 
                            *(ebx_1 + 0x54), nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
                
                int32_t* ecx_1 = *(ebx_1 + 0x7c)
                char const* const var_38
                int32_t var_34
                char const* const var_30_2
                char* ecx_7
                
                if (ecx_1 != 0)
                    uint32_t edx_2 = *(ebx_1 + 0x18)
                    
                    if (edx_2 != 0xffffffff)
                        int32_t eax_4 = *(esi + 0x1504)
                        
                        if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
                            int32_t* var_50_2 = ecx_1
                            ecx_1.b = eax_4 == 2
                            sub_61b1b0(eax_4, 0x1c, ecx_1.b, edx_2, 0x14, var_50_2, 
                                *(ebx_1 + 0x80), nullptr, nullptr, 0, 0, 0, 0, 0)
                        
                        goto label_581316
                    
                    var_30_2 = "RemovePlayerOngoingNextTurn"
                    var_34 = 0x287f
                    var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                    ecx_7 = "whoLost != PLAYER_NONE"
                label_58142d:
                    sub_63b870(eax_3, &data_801800, ecx_7, var_38, var_34, var_30_2)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
            label_581316:
                void* edx_4 = var_c_1
                
                if (*edx_4 == 2 && *edi_1 != 0)
                    eax_3 = *(ebx_1 + 0x2c) << 0x12
                    
                    if (eax_3 u>> 0x12 != *(ebx_1 + 0x2c))
                        var_30_2 = "AbilityID::set_payload"
                        var_34 = 0x14d
                        var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                        ecx_7 = "payload() == arg_payload"
                        goto label_58142d
                    
                    sub_573260(eax_3, arg2, esi, eax_3)
                    (*edi_1)()
                    TEB* fsbase
                    void* ecx_5 = *fsbase->ThreadLocalStoragePointer
                    eax_3 = *(ecx_5 + 0xf010)
                    
                    if (eax_3 s<= 0)
                        var_30_2 = "DomPopContext"
                        var_34 = 0x792
                        var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                        ecx_7 = "cs.numContexts > 0"
                        goto label_58142d
                    
                    edx_4 = var_c_1
                    *(ecx_5 + 0xf010) = eax_3 - 1
                
                *(esi + 0x19b8) -= 1
                void* edi_2 = ebx_1
                edx = edx_4 - 0xa8
                ebx_1 -= 0xa8
                __builtin_memcpy(edi_2, esi + *(esi + 0x19b8) * 0xa8 + 0x3b568, 0xa8)
                i = i_1 - 1
                edi_1 = var_18_1 - 0xa8
                esi = var_1c
                result = result_1 + 1
                result_1 = result
            else
                i = i_1
                edx = var_c_1
                result = result_1
        
        i += 1
        edx += 0xa8
        edi_1 += 0xa8
        i_1 = i
        ebx_1 += 0xa8
        var_c_1 = edx
        var_18_1 = edi_1
    while (i s< *(esi + 0x19b8))

return result
