// 函数: sub_694540
// 地址: 0x694540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg2 + 0xc
void* var_8 = eax
int32_t esi_1 = *arg4
int32_t* var_c = arg2 + 8

if (esi_1 s>= 0x24)
    esi_1 -= 0x24
    void* eax_1 = 0x723c
    
    if (*(arg2 + 8) != 0)
        eax_1 = 0x8b9c
    
    eax = eax_1 + arg2
else
    var_c = arg2 + 8

int32_t edx = 0
__builtin_memcpy(arg3, esi_1 * 0x32c + eax, 0x32c)

if (arg5 s> 0)
    do
        int32_t ecx_1 = arg4[edx]
        void* eax_3
        
        if (ecx_1 s>= 0x24)
            ecx_1 -= 0x24
            void* eax_4 = 0x723c
            
            if (*var_c != 0)
                eax_4 = 0x8b9c
            
            eax_3 = eax_4 + arg2
        else
            eax_3 = var_8
        
        void* esi_6 = ecx_1 * 0x32c + eax_3
        
        if (*(esi_6 + 4) != 0 || *(esi_6 + 0x328) != 0 || *(esi_6 + 0x327) != 0
                || *(esi_6 + 0x325) != 0)
            __builtin_memcpy(arg3, esi_6, 0x32c)
        
        edx += 1
    while (edx s< arg5)

return arg3
