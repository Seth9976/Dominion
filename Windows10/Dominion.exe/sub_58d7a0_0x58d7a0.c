// 函数: sub_58d7a0
// 地址: 0x58d7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c
int32_t* result = sub_571770(arg2, &var_c)
int32_t ebx = 0
int32_t* result_1 = result

if (result s> 0)
    int32_t esi_1 = arg10
    int32_t* edi_2 = var_c + 0x98
    
    while (true)
        int32_t edx_1 = edi_2[1]
        int32_t ecx_1 = *edi_2
        
        if ((arg9 | esi_1) == 0)
            result = edx_1 & 0x30280
            
            if (((ecx_1 & 0x4720c800) | result) == 0)
            label_58d80b:
                result = edx_1 & 0x800
                
                if (result == 0 || (arg11 & 2) != 0)
                    result = edx_1 & 0x40
                    
                    if (result == 0 || (arg11 & 1) != 0)
                        result = edi_2[-0x26]
                        
                        if (result != 1)
                            if (result != 2 || arg7 == 0)
                            label_58d847:
                                result = arg8
                                
                                if (result s>= edi_2[-0x25] && result s< edi_2[-0x24])
                                    int32_t esi_2 = edi_2[-3]
                                    result = sub_58d710(arg3, esi_2)
                                    
                                    if (result.b == 0)
                                        int32_t ecx_10 = 0
                                        result = &arg3[0x301]
                                        
                                        while (true)
                                            int32_t edx_4 = *result
                                            
                                            if (edx_4 != 0)
                                                if (edx_4 == esi_2)
                                                    break
                                                
                                                ecx_10 += 1
                                                result = &result[1]
                                                
                                                if (ecx_10 s< 0x2bc)
                                                    continue
                                            
                                            result = *arg5
                                            
                                            if (result s< 0x400)
                                                *(arg4 + (result << 2)) = esi_2
                                                *arg5 += 1
                                                break
                                            
                                            sub_63b870(result, &data_801800, "numCards < 1024", 
                                                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                                                0x3e4f, "AddExpansionCards")
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                    
                                    esi_1 = arg10
                        else if (arg6 != 0)
                            goto label_58d847
        else
            result = edx_1 & esi_1
            
            if (((ecx_1 & arg9) | result) != 0)
                goto label_58d80b
        
        ebx += 1
        edi_2 = &edi_2[0x1a6]
        
        if (ebx s>= result_1)
            break

return result
