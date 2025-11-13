// 函数: sub_5c51c0
// 地址: 0x5c51c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t esi = arg4

if (arg2 s>= esi)
    return 

int32_t* edi_1 = *arg3
float* ecx = arg3[1]

if (esi - arg2 s< 4)
label_5c5263:
    
    do
        arg1 = *edi_1
        *(arg1 + (arg2 << 2)) = *(arg1 + (arg2 << 2)) * *ecx
        arg2 += 1
    while (arg2 s< esi)
    
    return 

int32_t ebx_1 = arg2 << 2

do
    int32_t eax_3 = *edi_1
    ebx_1 += 0x10
    *(eax_3 + ebx_1 - 0x10) = *(eax_3 + ebx_1 - 0x10) * *ecx
    int32_t eax_4 = *edi_1
    *(eax_4 + (arg2 << 2) + 4) = *(eax_4 + (arg2 << 2) + 4) * *ecx
    int32_t eax_5 = *edi_1
    *(eax_5 + (arg2 << 2) + 8) = *(eax_5 + (arg2 << 2) + 8) * *ecx
    arg1 = *edi_1
    *(arg1 + (arg2 << 2) + 0xc) = *(arg1 + (arg2 << 2) + 0xc) * *ecx
    arg2 += 4
while (arg2 s< esi - 3)

esi = arg4

if (arg2 s< esi)
    goto label_5c5263
