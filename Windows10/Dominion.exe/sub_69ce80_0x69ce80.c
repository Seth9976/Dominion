// 函数: sub_69ce80
// 地址: 0x69ce80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg3

if (*(arg2 + 8) == 0)
    return 

int32_t eax = 0

while (true)
    int32_t eax_1 = eax + 1
    int32_t* edx_3 = *(arg2 + 4) + eax * 0x3c
    
    if (eax_1 s>= *(arg2 + 8))
        sub_69ccd0(eax_1, edx_3, arg3, arg4)
        break
    
    sub_69ccd0(eax_1, edx_3, arg3, arg4)
    eax = eax_1
    
    if (eax_1 == 0xffffffff)
        return 
