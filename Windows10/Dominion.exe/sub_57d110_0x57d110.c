// 函数: sub_57d110
// 地址: 0x57d110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg2
void* result_1 = result
int32_t i = 0
int32_t var_14 = 0xf47
int32_t var_10 = 0x123e

do
    void* eax = sub_571b30((&var_14)[i], *(result + 0xd48))
    int32_t esi_1 = 0
    int32_t j = *(eax + 0xa8)
    
    if (j != 0)
        void* ecx_1 = eax
        
        do
            if (j == 6 && *(ecx_1 + 0xac) == 3 && *(ecx_1 + 0xb4) == arg5)
                if (esi_1 != 0xffffffff)
                    uint32_t eax_2 = sub_575e70(arg5, esi_1, (&var_14)[i], arg6)
                    
                    if (sub_57c810(eax_2, arg4, result_1, eax_2, arg6, 0, 0xffffffff, 0) != 0)
                        *(arg3 + (*(arg3 + 0x400) << 2)) = eax_2
                        *(arg3 + 0x400) += 1
                
                break
            
            esi_1 += 1
            ecx_1 = esi_1 * 0xb4 + eax
            j = *(ecx_1 + 0xa8)
        while (j != 0)
    
    result = result_1
    i += 1
while (i u< 2)

return result
