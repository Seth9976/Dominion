// 函数: sub_5c3100
// 地址: 0x5c3100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg4

if (arg2 s>= esi)
    return 

int32_t** edi_1 = *arg3
int32_t* eax_2 = arg3[1]
float* ebx_2

if (esi - arg2 s< 4)
    ebx_2 = *eax_2
label_5c31eb:
    
    do
        int32_t* ecx_4 = *edi_1
        arg1 = arg2 << 2
        arg2 += 1
        *(ecx_4 + arg1) = *(ebx_2 + arg1) f+ *(ecx_4 + arg1)
    while (arg2 s< esi)
    
    return 

float* eax_3 = *eax_2
void* ebx_1 = (arg2 << 2) + 8 + eax_3
void* ecx_2 = 0xfffffff8 - eax_3
void* var_14_1 = ecx_2
int32_t i_1 = ((esi - arg2 - 4) u>> 2) + 1
void* edx_1 = (arg2 << 2) + 8
int32_t i

do
    int32_t* eax_9 = *edi_1
    void* ecx_3 = ecx_2 + ebx_1
    *(eax_9 + ecx_3) = *(ebx_1 - 8) f+ *(eax_9 + ecx_3)
    int32_t* eax_10 = *edi_1
    *(eax_10 + ecx_3 + 4) = *(ebx_1 - 4) f+ *(eax_10 + ecx_3 + 4)
    int32_t* eax_11 = *edi_1
    ecx_2 = var_14_1
    *(eax_11 + edx_1) = *(eax_11 + edx_1) f+ *ebx_1
    edx_1 += 0x10
    arg1 = *edi_1 + 4 - eax_3
    *(arg1 + ebx_1) = *(ebx_1 + 4) f+ *(arg1 + ebx_1)
    ebx_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
arg2 += (((esi - arg2 - 4) u>> 2) + 1) << 2
esi = arg4

if (arg2 s< esi)
    ebx_2 = eax_3
    goto label_5c31eb
