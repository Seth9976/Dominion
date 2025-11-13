// 函数: sub_7211f0
// 地址: 0x7211f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3

if (arg3[0x11f5] != 0)
    return 0

if (arg3[0x11f0] s< 0x10)
    sub_720ca0(arg3)

if (arg3[0x11f6] != 0)
    if (arg3[0x11f0] s< 1)
        sub_720ca0(arg3)
    
    int32_t ecx_14 = arg3[0x11ef]
    arg3[0x11f0] -= 1
    arg3[0x11ef] = ecx_14 * 2
    
    if (ecx_14 s< 0)
        *arg2 += 1 << (arg3[0x11f7]).b
    
    return 1

memset(arg2, 0, 0x80)

if (arg3[0x11f0] s< 0x10)
    sub_720ca0(arg3)

int32_t ebx_1 = arg3[0x11ef]
uint32_t eax_3 = zx.d(*((ebx_1 u>> 0x17) + arg4))
void* eax_4
int32_t edx_1
uint32_t ebx_2

if (eax_3 u>= 0xff)
    int32_t* eax_5 = arg4 + 0x62c
    int32_t esi_1 = 0xa
    
    while (ebx_1 u>> 0x10 u>= *eax_5)
        eax_5 = &eax_5[1]
        esi_1 += 1
    
    edx_1 = arg3[0x11f0]
    
    if (esi_1 == 0x11)
        edx_1 -= 0x10
        ebx_2 = 0xffffffff
        arg3[0x11f0] = edx_1
        goto label_72131b
    
    if (esi_1 s> edx_1)
        ebx_2 = 0xffffffff
        goto label_72131b
    
    edx_1 -= esi_1
    eax_4 = (ebx_1 u>> (0x20 - esi_1.b) & *((esi_1 << 2) + &data_801050))
        + *(arg4 + (esi_1 << 2) + 0x64c)
    arg3[0x11f0] = edx_1
    arg3[0x11ef] = ebx_1 << esi_1.b
    eax_4.b = *(eax_4 + arg4 + 0x400)
    goto label_721312

uint32_t ecx_1 = zx.d(*(eax_3 + arg4 + 0x500))
edx_1 = arg3[0x11f0]
int32_t ebx_7

if (ecx_1 s<= edx_1)
    edx_1 -= ecx_1
    arg3[0x11ef] = ebx_1 << ecx_1.b
    arg3[0x11f0] = edx_1
    eax_4.b = *(eax_3 + arg4 + 0x400)
label_721312:
    ebx_2 = zx.d(eax_4.b)
    
    if (eax_4.b != 0)
        goto label_72131b
    
    ebx_7 = 0
else
    ebx_2 = 0xffffffff
label_72131b:
    
    if (edx_1 s< ebx_2)
        sub_720ca0(arg3)
    
    int32_t edx_2 = arg3[0x11ef]
    arg3[0x11f0] -= ebx_2
    int32_t esi_3 = rol.d(edx_2, ebx_2.b)
    int32_t ecx_10 = *((ebx_2 << 2) + &data_801050)
    int32_t ebx_5 = *((ebx_2 << 2) + &data_801010)
    arg3[0x11ef] = not.d(ecx_10) & esi_3
    ebx_7 = (ebx_5 & not.d(edx_2 s>> 0x1f)) + (ecx_10 & esi_3)

int32_t eax_13 = arg5 * 9
int32_t edx_6 = arg3[eax_13 * 2 + 0x11ad] + ebx_7
arg3[eax_13 * 2 + 0x11ad] = edx_6
edx_6.w <<= (arg3[0x11f7]).b
*arg2 = edx_6.w
return 1
