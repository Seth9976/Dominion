// 函数: sub_5cfdf0
// 地址: 0x5cfdf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
void* i = data_b809e0
*arg5 = 0

for (void* eax_2 = data_b809e4 * 0x1c30 + i; i u< eax_2; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            while (true)
                char eax_4
                int32_t edx
                eax_4, edx = sub_5cfc80(i)
                
                if (eax_4 != 0 && *(i + 0x2c) != 7)
                    int128_t var_2c
                    int128_t* eax_6
                    int32_t edx_1
                    eax_6, edx_1 = sub_5cf960(&var_2c, edx, i, &var_2c)
                    int96_t xmm0_1 = (*eax_6).12
                    int32_t eax_7 = xmm0_1
                    uint32_t eax_9
                    bool cond:0_1
                    
                    if (eax_7 == 2)
                        int32_t eax_8 = *(arg3 + 0x2c)
                        
                        if (eax_8 == 0)
                            eax_9 = *(arg3 + 0x98)
                            cond:0_1 = eax_9 != xmm0_1:4.d
                        label_5cfecf:
                            
                            if (not(cond:0_1))
                            label_5cfed5:
                                uint32_t eax_12
                                
                                if (*(i + 0x2c) == 0)
                                    int32_t edx_2
                                    eax_12, edx_2 = sub_5cbaa0(eax_9, edx_1, i, 0x4000000, 0)
                                    
                                    if (eax_12.b == 0)
                                        eax_9 = sub_5cbaa0(eax_12, edx_2, i, 0x40000000, 0)
                                
                                int32_t var_44
                                char* ecx_6
                                
                                if (*(i + 0x2c) != 0 || (eax_12.b == 0 && eax_9.b == 0))
                                    if (result s>= 0x200)
                                        char const* const var_40_3 = "ZoomAssociatedIcons"
                                        var_44 = 0x1626
                                        ecx_6 = "numIcons < maxIcons"
                                    label_5cffab:
                                        sub_63b870(eax_9, &data_801800, ecx_6, 
                                            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_44, 
                                            "ZoomAssociatedIcons")
                                        
                                        if (sub_63bc30() != 0)
                                            breakpoint
                                        
                                        sub_63bb00()
                                        noreturn
                                    
                                    *(arg2 + (result << 2)) = i
                                    result += 1
                                else
                                    eax_9 = *arg5
                                    
                                    if (eax_9 s>= 0x10)
                                        char const* const var_40_2 = "ZoomAssociatedIcons"
                                        var_44 = 0x1621
                                        ecx_6 = "numIconCards < maxCardIcons"
                                        goto label_5cffab
                                    
                                    *(arg4 + (eax_9 << 2)) = i
                                    *arg5 = eax_9 + 1
                        else if (eax_8 == 3)
                            int32_t ecx_2 = *(arg3 + 0x70)
                            
                            if (ecx_2 != 0)
                                uint32_t eax_10
                                eax_10, edx_1 = sub_5cba00(ecx_2)
                                eax_9 = *(eax_10 + 0x98)
                                cond:0_1 = eax_9 != xmm0_1:4.d
                                goto label_5cfecf
                    else if (eax_7 == 3 && *(arg3 + 0x2c) == eax_7)
                        int32_t eax_11 = *(arg3 + 0x5c)
                        
                        if (eax_11 == xmm0_1:4.d)
                            eax_9 = eax_11 - 1
                            
                            if (eax_9 u<= 0x47)
                                goto label_5cfed5
                            
                            eax_9 = *(arg3 + 0x58)
                            cond:0_1 = eax_9 != xmm0_1:8.d
                            goto label_5cfecf
                
                void* i_1 = data_b809e0
                
                if (i != 0)
                    i += 0x1c30
                else
                    i = i_1
                
                void* eax_16 = data_b809e4 * 0x1c30 + i_1
                
                if (i u>= eax_16)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= eax_16)
                        return result
                
                if (i == 0xffffffff)
                    return result
        
        break

return result
