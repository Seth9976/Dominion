// 函数: sub_571030
// 地址: 0x571030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
uint32_t esi_1 = zx.d((*arg2).w)
void* ebx = *(arg1 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_1 = esi_1 * 0x64
uint32_t eax_2

if (sub_5754f0(eax_1, *(eax_1 + ebx + 0x1a4c), ebx, 4, 0).b != 0)
    int32_t ebx_1 = *(arg1 + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t ecx_1 = 0
    eax_2 = **(arg1 + 0xc)
    
    if (eax_2 s> 0)
        do
            if (*(*(arg1 + 8) + (ecx_1 << 2)) == *(eax_1 + ebx_1 + 0x1a4c))
                if (ecx_1 == 0xffffffff)
                    break
                
                int32_t eax_4
                eax_4.b = *(*(arg1 + 0x10) + (ecx_1 << 2)) s< 2
                return eax_4
            
            ecx_1 += 1
        while (ecx_1 s< eax_2)

eax_2.b = 1
return eax_2
