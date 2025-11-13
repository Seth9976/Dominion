// 函数: sub_5360a0
// 地址: 0x5360a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi_1 = zx.d((*arg1).w)
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t result = *(esi_1 * 0x64 + edi + 0x1a50)

if (result != 0x3e9 && result != 0x3ec)
    result.b = 0
    return result

result.b = 1
return result
