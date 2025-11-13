// 函数: sub_5418c0
// 地址: 0x5418c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1)
int32_t ebx = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t edi = esi * 0x64
int32_t eax_1 = *(edi + ebx + 0x1a50)
int32_t eax_2 = *(edi + ebx + 0x1a54)
int32_t ebx_1 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t result

if (eax_1 == *(edi + ebx_1 + 0x1a58) && eax_2 == *(edi + ebx_1 + 0x1a5c))
    result.b = 1
    return result

result.b = 0
return result
