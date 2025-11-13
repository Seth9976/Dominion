// 函数: sub_53c570
// 地址: 0x53c570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_56b800()

if (sub_567520() != 0)
    return 0

uint32_t result

if (sub_56b800() == arg1)
    uint32_t esi_1 = zx.d(arg1.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    if (*(esi_1 * 0x64 + edi_1 + 0x1a50) == 0x3ec)
        result.b = 1
        return result

result.b = 0
return result
