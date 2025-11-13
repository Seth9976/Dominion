// 函数: sub_53abb0
// 地址: 0x53abb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
void* var_1c = arg1
int32_t var_20 = 0
int32_t eax
uint32_t result = sub_568960(eax, 0, 0x3ea, 0)

if (result s> 0)
    int32_t esi_1 = 0
    void* eax_1 = sub_573400()
    void* edi_1 = eax_1
    
    if (*edi_1 == 2)
        uint32_t esi_3 = zx.d((*(edi_1 + 0x10)).w)
        int32_t ebx_1 = *(sub_573400() + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        eax_1 = esi_3 * 0x64
        esi_1 = *(eax_1 + ebx_1 + 0x1a4c)
    
    sub_5911e0(eax_1, *(edi_1 + 0xc), *(edi_1 + 4), 4, nullptr, 6, *(edi_1 + 0x28), 
        *(edi_1 + 0x2c), 0, 0xffffffff, 0, esi_1)
    result = *(arg1 + 4)
    *result += 1

return result
