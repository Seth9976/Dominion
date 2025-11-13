// 函数: sub_5600a0
// 地址: 0x5600a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(*(sub_573400() + 4) + 0xd48) s< 0x12)
    bool cond:0_1 = *(*(sub_573400() + 4) + 0x19c4) == *(sub_573400() + 0xc)
    char eax_5
    
    if (not(cond:0_1))
        void* eax_4 = sub_573400()
        eax_5 = sub_593b10(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x416)
    
    if (cond:0_1 || eax_5 != 0)
        return 1

return zx.d(sub_5702b0())
