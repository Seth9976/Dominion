// 函数: sub_56b780
// 地址: 0x56b780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx = *eax

if (ecx == 4)
    return *(eax + 0x10)

if (ecx == 3)
    int32_t ecx_1 = *(eax + 0x10)
    int32_t edx_2 = ecx_1 & 0x30
    
    if (edx_2 == 0x20)
        return ecx_1 u>> 0x12
    
    if (edx_2 == 0)
        return *(sub_576940(eax, edx_2, *(eax + 4), ecx_1) + 0x24)

uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

return *(esi_1 * 0x64 + edi + 0x1a4c)
