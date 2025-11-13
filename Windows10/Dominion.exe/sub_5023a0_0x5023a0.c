// 函数: sub_5023a0
// 地址: 0x5023a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = 0
int32_t i = 7
int32_t* result = *(sub_573400() + 4) + 0x1594

do
    if (*result != 0 && result[2] == 0)
        edx += 1
    
    i += 1
    result = &result[4]
while (i s< 0x21)

if (edx != 0)
    result = sub_563690(result, edx, 0x106, 0x476)

return result
