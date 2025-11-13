// 函数: sub_65d8b0
// 地址: 0x65d8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = arg2
arg2.b = *arg1
int32_t ebx
ebx.b = *edi

if (zx.d(ebx.b) + zx.d(arg2.b) u<= 0xff)
    ebx.b += arg2.b
else
    ebx.b = 0xff

arg2.b = arg1[1]
arg2:1.b = edi[1]

if (zx.d(arg2:1.b) + zx.d(arg2.b) u<= 0xff)
    arg2:1.b += arg2.b
else
    arg2:1.b = 0xff

ebx:1.b = edi[2]
arg2.b = arg1[2]

if (zx.d(ebx:1.b) + zx.d(arg2.b) u<= 0xff)
    ebx:1.b += arg2.b
else
    ebx:1.b = 0xff

uint32_t eax_2
eax_2.b = arg1[3]
arg2.b = edi[3]

if (zx.d(arg2.b) + zx.d(eax_2.b) u<= 0xff)
    arg2.b += eax_2.b
else
    arg2.b = 0xff

return ((zx.d(arg2.b) << 8 | zx.d(ebx:1.b)) << 8 | zx.d(arg2:1.b)) << 8 | zx.d(ebx.b)
