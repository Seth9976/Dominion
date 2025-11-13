// 函数: sub_5ce8e0
// 地址: 0x5ce8e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = 0
int32_t var_c = arg2
void* result = arg3
void* result_1 = result

if (arg4 s> 0)
    do
        int32_t esi_1 = *(result + 0x1520)
        int32_t ecx = 0
        int32_t edx = *(arg2 + (edi << 2))
        
        if (esi_1 s> 0)
            void* eax = result + 0x1a4c
            
            do
                if (*eax == edx)
                    *(arg5 + (*arg6 << 2)) = edx
                    *arg6 += 1
                    break
                
                ecx += 1
                eax += 0x64
            while (ecx s< esi_1)
            
            result = result_1
        
        arg2 = var_c
        edi += 1
    while (edi s< arg4)

return result
