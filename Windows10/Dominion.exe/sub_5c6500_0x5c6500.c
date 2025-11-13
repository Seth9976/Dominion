// 函数: sub_5c6500
// 地址: 0x5c6500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t ebx = arg4

if (arg2 s>= ebx)
    return 

int32_t* esi_1 = arg3[1]
int32_t* edi_1 = *arg3

if (ebx - arg2 s< 4)
label_5c657e:
    
    do
        *(*edi_1 + (arg2 << 2)) = *(*esi_1 + (arg2 << 2))
        arg2 += 1
    while (arg2 s< ebx)
    
    return 

int32_t ebx_1 = arg2 << 2

do
    ebx_1 += 0x10
    *(*edi_1 + (arg2 << 2)) = *(ebx_1 + *esi_1 - 0x10)
    *(*edi_1 + (arg2 << 2) + 4) = *(*esi_1 + (arg2 << 2) + 4)
    *(*edi_1 + (arg2 << 2) + 8) = *(*esi_1 + (arg2 << 2) + 8)
    *(*edi_1 + (arg2 << 2) + 0xc) = *(*esi_1 + (arg2 << 2) + 0xc)
    arg2 += 4
while (arg2 s< ebx - 3)

ebx = arg4

if (arg2 s< ebx)
    goto label_5c657e
