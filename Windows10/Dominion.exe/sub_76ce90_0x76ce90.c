// 函数: sub_76ce90
// 地址: 0x76ce90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_6532f0(*(arg1 - 0x14)) __tailcall
