// 函数: sub_76f178
// 地址: 0x76f178
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_4ab1f0(*(arg1 - 0x14)) __tailcall
