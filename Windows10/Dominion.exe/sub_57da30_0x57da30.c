// 函数: sub_57da30
// 地址: 0x57da30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg2, *(arg1 + 0xd48))
int32_t edi = *(eax + 0x9c)
int32_t edx_1 = *(eax + 0x98)

if ((edi & 0x80) != 0)
    return 0x1128

if ((edx_1 & 0x10000) != 0)
    return 0xc0a

if ((edx_1 & 0x2000) != 0)
    return 0x91c

if ((edx_1 & 0x8000) != 0)
    return 0x923

if ((edi & 1) != 0)
    return 0x1019

if ((edi & 2) != 0)
    return 0x101e

if ((edi & 4) != 0)
    return 0x1023

if ((edi & 8) != 0)
    return 0x1028

if ((edi & 0x10) != 0)
    return 0x102d

if ((edi & 0x20) != 0)
    return 0x1032

if ((edi & 0x200) != 0)
    return 0x718

if ((edx_1 & 0x800) != 0)
    return 0x70d

if ((edx_1 & 0x2000000) != 0)
    return 0xd3d

if ((edx_1 & &data_1000000) != 0)
    return 0xd30

if (arg2 s<= 0xc11)
    if (arg2 == 0xc11)
        return 0xc10
    
    if (arg2 - 0xc05 u<= 7)
        switch (arg2)
            case 0xc05
                return 0xc04
            case 0xc07
                return 0xc06
            case 0xc09
                return 0xc08
            case 0xc0c
                return 0xc0b
else if (arg2 == 0x1306)
    return 0x1305

int32_t i = 0
void* eax_44 = arg1 + 0x1284

do
    int32_t edx_4 = *(eax_44 - 4)
    
    if (edx_4 == 0)
        break
    
    if (edx_4 == 0xdc6 && arg2 == *(eax_44 + 0xc))
        return *eax_44
    
    i += 1
    eax_44 += 0x14
while (i s< 0x20)

return arg2
