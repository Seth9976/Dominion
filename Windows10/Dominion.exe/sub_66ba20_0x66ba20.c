// 函数: sub_66ba20
// 地址: 0x66ba20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = *(arg1 + 0x1718)
*(arg1 + 0x1364) = 0
*(arg1 + 0x1368) = 0
*(arg1 + 0x1680) = 0x3f800000

for (; i != 0; i = *(i + 0x1718))
    *(i + 0x1364) = 0
    *(i + 0x1368) = 0
    *(i + 0x1680) = 0x3f800000

return i
