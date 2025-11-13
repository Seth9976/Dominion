// 函数: sub_5c53e0
// 地址: 0x5c53e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s>= arg4)
    return 

void* eax = arg3[1]
int32_t edi_1 = *(eax + 0x10)
int32_t ebx_1 = *(eax + 4)
int32_t eax_2 = **arg3

do
    int32_t* ecx = ebx_1 + (arg2 << 2)
    
    if (*(edi_1 + (arg2 << 2)) f> *(ebx_1 + (arg2 << 2)))
        ecx = edi_1 + (arg2 << 2)
    
    *(eax_2 + (arg2 << 2)) = *ecx
    arg2 += 1
while (arg2 s< arg4)
