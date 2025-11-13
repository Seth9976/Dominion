// 函数: sub_5c33e0
// 地址: 0x5c33e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s>= arg4)
    return 

void* esi_1 = arg3[1]
int32_t* edi_1 = *arg3

if (arg4 - arg2 s< 4)
label_5c34e4:
    
    do
        arg1 = arg2 << 2
        int32_t* ecx_5 = *edi_1
        arg2 += 1
        *(ecx_5 + arg1) = *(*(esi_1 + 4) + arg1) f* *(esi_1 + 0x10) f+ *(ecx_5 + arg1)
    while (arg2 s< arg4)
    
    return 

int32_t ecx = *(esi_1 + 4)
void* var_8_1 = (arg2 << 2) + 8
int32_t i_1 = ((arg4 - arg2 - 4) u>> 2) + 1
void* edx_1 = (arg2 << 2) + 8 + ecx
int32_t i

do
    float* eax_11 = *edi_1
    void* ecx_2 = 0xfffffff8 - ecx + edx_1
    *(eax_11 + ecx_2) = *(edx_1 - 8) f* *(esi_1 + 0x10) f+ *(eax_11 + ecx_2)
    int32_t eax_12 = *edi_1
    *(eax_12 + ecx_2 + 4) = *(edx_1 - 4) f* *(esi_1 + 0x10) f+ *(eax_12 + ecx_2 + 4)
    float* eax_13 = *edi_1
    *(eax_13 + var_8_1) = *edx_1 f* *(esi_1 + 0x10) f+ *(eax_13 + var_8_1)
    arg1 = *edi_1 + 4 - ecx
    var_8_1 += 0x10
    *(arg1 + edx_1) = *(edx_1 + 4) f* *(esi_1 + 0x10) f+ *(arg1 + edx_1)
    edx_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
arg2 += (((arg4 - arg2 - 4) u>> 2) + 1) << 2

if (arg2 s< arg4)
    goto label_5c34e4
