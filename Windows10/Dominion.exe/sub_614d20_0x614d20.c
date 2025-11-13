// 函数: sub_614d20
// 地址: 0x614d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* eax = data_b809e4 * 0x1c30
void* i = data_b809e0
*arg5 = 0
void* eax_1 = eax + i
int32_t edx = arg3
int32_t var_8_1 = edx

for (; i u< eax_1; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            int32_t ecx = data_b809e0
            
            while (true)
                if (*(i + 0x2c) == 5 && *(i + 0x1f0) == edx && *(i + 0x21c) s> 0)
                    int32_t ecx_1 = *(i + 0x200)
                    int32_t edx_1 = *arg2
                    int32_t var_1c
                    char const* const var_18_2
                    char* ecx_6
                    
                    if (ecx_1 != edx_1)
                    label_614f19:
                        
                        if (edx_1 != 3)
                            var_18_2 = "AbilityOnlyStacksWithSelf"
                            var_1c = 0xc2fb
                        label_614fc8:
                            ecx_6 = "abilityType.type == CONTEXT_ABILITY"
                        label_614fd7:
                            sub_63b870(eax_1, &data_801800, ecx_6, 
                                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_1c, var_18_2)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                    else
                        eax_1 = *(i + 0x208)
                        
                        if (eax_1 != arg2[2])
                            goto label_614f19
                        
                        eax_1 = *(i + 0x20c)
                        
                        if (eax_1 != arg2[3])
                            goto label_614f19
                        
                        eax_1 = *(i + 0x210)
                        
                        if (eax_1 != arg2[4])
                            goto label_614f19
                        
                        if (ecx_1 != 1)
                            if (ecx_1 == 2)
                            label_614e02:
                                eax_1 = *(i + 0x204)
                                
                                if (eax_1 != arg2[1])
                                    goto label_614f19
                                
                                goto label_614e11
                            
                            if (ecx_1 != 3)
                                var_18_2 = "operator =="
                                var_1c = 0xc2f3
                                ecx_6 = "Halt"
                                goto label_614fd7
                            
                            eax_1 = *(i + 0x204)
                            
                            if (eax_1 != arg2[1])
                                goto label_614f19
                            
                            goto label_614e02
                        
                    label_614e11:
                        eax_1 = arg2[1]
                        
                        if (*(i + 0x204) != eax_1)
                            goto label_614f19
                        
                        if (edx_1 != 3)
                            var_18_2 = "AbilityDoesntStack"
                            var_1c = 0xc30c
                            goto label_614fc8
                        
                        if (eax_1 s<= 0x100a)
                            if (eax_1 == 0x100a)
                                goto label_614f47
                            
                            if (eax_1 s> 0xd0d)
                                if (eax_1 s> 0xe04)
                                    if (eax_1 == 0xe0d || eax_1 == 0xf1e)
                                        goto label_614f47
                                    
                                    return i
                                
                                if (eax_1 == 0xe04 || eax_1 == 0xd16 || eax_1 == 0xd2f)
                                    goto label_614f47
                                
                                return i
                            
                            if (eax_1 == 0xd0d)
                                goto label_614f47
                            
                            if (eax_1 s> 0x71f)
                                if (eax_1 == 0xb08 || eax_1 == 0xc15)
                                    goto label_614f47
                                
                                return i
                            
                            if (eax_1 == 0x71f || eax_1 == 0x401 || eax_1 == 0x41e)
                                goto label_614f47
                            
                            return i
                        
                        if (eax_1 s> 0x1225)
                            if (eax_1 s> 0x130c)
                                if (eax_1 != 0x1510)
                                    return i
                                
                                goto label_614f19
                            
                            if (eax_1 == 0x130c || eax_1 == 0x1302 || eax_1 == 0x130b)
                                goto label_614f47
                            
                            return i
                        
                        if (eax_1 != 0x1225)
                            if (eax_1 s<= 0x103a)
                                if (eax_1 == 0x103a || eax_1 == 0x100e || eax_1 == 0x1025)
                                    goto label_614f47
                                
                                return i
                            
                            if (eax_1 != 0x111d && eax_1 != 0x1121)
                                return i
                    
                    if (arg2[1] == 0x1121)
                        if (sub_5916b0(*(i + 0x1fc)) == arg4)
                            return i
                        
                        goto label_614f47
                    
                label_614f47:
                    *arg5 += 1
                    ecx = data_b809e0
                    edx = var_8_1
                
                i += 0x1c30
                eax_1 = data_b809e4 * 0x1c30 + ecx
                
                if (i u>= eax_1)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= eax_1)
                        return 0
                
                if (i == 0xffffffff)
                    return 0
        
        break

return 0
