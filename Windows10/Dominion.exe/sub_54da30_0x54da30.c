// 函数: sub_54da30
// 地址: 0x54da30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t result

if (sub_594120(eax, arg1, *(eax + 4), 0x1149).b != 0)
    uint32_t esi_1 = zx.d(arg1)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t edi_1 = esi_1 * 0x64
    int32_t ebx_2
    
    if (*(edi_1 + ebx_1 + 0x1a50) != 0x3e9)
        ebx_2 = *(sub_573400() + 4)
        
        if (esi_1 u>= 0x320)
            sub_591930()
    
    if (*(edi_1 + ebx_1 + 0x1a50) == 0x3e9 || *(edi_1 + ebx_2 + 0x1a50) == 0x451)
        result.b = 1
        return result

result.b = 0
return result
