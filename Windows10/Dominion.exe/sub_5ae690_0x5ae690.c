// 函数: sub_5ae690
// 地址: 0x5ae690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2
int32_t eax_2 = (arg4 - 1) s>> 1
int32_t esi = edi
int32_t var_c = esi
int32_t ecx_4

if (edi s>= eax_2)
    ecx_4 = eax_2
else
    do
        int32_t esi_1 = arg2 * 2
        int32_t edx_1
        edx_1.b = *(arg6 + *(arg3 + (esi_1 << 2) + 8) * 0xc + 8) f<=
            *(arg6 + *(arg3 + (esi_1 << 2) + 4) * 0xc + 8)
        arg2 = edx_1 + 1 + esi_1
        *(arg3 + (edi << 2)) = *(arg3 + (arg2 << 2))
        edi = arg2
        ecx_4 = eax_2
    while (arg2 s< ecx_4)
    
    esi = var_c

if (arg2 == ecx_4 && (arg4.b & 1) == 0)
    *(arg3 + (edi << 2)) = *(arg3 + (arg4 << 2) - 4)
    edi = arg4 - 1

if (esi s< edi)
    int32_t esi_3
    
    do
        esi_3 = (edi - 1) s>> 1
        
        if (*(arg6 + *(arg3 + (esi_3 << 2)) * 0xc + 8) f<= *(arg6 + *arg5 * 0xc + 8))
            break
        
        *(arg3 + (edi << 2)) = *(arg3 + (esi_3 << 2))
        edi = esi_3
    while (var_c s< esi_3)

int32_t result = *arg5
*(arg3 + (edi << 2)) = result
return result
