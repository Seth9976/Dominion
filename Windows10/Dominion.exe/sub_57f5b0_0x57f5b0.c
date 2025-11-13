// 函数: sub_57f5b0
// 地址: 0x57f5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
void* var_8 = arg3
int32_t result_2 = 0

if (*(arg2 + 0x400) s> 0)
    void* ebx_1 = arg2
    int32_t* edx = arg4
    void* edi_1 = ebx_1
    
    while (true)
        int32_t result_1 = 0
        
        if (edx[0x100] s> 0)
            int32_t* edi_2 = edx
            int32_t* var_18_1 = edx
            
            while (true)
                void* eax
                int32_t edx_1
                eax, edx_1 = sub_57f390(result, edx, arg3, *ebx_1)
                char const* const var_38
                int32_t var_34_2
                char const* const var_30_3
                char* ecx_3
                
                if (eax u> 5)
                    var_30_3 = "FilterTriggeredAbilities"
                    var_34_2 = 0x2394
                    var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                    ecx_3 = "Halt"
                else
                    switch (eax)
                        case nullptr, 3
                            eax = sub_57f4a0(eax, edx_1, var_8, *ebx_1, *edi_2)
                        label_57f6bf:
                            
                            if (eax.b == 0)
                                goto label_57f6f3
                            
                            goto label_57f6c6
                        case 1, 2
                            int32_t ecx = *edi_2
                            eax = *ebx_1
                            int32_t edi_4 = ecx & 0x30
                            void* edx_3 = eax & 0x30
                            
                            if (edx_3 == 0)
                                if (edi_4 != 0 || ((eax ^ ecx) & 0x3ffc0) != 0)
                                    goto label_57f6a9
                                
                                edi_2 = var_18_1
                                eax.b = ((eax ^ ecx) & 0xfffc0000) == 0
                                goto label_57f6bf
                            
                            if (edi_4 == 0 || ((eax.b ^ ecx.b) & 0xf) != 0
                                || ((eax ^ ecx) & 0x3ffc0) != 0)
                            label_57f6a9:
                                edi_2 = var_18_1
                                eax.b = 0
                                goto label_57f6bf
                            
                            if (eax == ecx)
                                edi_2 = var_18_1
                                eax.b = 1
                                goto label_57f6bf
                            
                            if (edx_3 == 0x30 || edi_4 == 0x30 || edx_3 == 0x20 || edi_4 == 0x20)
                                goto label_57f6a9
                            
                            if (edx_3 == 0x10 && edi_4 == edx_3)
                                edi_2 = var_18_1
                                eax.b = ((eax ^ ecx) & 0xfffc0000) == 0
                                goto label_57f6bf
                        case 4
                        label_57f6f3:
                            edi_2 = &edi_2[1]
                            edx = arg4
                            result = result_1 + 1
                            arg3 = var_8
                            result_1 = result
                            var_18_1 = edi_2
                            
                            if (result s< edx[0x100])
                                continue
                            else
                                result = result_2
                            
                            edi_1 = arg2
                            break
                        case 5
                            int32_t eax_4 = *ebx_1
                            
                            if (arg5 == eax_4 || eax_4 != *edi_2)
                                goto label_57f6f3
                            
                        label_57f6c6:
                            edx = arg4
                            *(arg2 + 0x400) -= 1
                            arg3 = var_8
                            *ebx_1 = *(arg2 + (*(arg2 + 0x400) << 2))
                            result = result_2 - 1
                            ebx_1 -= 4
                            edi_1 = arg2
                            break
                    
                    var_30_3 = "AbilityID::static_ability_card_id"
                    var_34_2 = 0x11e
                    var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                    ecx_3 = "type() == ABILITY_CARD_STATIC"
                
                sub_63b870(eax, &data_801800, ecx_3, var_38, var_34_2, var_30_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        result += 1
        ebx_1 += 4
        result_2 = result
        
        if (result s>= *(edi_1 + 0x400))
            break

return result
