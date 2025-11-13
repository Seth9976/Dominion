// 函数: sub_61b690
// 地址: 0x61b690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_5cba00(data_b7fcf4)
uint32_t result = sub_5d1210(eax_2, arg3, *(arg2 + 0xa0), *(eax_2 + 0x60), *(eax_2 + 0x64))
uint32_t result_1 = result

if (result_1 != 0)
    int32_t ecx_4
    
    if (data_8db5c4 != 0x27)
        ecx_4 = 0
        
        if (data_8db5d4 == 0x27)
            ecx_4 = data_8db5d8
    else
        ecx_4 = data_8db5c8
    
    int32_t var_c94_1 = ecx_4
    int32_t var_cf0_1
    char const* const var_cec_1
    char* ecx_5
    
    if (arg3 != 0x3ee && arg3 != 0x3ef && arg3 != 0x3f0 && arg3 != 0x3eb && arg3 != 0x44d
            && arg3 != 0x44f && arg3 != 0x450 && arg3 != 0x44e)
        var_cec_1 = "CalcDropSlotPoitions"
        var_cf0_1 = 0xd951
        ecx_5 = "Halt"
        goto label_61b857
    
    int32_t ecx_7
    
    if (result_1 s> 0)
        void* edi_1 = nullptr
        
        if (arg3 - 0x3eb u<= 0x65)
            while (true)
                result = zx.d(*(arg3 + sub_61b2f0+0x1a5))
                
                switch (result)
                    case 2
                        int32_t var_cec_2 = ecx_4
                        void var_cd8
                        int128_t* eax_3 = sub_67bff0(&var_cd8, edi_1)
                        ecx_4 = var_c94_1
                        int128_t var_cb4_1 = *eax_3
                        int32_t var_c90[0x321]
                        var_c90[edi_1] = (eax_3[1]).q:4.d
                        edi_1 += 1
                        
                        if (edi_1 s< result_1)
                            continue
                        
                        int32_t ecx_6 = 0
                        
                        while (not(var_c90[ecx_6] f> *arg4))
                            ecx_6 += 1
                            
                            if (ecx_6 s>= result_1)
                                goto label_61b7f5
                        
                        ecx_7 = 0
                        
                        if (ecx_6 - 1 s>= 0)
                            ecx_7 = ecx_6 - 1
                        
                        break
                    case 3
                        goto label_61b825
            
            goto label_61b801
        
    label_61b825:
        var_cec_1 = "CalcDropSlotPoitions"
        var_cf0_1 = 0xd948
        ecx_5 = "Halt"
    label_61b857:
        sub_63b870(result, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_cf0_1, var_cec_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
label_61b7f5:
    ecx_7 = result_1 - 1
    
    if (ecx_7 s< 0)
        ecx_7 = 0
    
label_61b801:
    int32_t eax_6 = result_1 - ecx_7
    result = eax_6 - 1
    
    if (eax_6 - 1 s< 0)
        var_cec_1 = "CalcDropSlot"
        var_cf0_1 = 0xd971
        ecx_5 = "retval >= 0"
        goto label_61b857
    
    if (result s> result_1)
        var_cec_1 = "CalcDropSlot"
        var_cf0_1 = 0xd972
        ecx_5 = "retval <= numSlotPositions"
        goto label_61b857

CookieCheckFunction(result)
return result
