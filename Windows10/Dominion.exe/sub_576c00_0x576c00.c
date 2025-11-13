// 函数: sub_576c00
// 地址: 0x576c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__builtin_memset(arg1, 0, 0x14)
*arg1 = zx.d(arg2.b)
arg1[1] = arg2 u>> 0x10 & 1
arg1[2] = arg2 s>> 0x18

if ((arg2 & 0x80000) != 0)
    arg1[3] |= 0x80000

if ((arg2 & 0x20000) != 0)
    arg1[3] |= 0x20000

if ((arg2 & 0x100000) != 0)
    arg1[3] |= 0x100000

arg1[4].b = (arg2 u>> 0x12).b & 1
return arg1
