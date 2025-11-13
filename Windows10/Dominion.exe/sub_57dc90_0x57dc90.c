// 函数: sub_57dc90
// 地址: 0x57dc90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = sub_57dc30(arg2, arg6.w)
int32_t edi_1

if (i == 0)
label_57dcd2:
    edi_1 = 0
else
    edi_1 = 7
    void* eax = arg2 + 0x1594
    
    while (*eax != i)
        if (*(eax + 4) == i)
            break
        
        edi_1 += 1
        eax += 0x10
        
        if (edi_1 s>= 0x48)
            goto label_57dcd2

int32_t result = *(arg2 + 0x19a4)
int32_t esi_1 = 0

if (result s> 0)
    void* ebx_1 = arg2 + 0x152d0
    
    while (true)
        int32_t ecx_1 = *(ebx_1 - 4)
        
        if ((ecx_1 == 0xffffffff || ecx_1 == arg4) && *ebx_1 == edi_1 && *(ebx_1 + 0xc) != 0)
            if (esi_1 s>= result)
                sub_591930()
            
            if (esi_1 s< 0)
                sub_591930()
            
            int32_t edx_1 = 0
            void* eax_2 = sub_571910(*(ebx_1 - 8)) + 0x20
            
            while (true)
                int32_t ecx_3 = *(eax_2 - 4)
                
                if (ecx_3 != 0)
                    if (ecx_3 == 6 && *eax_2 == 7 && *(eax_2 + 8) == arg5)
                        int32_t ecx_7 = edx_1 & 0xf
                        int32_t var_20
                        char const* const var_1c
                        char* ecx_10
                        
                        if (ecx_7 != edx_1)
                            var_1c = "AbilityID::set_idx"
                            var_20 = 0xf0
                            ecx_10 = "idx() == x"
                        label_57ddea:
                            sub_63b870(eax_2, &data_801800, ecx_10, 
                                "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_20, var_1c)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        eax_2 = arg6
                        
                        if (eax_2 s< 0)
                            var_1c = "AbilityID::set_trigger_card_id"
                            var_20 = 0xff
                            ecx_10 = "x >= 0"
                            goto label_57ddea
                        
                        eax_2 = ((eax_2 & 0xfff) | esi_1 << 0xc) << 6 | ecx_7 | 0x30
                        
                        if (eax_2 u>> 0x12 == esi_1)
                            break
                        
                        var_1c = "AbilityID::set_payload"
                        var_20 = 0x14d
                        ecx_10 = "payload() == arg_payload"
                        goto label_57ddea
                    
                    edx_1 += 1
                    eax_2 += 0xb4
                    
                    if (edx_1 s< 8)
                        continue
                
                eax_2 = 0xffffffff
                break
            
            if (eax_2 != 0xffffffff)
                *(arg3 + (*(arg3 + 0x400) << 2)) = eax_2
                *(arg3 + 0x400) += 1
        
        esi_1 += 1
        ebx_1 += 0x20
        result = *(arg2 + 0x19a4)
        
        if (esi_1 s>= result)
            break

return result
