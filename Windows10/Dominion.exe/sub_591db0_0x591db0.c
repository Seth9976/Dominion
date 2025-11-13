// 函数: sub_591db0
// 地址: 0x591db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg3
int32_t result = 0
void* var_c = ebx
int32_t i = 1
int32_t result_1 = 0

if (*(ebx + 0x1520) s> 1)
    do
        uint32_t esi_1 = zx.d(i.w)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax = esi_1 * 0x64
        
        if (*(eax + ebx + 0x1a70) != arg2)
            result = result_1
        else
            int32_t esi_2 = *(eax + ebx + 0x1a4c)
            int32_t eax_1 = sub_57da30(ebx, esi_2)
            int32_t edx_1 = 7
            void* ecx_3 = var_c + 0x1594
            int32_t eax_2
            
            while (true)
                eax_2 = *ecx_3
                
                if (eax_2 == esi_2)
                    break
                
                if (*(ecx_3 + 4) == esi_2)
                    break
                
                if (eax_2 == eax_1)
                    break
                
                edx_1 += 1
                ecx_3 += 0x10
                
                if (edx_1 s>= 0x48)
                    eax_2 = 0
                    break
            
            ebx = var_c
            result = result_1
            
            if (eax_2 == arg4)
                result += 1
                result_1 = result
        
        i += 1
    while (i s< *(ebx + 0x1520))

return result
