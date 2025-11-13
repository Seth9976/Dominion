// 函数: sub_5c88b0
// 地址: 0x5c88b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t edi = arg4

if (arg2 s>= edi)
    return 

void* esi_1 = arg3[1]
int32_t* ecx = *arg3

if (edi - arg2 s< 4)
label_5c8967:
    
    do
        *(*ecx + (arg2 << 2)) = *(*(esi_1 + 4) + (arg2 << 2)) f/ *(esi_1 + 8)
        arg2 += 1
    while (arg2 s< edi)
    
    return 

int32_t ebx_1 = arg2 << 2

do
    ebx_1 += 0x10
    *(*ecx + (arg2 << 2)) = *(*(esi_1 + 4) + ebx_1 - 0x10) f/ *(esi_1 + 8)
    *(*ecx + (arg2 << 2) + 4) = *(*(esi_1 + 4) + (arg2 << 2) + 4) f/ *(esi_1 + 8)
    *(*ecx + (arg2 << 2) + 8) = *(*(esi_1 + 4) + (arg2 << 2) + 8) f/ *(esi_1 + 8)
    *(*ecx + (arg2 << 2) + 0xc) = *(*(esi_1 + 4) + (arg2 << 2) + 0xc) f/ *(esi_1 + 8)
    arg2 += 4
while (arg2 s< edi - 3)

edi = arg4

if (arg2 s< edi)
    goto label_5c8967
