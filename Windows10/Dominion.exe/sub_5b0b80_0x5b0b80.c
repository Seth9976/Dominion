// 函数: sub_5b0b80
// 地址: 0x5b0b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg5 s< 4)
    if (arg5 s>= 2)
        return sub_5b08b0(arg5, arg2, arg3, arg4)
    
    *arg2 = 0
    *arg3 = 0
    *arg4 = 0
    return arg4

int32_t ebx
int32_t var_24 = ebx
*arg2 = 0
int32_t i = 0
*arg4 = 0
*arg3 = 0
int32_t eax_2

do
    int32_t var_14_1 = 0
    int32_t var_18_1 = 0
    int32_t var_2c_1 = ebx
    int32_t ecx_1
    int32_t edx
    int32_t ebx_1
    eax_2, ebx_1, ecx_1, edx = __cpuid(4, i)
    int32_t var_1c = 0
    int32_t var_10_1 = edx
    ebx = eax_2 & 0xf
    
    if (ebx == 1 || ebx == 3)
        int32_t esi_4 = eax_2 s>> 5 & 7
        eax_2 = ((ebx_1 s>> 0xc & 0x3ff) + 1) * ((ebx_1 u>> 0x16) + 1) * ((ebx_1 & 0xfff) + 1)
            * (ecx_1 + 1)
        
        if (esi_4 == 1)
            *arg3 = eax_2
        else if (esi_4 == 2)
            *arg2 = eax_2
        else if (esi_4 == 3)
            *arg4 = eax_2
    
    i += 1
    
    if (ebx == 0)
        break
while (i s< 0x10)

return eax_2
