// 函数: sub_4f7ae0
// 地址: 0x4f7ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg4
int32_t var_c = arg2
int32_t ecx = eax - 1
int32_t ebx = arg2
int32_t edi_1 = ecx s>> 1

if (arg2 s< edi_1)
    do
        int32_t ecx_1 = ebx * 2
        int32_t ebx_1
        ebx_1.b = *(arg3 + (ecx_1 << 2) + 8) s<= *(arg3 + (ecx_1 << 2) + 4)
        ebx = ebx_1 + 1 + ecx_1
        *(arg3 + (arg2 << 2)) = *(arg3 + (ebx << 2))
        arg2 = ebx
    while (ebx s< edi_1)
    
    eax = arg4

if (ebx == edi_1 && (eax.b & 1) == 0)
    *(arg3 + (arg2 << 2)) = *(arg3 + (eax << 2) - 4)
    arg2 = ecx

if (var_c s>= arg2)
    int32_t eax_8 = *arg5
    *(arg3 + (arg2 << 2)) = eax_8
    return eax_8

int32_t eax_5

do
    eax_5 = (arg2 - 1) s>> 1
    int32_t ecx_2 = *(arg3 + (eax_5 << 2))
    
    if (ecx_2 s<= *arg5)
        break
    
    *(arg3 + (arg2 << 2)) = ecx_2
    arg2 = eax_5
while (var_c s< eax_5)
int32_t eax_6 = *arg5
*(arg3 + (arg2 << 2)) = eax_6
return eax_6
