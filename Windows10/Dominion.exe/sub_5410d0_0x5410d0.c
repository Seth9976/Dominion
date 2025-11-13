// 函数: sub_5410d0
// 地址: 0x5410d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d(arg1.w)
int32_t ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_2 = *(edi * 0x64 + ebx + 0x1a50)

if (eax_2 != 0x3ee && eax_2 != 0x3ec)
    eax_2.b = 0
    return eax_2

uint32_t eax_3
eax_3.b = arg1 == sub_56b800()
return eax_3
