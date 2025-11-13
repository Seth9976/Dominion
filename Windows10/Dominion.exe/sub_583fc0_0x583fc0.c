// 函数: sub_583fc0
// 地址: 0x583fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = *(arg3 + 0x19a4)
int32_t edi = 6

if (arg2 != 0xffffffff)
    edi = 0x3f1

int32_t result = 0

if (i_1 s> 0)
    void* ecx = arg3 + 0x152cc
    int32_t i
    
    do
        if (*(ecx + 4) == edi && *ecx == arg2 && *(ecx - 4) == arg4)
            result += *(ecx + 0x10)
        
        ecx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
