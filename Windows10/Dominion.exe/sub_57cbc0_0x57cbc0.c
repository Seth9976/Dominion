// 函数: sub_57cbc0
// 地址: 0x57cbc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t i_1 = 0

if (*(arg2 + 0x19b8) s<= 0)
    return 

void* edi_1 = arg2 + 0x3b57c

do
    int32_t edx = arg9
    
    if (*(edi_1 + 0x38) == 2 && *(edi_1 + 0x3c) == arg8
            && (*edi_1 == arg4 || (*(edi_1 + 0x4c) & 0x10000) != 0) && *(edi_1 + 4) == 0xffffffff)
        arg1 = *(edi_1 - 0x14)
        
        if (arg1 != 3 && arg1 != 4 && arg1 != 5)
            goto label_57cc75
        
        if (*(edi_1 + 0x1c) != 1)
            if (arg1 != 5)
                goto label_57cc75
            
            int32_t ecx = *(edi_1 - 0xc)
            int32_t edx_1 = *(edi_1 - 8)
            
            if ((ecx | edx_1) == 0 || (ecx == arg5 && edx_1 == arg6))
                arg1 = *(edi_1 - 4)
                i = i_1
                
                if (arg1 != arg7 || arg1 == 0)
                    edx = arg9
                label_57cc75:
                    
                    if (*(edi_1 + 0x3c) == 1)
                        arg1 = *(arg2 + 0x19e4)
                    
                    if (*(edi_1 + 0x3c) != 1 || arg1 != *(edi_1 + 0x50))
                        int32_t ecx_1 = *(edi_1 + 0x54)
                        
                        if (arg5 u<= ecx_1)
                            i = i_1
                        else
                            if (arg8 == 0xa && (*(edi_1 - 0x10) & 1) != 0)
                                arg1 = arg11
                            
                            if (arg8 != 0xa || (*(edi_1 - 0x10) & 1) == 0 || arg1 == 0
                                    || ecx_1.w u< *(arg1 + 0x10))
                                int32_t ecx_2 = *(edi_1 + 0x18)
                                int32_t var_2c
                                char const* const var_28_2
                                char* ecx_4
                                
                                if (edx s< 0)
                                    var_28_2 = "AbilityID::set_trigger_card_id"
                                    var_2c = 0xff
                                    ecx_4 = "x >= 0"
                                label_57cd40:
                                    sub_63b870(arg1, &data_801800, ecx_4, 
                                        "C:\x\ax2017\Jams\Dominion\code\DomGame.h", var_2c, 
                                        var_28_2)
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                int32_t esi_5 = ((edx & 0xfff) | ecx_2 << 0xc) << 6
                                arg1 = esi_5 u>> 0x12
                                
                                if (arg1 != ecx_2)
                                    var_28_2 = "AbilityID::set_payload"
                                    var_2c = 0x14d
                                    ecx_4 = "payload() == arg_payload"
                                    goto label_57cd40
                                
                                i = i_1
                                
                                if (sub_57c810(arg1, arg4, arg2, esi_5, edx, arg10, 0xffffffff, 
                                        arg11).b != 0)
                                    *(arg3 + (*(arg3 + 0x400) << 2)) = esi_5
                                    *(arg3 + 0x400) += 1
                            else
                                i = i_1
            else
                i = i_1
    
    i += 1
    edi_1 += 0xa8
    i_1 = i
while (i s< *(arg2 + 0x19b8))
