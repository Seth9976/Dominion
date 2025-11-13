// 函数: sub_51f440
// 地址: 0x51f440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi_1 = zx.d((*arg1).w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

void* result =
    sub_571b30(sub_57da30(edi, *(esi_1 * 0x64 + edi + 0x1a4c)), *(*(sub_573400() + 4) + 0xd48))

if ((*(result + 0x98) & 0x8000) == 0 && (*(result + 0x9c) & 0x20000) == 0)
    result.b = 1
    return result

result.b = 0
return result
