// 函数: sub_532380
// 地址: 0x532380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = *(sub_573400() + 0x5c)
uint32_t eax_2 = sub_56b800()
uint32_t edi = zx.d(eax_2.w)
int32_t eax_4 = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t ebx = edi * 0x64
int32_t ecx = *(ebx + eax_4 + 0x1a50)
int32_t eax_5 = *(ebx + eax_4 + 0x1a54)
void* result = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

if (ecx == *(ebx + result + 0x1a58) && eax_5 == *(ebx + result + 0x1a5c))
    return sub_566c60(result, eax_1, eax_2, 0, 0)

return result
