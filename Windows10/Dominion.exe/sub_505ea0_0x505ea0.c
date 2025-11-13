// 函数: sub_505ea0
// 地址: 0x505ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (sub_563590(0x100) == 0)
    return sub_566890(1) __tailcall

void* eax_1 = sub_564390()
void* result = sub_566890(1)

if (result != 0)
    int32_t ebx_1
    
    if (eax_1 != 0)
        uint32_t edi_1 = zx.d(result.w)
        ebx_1 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        result = edi_1 * 0x64
    
    if (eax_1 == 0 || *(result + ebx_1 + 0x1a4c) != eax_1)
        result = sub_563590(0x100)
        
        if (result != 0)
            void* eax_3 = sub_573400()
            return sub_583720(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), result, 0x476, nullptr, 0x476, 
                0, 0, 4)

return result
