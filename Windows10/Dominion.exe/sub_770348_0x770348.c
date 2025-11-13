// 函数: sub_770348
// 地址: 0x770348
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_63d770(*(arg1 - 0x14)) __tailcall
