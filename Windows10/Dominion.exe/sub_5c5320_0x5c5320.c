// 函数: sub_5c5320
// 地址: 0x5c5320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg4

if (arg2 s>= ebx)
    return 

int32_t* esi_1 = arg3[1]
int32_t* eax_2 = *arg3
int32_t ecx_6

if (ebx - arg2 s< 4)
    ecx_6 = *eax_2
label_5c53d1:
    
    do
        *(ecx_6 + (arg2 << 2)) = *(*esi_1 + (arg2 << 2))
        arg2 += 1
    while (arg2 s< ebx)
    
    return 

int32_t eax_3 = *eax_2
void* edi_1 = (arg2 << 2) + 8 + eax_3
void* ecx_2 = 0xfffffff8 - eax_3
void* var_14_1 = ecx_2
int32_t i_1 = ((ebx - arg2 - 4) u>> 2) + 1
void* edx_1 = (arg2 << 2) + 8
int32_t i

do
    edx_1 += 0x10
    void* ecx_3 = ecx_2 + edi_1
    *(edi_1 - 8) = *(ecx_3 + *esi_1)
    *(edi_1 - 4) = *(ecx_3 + *esi_1 + 4)
    *edi_1 = *(edx_1 + *esi_1 - 0x10)
    ecx_2 = var_14_1
    *(edi_1 + 4) = *(4 - eax_3 + edi_1 + *esi_1)
    edi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
arg2 += (((ebx - arg2 - 4) u>> 2) + 1) << 2
ebx = arg4

if (arg2 s< ebx)
    ecx_6 = eax_3
    goto label_5c53d1
