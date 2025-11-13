// 函数: sub_5c02a0
// 地址: 0x5c02a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *arg1
int32_t edi = *arg2
int32_t* i = nullptr
int32_t* ebx = *esi
int32_t edx = esi[1]
arg2 = nullptr

if (esi[2] s<= 0)
    return arg1

do
    int32_t ecx_1 = 0
    
    if (edx s> 0)
        int32_t* eax_1 = ebx
        
        do
            float xmm0_1 = *eax_1
            eax_1 = &eax_1[1]
            float xmm0_2 = xmm0_1 f/ *(edi + (ecx_1 << 2))
            ecx_1 += 1
            eax_1[-1] = xmm0_2
            edx = esi[1]
        while (ecx_1 s< edx)
        
        i = arg2
    
    ebx = &ebx[edx]
    i += 1
    arg2 = i
while (i s< esi[2])

return arg1
