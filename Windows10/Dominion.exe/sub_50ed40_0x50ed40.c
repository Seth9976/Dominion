// 函数: sub_50ed40
// 地址: 0x50ed40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

while (true)
    int32_t var_8
    int32_t eax_2 = sub_50af00(sub_516f30(0x1b58), &var_8)
    int32_t i = sub_50af60(eax_2, var_8, &data_cc8de0, eax_2)
    
    if (arg1 != 0 && sub_511d80(i, arg1) == 0)
        continue
    
    void* const eax_4 = &data_790b58
    
    while (*eax_4 != i)
        eax_4 += 4
        
        if (eax_4 s>= &data_790bbc)
            return i
    
    int32_t edx_4 = 0
    int32_t* eax_8 = data_cca780 + 0x590 + (data_cca784 << 0xb)
    
    while (eax_8[-1] != i || *eax_8 != arg1)
        edx_4 += 1
        eax_8 = &eax_8[5]
        
        if (edx_4 s>= 0x20)
            return i
