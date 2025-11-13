// 函数: sub_561d80
// 地址: 0x561d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ebx
ebx.b = sub_576b30(eax, *(eax + 0xc), *(eax + 4), 0x13, arg1, 0, 0) s> 0

if (arg1 == 0)
    uint32_t eax_1
    eax_1.b = ebx.b
    return eax_1

uint32_t esi_1 = zx.d(arg1.w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_4 = sub_57da30(edi, *(esi_1 * 0x64 + edi + 0x1a4c))
void* eax_5 = sub_573400()
uint32_t eax_6
eax_6.b = sub_576b30(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 0x27, eax_4, 0, 0) s> 0
eax_6.b ^= ebx.b
return eax_6
