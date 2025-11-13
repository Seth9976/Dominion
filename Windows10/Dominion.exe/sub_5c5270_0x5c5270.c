// 函数: sub_5c5270
// 地址: 0x5c5270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t esi = arg4

if (ebx s>= esi)
    return 

int32_t edi_2 = *arg3[1]
int32_t eax_3 = **arg3

if (esi - ebx s< 4)
label_5c52f9:
    void* ecx_1 = eax_3 + (ebx << 2)
    int32_t i_3 = esi - ebx
    int32_t i
    
    do
        arg1 = *(edi_2 - eax_3 + ecx_1)
        ecx_1 += 4
        *(ecx_1 - 4) = arg1
        i = i_3
        i_3 -= 1
    while (i != 1)
    return 

void* edx_1 = edi_2 + ((ebx + 3) << 2)
void* ecx = eax_3 + ((ebx + 1) << 2)
int32_t i_2 = ((esi - ebx - 4) u>> 2) + 1
int32_t eax_5 = ebx + (i_2 << 2)
int32_t i_1

do
    ecx += 0x10
    *(ecx - 0x14) = *(edx_1 - 0xc)
    edx_1 += 0x10
    *(ecx - 0x10) = *(ecx + edi_2 - eax_3 - 0x10)
    *(ecx - 0xc) = *(edx_1 - 0x14)
    *(ecx - 8) = *(edx_1 - 0x10)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
esi = arg4
ebx = eax_5

if (ebx s< esi)
    goto label_5c52f9
