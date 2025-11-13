// 函数: sub_67b350
// 地址: 0x67b350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
void* i = *(arg1 + 0x1718)
void* esi = arg1 + 0x1718

while (i != 0)
    int32_t eax = sub_66b2b0(i, arg2, *(i + 0x18c8), *(arg1 + 0x15e4))
    
    if (eax != 0)
        return sub_64e7a0(eax)
    
    arg1 = *esi
    i = *(arg1 + 0x1718)
    esi = arg1 + 0x1718

return 0
