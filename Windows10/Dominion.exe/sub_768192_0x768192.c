// 函数: sub_768192
// 地址: 0x768192
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = *(arg1 - 0x7c) & 0x80

if (result == 0)
    return result

*(arg1 - 0x7c) &= 0xffffff7f
return sub_63d770(*(arg1 - 0x6c)) __tailcall
