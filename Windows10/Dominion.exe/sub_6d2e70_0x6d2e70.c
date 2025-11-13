// 函数: sub_6d2e70
// 地址: 0x6d2e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s> *(arg3 + 0x1c) || *(arg3 + 4) == 0)
    *(arg3 + 0x1c) = arg2

void* result_1 = arg3 + 4

if (arg4 s> *(arg3 + 0x24))
    *(arg3 + 0x24) = arg4
else if (*(arg3 + 4) == 0)
    result_1 = arg3 + 4
    *(arg3 + 0x24) = arg4

void* result_2 = result_1

if (arg2 s< *(arg3 + 0x18))
    *(arg3 + 0x18) = arg2
else if (*(arg3 + 4) == 0)
    result_2 = arg3 + 4
    *(arg3 + 0x18) = arg2

void* result = result_1

if (arg4 s>= *(arg3 + 0x20))
    result = result_2
    
    if (*result_1 != 0)
        *result_1 = 1
        return result

*(arg3 + 0x20) = arg4
*result = 1
return result
