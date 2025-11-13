// 函数: sub_557720
// 地址: 0x557720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_c = esi
int32_t ecx
int32_t var_14 = ecx
int32_t var_14_1 = 4
int32_t* result = sub_564ce0(esi)

if (result != 0)
    uint32_t esi_2 = zx.d(result.w)
    void* edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_1 = esi_2 * 0x64
    result = sub_5754f0(eax_1, *(eax_1 + edi_1 + 0x1a4c), edi_1, 2, 0)
    
    if (result.b != 0)
        return sub_562360(1, 0)

return result
