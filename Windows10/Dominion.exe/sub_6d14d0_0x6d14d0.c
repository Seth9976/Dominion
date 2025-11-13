// 函数: sub_6d14d0
// 地址: 0x6d14d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg1[2]
char* edx = arg1[1]
int32_t eax

if (edx s< edi)
    eax.b = edx[*arg1]
    edx = &edx[1]
    arg1[1] = edx
else
    eax.b = 0

uint32_t ecx = zx.d(eax.b)

if (ecx - 0x20 u<= 0xd6)
    return ecx - 0x8b

int32_t ebx

if (ecx - 0xf7 u<= 3)
    if (edx s< edi)
        ebx.b = edx[*arg1]
        arg1[1] = &edx[1]
        return zx.d(ebx.b) - 0xf694 + (ecx << 8)
    
    return 0xffff096c + (ecx << 8)

if (ecx - 0xfb u<= 3)
    if (edx s< edi)
        ebx.b = edx[*arg1]
        arg1[1] = &edx[1]
        return 0xfa94 - (ecx << 8) - zx.d(ebx.b)
    
    return 0xfa94 - (ecx << 8)

void* ecx_6
uint32_t edx_1

if (ecx != 0x1c)
    if (ecx != 0x1d)
        return 0
    
    if (edx s>= edi)
        return 0
    
    int32_t eax_21
    eax_21.b = edx[*arg1]
    arg1[1] = &edx[1]
    uint32_t edx_3 = zx.d(eax_21.b)
    
    if (&edx[1] s>= edi)
        return edx_3 << 0x18
    
    int32_t eax_23
    eax_23.b = edx[1 + *arg1]
    uint32_t edx_8 = edx_3 << 8 | zx.d(eax_23.b)
    arg1[1] = &edx[2]
    
    if (&edx[2] s>= edi)
        return edx_8 << 0x10
    
    int32_t eax_26
    eax_26.b = edx[2 + *arg1]
    ecx_6 = &edx[3]
    edx_1 = edx_8 << 8 | zx.d(eax_26.b)
    arg1[1] = ecx_6
    
    if (ecx_6 s>= edi)
        return edx_1 << 8
else
    if (edx s>= edi)
        return 0
    
    ecx_6 = &edx[1]
    int32_t eax_18
    eax_18.b = edx[*arg1]
    arg1[1] = ecx_6
    edx_1 = zx.d(eax_18.b)
    
    if (ecx_6 s>= edi)
        return edx_1 << 8

int32_t eax_29
eax_29.b = *(ecx_6 + *arg1)
arg1[1] = ecx_6 + 1
return zx.d(eax_29.b) | edx_1 << 8
