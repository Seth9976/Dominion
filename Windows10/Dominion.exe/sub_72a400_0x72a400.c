// 函数: sub_72a400
// 地址: 0x72a400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(sub_7203e0(arg1))
*arg2 = ((esi u>> 0xa & 0x1f) * 0xff s/ 0x1f).b
arg2[1] = ((esi u>> 5 & 0x1f) * 0xff s/ 0x1f).b
char result = ((esi & 0x1f) * 0xff s/ 0x1f).b
arg2[2] = result
return result
