// 函数: sub_57ca30
// 地址: 0x57ca30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t i_1 = 0

if (*(arg2 + 0x19b8) s<= 0)
    return 

void* edi_1 = arg2 + 0x3b5b8
arg1 = arg2

do
    if (*(edi_1 - 4) == 2)
        int32_t edx = arg7
        
        if (*edi_1 == edx)
            int32_t eax = *(edi_1 - 0x38)
            
            if (eax != 0xffffffff)
                if (eax == arg4)
                label_57ca94:
                    uint32_t eax_3 = *(edi_1 - 0x50)
                    
                    if ((eax_3 != 3 && eax_3 != 4) || *(edi_1 - 0x20) != 1)
                        if (eax_3 != 5)
                            goto label_57cac9
                        
                        int32_t ecx = *(edi_1 - 0x48)
                        int32_t edx_1 = *(edi_1 - 0x44)
                        eax_3 = ecx | edx_1
                        
                        if (eax_3 == 0)
                        label_57cac6:
                            edx = arg7
                        label_57cac9:
                            int32_t ecx_1 = *(edi_1 - 0x24)
                            char const* const var_2c_2
                            int32_t var_28
                            char const* const var_24_2
                            char* ecx_4
                            
                            if (arg8 s< 0)
                                var_24_2 = "AbilityID::set_trigger_card_id"
                                var_28 = 0xff
                                ecx_4 = "x >= 0"
                            label_57cb95:
                                var_2c_2 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                            label_57cb9f:
                                sub_63b870(eax_3, &data_801800, ecx_4, var_2c_2, var_28, var_24_2)
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            uint32_t esi_3 = ((arg8 & 0xfff) | ecx_1 << 0xc) << 6
                            eax_3 = esi_3 u>> 0x12
                            
                            if (eax_3 != ecx_1)
                                var_24_2 = "AbilityID::set_payload"
                                var_28 = 0x14d
                                ecx_4 = "payload() == arg_payload"
                                goto label_57cb95
                            
                            if (edx == 0xe && arg8 == 0)
                                var_24_2 = "CollectRegisteredOpponentAbilities"
                                var_28 = 0x1e44
                                var_2c_2 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                                ecx_4 = "source != CARDID_NULL"
                                goto label_57cb9f
                            
                            if (sub_57c810(eax_3, arg4, arg2, esi_3, arg8, arg9, 0xffffffff, arg10)
                                    != 0)
                                if (*(edi_1 - 0x50) == 5)
                                    *(edi_1 - 0x48) = arg5
                                    *(edi_1 - 0x44) = arg6
                                
                                *(arg3 + (*(arg3 + 0x400) << 2)) = esi_3
                                *(arg3 + 0x400) += 1
                            
                            i = i_1
                        else if (ecx == arg5 && edx_1 == arg6)
                            goto label_57cac6
            else if (arg4 != *(edi_1 - 0x3c))
                goto label_57ca94
            
            arg1 = arg2
    
    i += 1
    edi_1 += 0xa8
    i_1 = i
while (i s< *(arg1 + 0x19b8))
