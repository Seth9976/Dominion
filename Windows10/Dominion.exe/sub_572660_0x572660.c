// 函数: sub_572660
// 地址: 0x572660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t* eax = sub_5722c0(arg1, arg4, arg3, arg5)
uint32_t eax_2 = zx.d(arg2.w)

if (eax_2 u>= 0x320)
    sub_591930()

void* edx_2 = eax_2 * 0x64 + arg3

if (arg4 != 0x451 && (*(edx_2 + 0x1a50) != 0x451 || arg4 != 0x3e9))
    int32_t ecx = *(arg3 + 0x19ac)
    *(arg3 + 0x19ac) = ecx + 1
    *(edx_2 + 0x1a54) = ecx

*(edx_2 + 0x1a50) = arg4

if (arg5 != 0xffffffff)
    *(edx_2 + 0x1a74) = arg5

*(edx_2 + 0x1a70) = arg5
*(edx_2 + 0x1a78) = arg5
*(edx_2 + 0x1aa4) = *eax
*eax = arg2
return arg2
