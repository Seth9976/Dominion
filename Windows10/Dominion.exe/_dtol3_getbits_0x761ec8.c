// 函数: _dtol3_getbits
// 地址: 0x761ec8
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ecx = arg2 u>> 0x14

if (ecx s>= 0x433)
    return arg1 << (ecx - 0x433).b

char ecx_2 = (neg.d(ecx - 0x433)).b
return arg1 u>> (0x1f & ecx_2) | ((arg2 | 0x100000) & 0x1fffff) << (0x20 - (0x1f & ecx_2))
