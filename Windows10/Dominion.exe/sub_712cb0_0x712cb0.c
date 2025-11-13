// 函数: sub_712cb0
// 地址: 0x712cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

for (void* i = *(arg2 + 4); i != 0; i = *(i + 4))
    void* esi_1 = *(arg1 + 0x24)
    sub_710f50(esi_1)
    *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 4
    *(esi_1 + 8) += 1
    sub_710f50(esi_1)
    *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = i
    *(esi_1 + 8) += 1

*(arg2 + 4) = 0
