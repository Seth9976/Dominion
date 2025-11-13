// 函数: sub_50ecc0
// 地址: 0x50ecc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1

while (true)
    int32_t eax_2 = sub_50af00(sub_516f30(0x1770), &var_8)
    int32_t i = sub_50af60(eax_2, var_8, &data_cc8de0, eax_2)
    void* const ecx_1 = &data_790b58
    
    while (*ecx_1 != i)
        ecx_1 += 4
        
        if (ecx_1 s>= &data_790bbc)
            return i
    
    int32_t edx_3 = 0
    int32_t* eax_6 = data_cca780 + 0x590 + (data_cca784 << 0xb)
    
    while (eax_6[-1] != i || *eax_6 != 0)
        edx_3 += 1
        eax_6 = &eax_6[5]
        
        if (edx_3 s>= 0x20)
            return i
