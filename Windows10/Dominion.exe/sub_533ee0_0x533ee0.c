// 函数: sub_533ee0
// 地址: 0x533ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_562880()

if (result != 0)
    void* eax = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    int32_t ebx_1 = *(eax + 0xc)
    void* edi_1 = *(eax + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_1 = esi_1 * 0x64
    int32_t var_8
    sub_576e90(eax_1, edi_1, &var_8, ebx_1, *(eax_1 + edi_1 + 0x1a4c), 0)
    uint32_t var_1c[0x5]
    result = sub_576c00(&var_1c, var_8)
    int32_t i_1 = (*result).d
    
    if (i_1 s> 0)
        int32_t i
        
        do
            result = sub_563590(0x105)
            
            if (result != 0)
                void* eax_2 = sub_573400()
                result = sub_583720(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), result, 0x476, nullptr, 
                    0x476, 0, 0, 4)
            
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
