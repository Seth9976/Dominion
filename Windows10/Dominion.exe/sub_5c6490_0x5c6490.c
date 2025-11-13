// 函数: sub_5c6490
// 地址: 0x5c6490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t esi = arg2

if (esi s>= arg4)
    return 

arg1 = arg3[1]
int32_t* ecx = *arg3
void* var_8_1 = arg1
int32_t edi_1 = esi << 2
void* edx = *(arg1 + 8)

do
    int32_t* ecx_1 = edx + edi_1
    int32_t edx_1 = esi << 2
    int32_t* eax_1 = *(arg1 + 4) + edx_1
    edi_1 += 4
    
    if (*ecx_1 f> *eax_1)
        eax_1 = ecx_1
    
    esi += 1
    *(edx_1 + *ecx) = *eax_1
    arg1 = var_8_1
    edx = *(arg1 + 8)
while (esi s< arg4)
