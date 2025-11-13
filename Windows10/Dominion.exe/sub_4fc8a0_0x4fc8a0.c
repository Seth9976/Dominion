// 函数: sub_4fc8a0
// 地址: 0x4fc8a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
int32_t eax_1 = sub_571ee0(eax, *(eax + 0xc), esi, 0xb01)

if (eax_1 != 0xffffffff)
    int32_t result = eax_1 << 5
    
    if (*(result + esi + 0x152dc) != 0)
        return result

return sub_56ce60(0xb01) __tailcall
