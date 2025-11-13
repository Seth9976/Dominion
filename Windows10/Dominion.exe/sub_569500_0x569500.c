// 函数: sub_569500
// 地址: 0x569500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (*(arg1 + 0xc80) s<= 0)
    return 

do
    int32_t eax_1 = *(arg1 + (i << 2))
    void* eax_2 = sub_573400()
    int32_t eax_3 = *(eax_2 + 4)
    int32_t eax_4 = eax_1
    uint32_t ecx = zx.d(eax_4.w)
    
    if (ecx u>= 0x320)
        sub_591930()
        eax_4 = eax_1
    
    sub_582d10(eax_3, *(ecx * 0x64 + eax_3 + 0x1a70), *(eax_2 + 4), eax_4, arg2, 0xb, 0x3ea, 3, 
        *(eax_2 + 0x28), *(eax_2 + 0x2c), *(eax_2 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
    i += 1
while (i s< *(arg1 + 0xc80))
