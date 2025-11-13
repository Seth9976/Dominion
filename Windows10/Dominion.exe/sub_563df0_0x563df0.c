// 函数: sub_563df0
// 地址: 0x563df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t result = 0
int32_t i_1 = 0
void* edx = *(eax + 4)
void* eax_2 = *(eax + 0xc) * 0x5a30 + edx

if (*(eax_2 + 0x17504) s> 0)
    void* edi_1 = eax_2 + 0x17578
    int32_t i
    
    do
        uint32_t esi_1 = zx.d(*edi_1)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t result_1 = result + 1
        
        if (sub_5754f0(edx, *(esi_1 * 0x64 + edx + 0x1a4c), edx, 4, 0) == 0)
            result_1 = result
        
        i = i_1 + 1
        edi_1 += 4
        i_1 = i
        result = result_1
    while (i s< *(eax_2 + 0x17504))

return result
