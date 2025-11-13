// 函数: sub_535070
// 地址: 0x535070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
uint32_t result

if (*(*(sub_573400() + 4) + 0x19ec) != 5 && arg1 == sub_56b800())
    int32_t ebx_1 = *(sub_573400() + 4)
    uint32_t eax_2 = zx.d(arg1.w)
    int32_t edi_1 = eax_2 * 0x64
    int32_t ebx_2
    
    if (eax_2 u< 0x320)
        ebx_2 = *(edi_1 + ebx_1 + 0x1a50)
        result = *(sub_573400() + 4)
    else
        sub_591930()
        ebx_2 = *(edi_1 + ebx_1 + 0x1a50)
        uint32_t result_1 = *(sub_573400() + 4)
        sub_591930()
        result = result_1
    
    if (ebx_2 == *(edi_1 + result + 0x1a58))
        return sub_567520() == 0

result.b = 0
return result
