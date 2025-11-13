// 函数: sub_592e40
// 地址: 0x592e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, 0x18)
int32_t edx = *(eax + 0x98)
int32_t edi = *(eax + 0x9c)

if ((edx & 8) == 8 && (edi & 0x20000) == 0x20000)
    return 0

if ((edx & 2) == 2 && (edi & 0x20000) == 0x20000)
    return 8

if ((edx & 0x200000) != 0)
    return 9

if ((edx & 0x4000) != 0)
    return 0xa

if ((edx & 8) != 0)
    return 1

if ((edx & 0x10) != 0)
    return 2

if ((edx & 0x8000) != 0)
    return 7

if (arg1 == 0xc34 || arg1 == 0xc45 || arg1 == 0xc46)
    return 4

if (((edx & 0x7f000400) | (edi & 0x940)) != 0)
    return 3

int32_t eax_29 = *(eax + 0x90) & 0x80000
int32_t eax_30 = neg.d(eax_29)
return neg.d(sbb.d(eax_30, eax_30, eax_29 != 0)) + 5
