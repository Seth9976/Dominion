// 函数: sub_76d839
// 地址: 0x76d839
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x20) & 1

if (result == 0)
    return result

*(arg1 - 0x20) &= 0xfffffffe
return sub_63d770(*(arg1 - 0x24)) __tailcall
