// 函数: sub_67b310
// 地址: 0x67b310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

while (*(arg1 + 0x18b8) == 0)
    arg1 = *(arg1 + 0x1718)
    
    if (arg1 == 0)
        break
    
    int32_t eax_1 = *(arg1 + 0x14e8)
    
    if (eax_1 == 1 || eax_1 == 2 || eax_1 == 3)
        return arg1

return 0
