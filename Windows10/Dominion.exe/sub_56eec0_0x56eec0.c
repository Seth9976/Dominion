// 函数: sub_56eec0
// 地址: 0x56eec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t result = 0
int32_t i_1 = 0
int32_t ecx = *(eax + 4)
void* eax_2 = *(eax + 0xc) * 0x5a30 + ecx

if (*(eax_2 + 0x1752c) s> 0)
    void* edi_1 = eax_2 + 0x18e78
    int32_t edx_1 = ecx
    int32_t i
    
    do
        uint32_t esi_1 = zx.d(*edi_1)
        
        if (esi_1 u>= 0x320)
            sub_591930()
            edx_1 = ecx
        
        int32_t result_1 = result + 1
        
        if (*(esi_1 * 0x64 + edx_1 + 0x1a4c) != arg1)
            result_1 = result
        
        edi_1 += 4
        result = result_1
        i = i_1 + 1
        i_1 = i
    while (i s< *(eax_2 + 0x1752c))

return result
