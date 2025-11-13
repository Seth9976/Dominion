// 函数: sub_541d60
// 地址: 0x541d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax + 0x40)
void* eax_1 = sub_573400()
uint32_t edi = zx.d(esi_1.w)
int32_t ebx = *(eax_1 + 4)

if (edi u>= 0x320)
    eax_1 = sub_591930()

return sub_565e40(eax_1, *(edi * 0x64 + ebx + 0x1a58), esi_1, 0xd06)
