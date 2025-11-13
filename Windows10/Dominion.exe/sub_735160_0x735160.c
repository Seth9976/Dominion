// 函数: sub_735160
// 地址: 0x735160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t eax = *(arg1 + 6)
int16_t ecx = *(arg2 + 6)

if (eax u<= ecx)
    if (eax u< ecx)
        return 1
    
    uint32_t eax_3 = zx.d(*(arg1 + 4))
    int16_t ecx_1 = *(arg2 + 4)
    bool c_1 = eax_3.w u< ecx_1
    
    if (eax_3.w == ecx_1 || c_1)
        return neg.d(sbb.d(eax_3, eax_3, c_1))

return 0xffffffff
