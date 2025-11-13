// 函数: sub_583f20
// 地址: 0x583f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = *(arg3 + 0x19a4)
int32_t result = 0

if (i_1 s> 0)
    void* ecx = arg3 + 0x152d4
    int32_t i
    
    do
        if (*(ecx - 4) == 0x474 && *ecx == arg2 && *(ecx - 0xc) == 0x1001 && *(ecx + 0xc) == arg4
                && *(ecx + 0x10) == arg5)
            result += *(ecx + 8)
        
        ecx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
