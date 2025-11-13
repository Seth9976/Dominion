// 函数: sub_56c810
// 地址: 0x56c810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t result = 0
int32_t i = 0
int32_t edx = *(eax + 0xc)
int32_t esi = *(eax + 4)

if (*(edx * 0x5a30 + esi + 0x17504) s> 0)
    do
        uint32_t esi_2 = zx.d((*(esi + ((edx * 0x168c + i) << 2) + 0x17578)).w)
        int32_t eax_4 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t result_1 = result + 1
        
        if (*(esi_2 * 0x64 + eax_4 + 0x1a4c) != 0x105)
            result_1 = result
        
        i += 1
        result = result_1
        edx = *(eax + 0xc)
        esi = *(eax + 4)
    while (i s< *(edx * 0x5a30 + esi + 0x17504))

return result
