// 函数: sub_51ecc0
// 地址: 0x51ecc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *arg2
int32_t ecx = *(*(arg1 + 4) + 4)
void* result

if (ecx != 0)
    result = sub_511d80(ecx, esi)

if ((ecx == 0 || result.b != 0) && sub_511d80(**(arg1 + 4), esi).b != 0)
    void* eax_2 = sub_571b30(esi, 0x18)
    
    if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0)
        result.b = 1
        return result

result.b = 0
return result
