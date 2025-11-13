// 函数: sub_51f700
// 地址: 0x51f700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *arg1
int32_t result

if (*(sub_571b30(edi, 0x17) + 0x90) - 3 u<= 3)
    void* eax_3 = sub_571b30(edi, 0x18)
    int32_t esi_3 = (*(eax_3 + 0x98) & 0x7f000400) | (*(eax_3 + 0x9c) & 0x940)
    
    if (esi_3 == 0 && ((*(sub_571b30(edi, esi_3 + 0x17) + 0x98) & 4) | esi_3) != 0)
        result.b = 1
        return result

result.b = 0
return result
