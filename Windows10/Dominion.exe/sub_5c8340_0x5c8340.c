// 函数: sub_5c8340
// 地址: 0x5c8340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t esi = arg2

if (esi s>= arg4)
    return 

int32_t* eax = *arg3
void* edi_1 = arg3[1]
int32_t ebx_1 = esi << 2

do
    int32_t var_8 = sub_4ea070(ebp, sub_4ea090(ebp, *(ebx_1 + *(edi_1 + 0x1c))) f+ *(edi_1 + 0x24))
    ebx_1 += 4
    *(*eax + (esi << 2)) = sub_5bc390(&var_8) f* *(*(edi_1 + 4) + (esi << 2))
    esi += 1
while (esi s< arg4)
