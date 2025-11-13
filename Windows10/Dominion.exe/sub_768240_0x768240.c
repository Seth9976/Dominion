// 函数: sub_768240
// 地址: 0x768240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x7c) & 1

if (result == 0)
    return result

*(arg1 - 0x7c) &= 0xfffffffe
return sub_63d770(*(arg1 - 0x6c)) __tailcall
