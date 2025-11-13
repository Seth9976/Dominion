// 函数: sub_770600
// 地址: 0x770600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x20) & 1

if (result == 0)
    return result

*(arg1 - 0x20) &= 0xfffffffe
return sub_63d770(*(arg1 - 0x1c)) __tailcall
