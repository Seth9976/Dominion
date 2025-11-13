// 函数: sub_7364d0
// 地址: 0x7364d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg5
int32_t ecx_1 = sub_6a9450(*(arg3 + 0x10))
int32_t var_c = ecx_1
int32_t result

if (ebx s< arg7)
    result = arg6
    
    do
        int32_t esi_1 = arg4
        
        if (esi_1 s< result)
            int32_t edi_2 = ecx_1 * esi_1
            
            do
                if ((sub_6a97a0(*(arg3 + 0xc) * ebx + edi_2 + *arg3, *(arg3 + 0x10)) u>> 0x18).b
                        u> 1)
                    return 0
                
                ecx_1 = var_c
                esi_1 += 1
                result = arg6
                edi_2 += ecx_1
            while (esi_1 s< result)
        
        ebx += 1
    while (ebx s< arg7)

result.b = 1
return result
