// 函数: sub_51ed60
// 地址: 0x51ed60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *arg2
void* eax_1 = sub_571b30(ebx, 0x18)
int32_t result

if (((*(eax_1 + 0x98) & 0x7f000400) | (*(eax_1 + 0x9c) & 0x940)) != 0)
    result.b = 0
    return result

int32_t i = 0

if (*(arg1 + 4) s> 0)
    do
        if (sub_515b00(ebx, *(*(arg1 + 8) + (i << 2))).b == 0)
            result.b = 0
            return result
        
        i += 1
    while (i s< *(arg1 + 4))

result.b = 1
return result
