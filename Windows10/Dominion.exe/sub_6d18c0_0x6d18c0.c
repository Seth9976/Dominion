// 函数: sub_6d18c0
// 地址: 0x6d18c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = zx.d(*(arg3 + 5))
uint32_t ebx_1 = zx.d(*(arg3 + 4)) << 8
int32_t esi = 0

if (ebx_1 != neg.d(eax))
    void* edx = arg3 + 0xe
    int32_t eax_1 = sx.d(*arg4)
    void* eax_2 = 0xfffffffe - arg3
    int32_t ecx = eax_1
    void* var_c_1 = eax_2
    
    while (true)
        void* eax_3 = eax_2 + edx
        
        if (zx.d(*(edx - 2)) == ecx)
            if (zx.d(*(edx - 1)) == sx.d(arg4[1]) && zx.d(*edx) == sx.d(arg4[2])
                    && zx.d(*(edx + 1)) == sx.d(arg4[3]))
                uint32_t result = (((((zx.d(*(eax_3 + arg3 + 8)) << 8) + zx.d(*(eax_3 + arg3 + 9)))
                    << 8) + zx.d(*(eax_3 + arg3 + 0xa))) << 8) + zx.d(*(eax_3 + arg3 + 0xb))
                return result
            
            ecx = eax_1
        
        esi += 1
        edx += 0x10
        
        if (esi s>= ebx_1 + eax)
            break
        
        eax_2 = var_c_1

return 0
