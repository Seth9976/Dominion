// 函数: sub_56b3a0
// 地址: 0x56b3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* esi = *(eax + 4)
uint32_t edi = *(eax + 0xc)

if (*(esi + 0x19a4) s>= 0x100)
    eax = sub_591930()

int32_t eax_1 = sub_571ee0(eax, edi, esi, 0xb01)

if (eax_1 == 0xffffffff)
    eax_1 = sub_571da0(eax_1, edi, esi, 0xb01, 0x476, nullptr, 1)

int32_t result
result.b = *((eax_1 << 5) + esi + 0x152d8) == 0
return result
