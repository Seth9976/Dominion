// 函数: sub_5c3020
// 地址: 0x5c3020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3

if (arg2 s>= arg4)
    return 

int32_t* ebx_1 = *arg3
void* esi_1 = arg3[1]

if (arg4 - arg2 s< 4)
label_5c30c6:
    int32_t edi_2 = arg2 << 2
    
    do
        float xmm0_10 = *(*(esi_1 + 4) + (arg2 << 2)) f+ *(*(esi_1 + 0x10) + edi_2)
        edi_2 += 4
        *(*ebx_1 + (arg2 << 2)) = xmm0_10
        arg2 += 1
    while (arg2 s< arg4)
else
    int32_t edi_1 = arg2 << 2
    
    do
        float xmm0_2 = *(*(esi_1 + 4) + (arg2 << 2)) f+ *(*(esi_1 + 0x10) + edi_1)
        edi_1 += 0x10
        *(*ebx_1 + (arg2 << 2)) = xmm0_2
        *(*ebx_1 + (arg2 << 2) + 4) =
            *(*(esi_1 + 0x10) + (arg2 << 2) + 4) f+ *(*(esi_1 + 4) + (arg2 << 2) + 4)
        *(*ebx_1 + (arg2 << 2) + 8) =
            *(*(esi_1 + 4) + (arg2 << 2) + 8) f+ *(*(esi_1 + 0x10) + (arg2 << 2) + 8)
        *(*ebx_1 + (arg2 << 2) + 0xc) =
            *(*(esi_1 + 0x10) + (arg2 << 2) + 0xc) f+ *(*(esi_1 + 4) + (arg2 << 2) + 0xc)
        arg2 += 4
    while (arg2 s< arg4 - 3)
    
    if (arg2 s< arg4)
        goto label_5c30c6
