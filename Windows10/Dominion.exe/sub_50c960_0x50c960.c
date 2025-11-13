// 函数: sub_50c960
// 地址: 0x50c960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
uint32_t esi = zx.d(arg2.w)

if (esi u>= 0x320)
    sub_591930()

int32_t esi_1 = esi * 0x64
*(esi_1 + arg3 + 0x1a4c) = arg4
*(esi_1 + arg3 + 0x1a48) = sub_571b30(arg4, *(arg3 + 0xd48))
void* result = *(arg3 + 0x1504)

if (result != 3 && result != 5 && result != 4 && result != 6)
    return sub_61b1b0(result, 0x2d, result == 2, 0xffffffff, arg2, arg4, nullptr, nullptr, nullptr, 
        0, 0, 0, 0, 0)

return result
