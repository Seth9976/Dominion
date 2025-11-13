// 函数: sub_509630
// 地址: 0x509630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t eax = sub_509190(1)
int16_t eax_1 = sub_509190(2)
uint32_t esi_1 = zx.d(eax)
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t result

if (*(esi_1 * 0x64 + edi + 0x1a4c) == 0x20f)
    uint32_t esi_2 = zx.d(eax_1)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) == 0x20f)
        result.b = 1
        return result

result.b = 0
return result
