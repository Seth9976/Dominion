// 函数: sub_5af310
// 地址: 0x5af310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t eax = arg4
int32_t esi = eax - 1
int32_t edi = arg2
int32_t ebx = arg2
int32_t esi_1 = esi s>> 1

if (arg2 s< esi_1)
    do
        int32_t eax_1 = ebx * 2
        int32_t ebx_1
        ebx_1.b = *(arg3 + (eax_1 << 2) + 4) f<= *(arg3 + (eax_1 << 2) + 8)
        ebx = ebx_1 + eax_1 + 1
        *(arg3 + (arg2 << 2)) = *(arg3 + (ebx << 2))
        arg2 = ebx
    while (ebx s< esi_1)
    
    eax = arg4

if (ebx == esi_1 && (eax.b & 1) == 0)
    *(arg3 + (arg2 << 2)) = *(arg3 + (eax << 2) - 4)
    arg2 = esi

if (edi s>= arg2)
    int32_t eax_9 = *arg5
    *(arg3 + (arg2 << 2)) = eax_9
    return eax_9

int32_t eax_6

do
    eax_6 = (arg2 - 1) s>> 1
    int32_t xmm1_1 = *(arg3 + (eax_6 << 2))
    
    if (*arg5 f<= xmm1_1)
        break
    
    *(arg3 + (arg2 << 2)) = xmm1_1
    arg2 = eax_6
while (edi s< eax_6)
int32_t eax_7 = *arg5
*(arg3 + (arg2 << 2)) = eax_7
return eax_7
