// 函数: sub_65bf00
// 地址: 0x65bf00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = *(arg1 + 0x1718)
*(arg1 + 0x136c) = 2

for (; i != 0; i = *(i + 0x1718))
    *(i + 0x136c) = 2

return i
