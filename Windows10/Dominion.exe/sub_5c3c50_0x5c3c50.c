// 函数: sub_5c3c50
// 地址: 0x5c3c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *arg1

if (eax != 0)
    free(*(eax - 4))

void* result = arg1[1]

if (result != 0)
    result = free(*(result - 4))

return result
