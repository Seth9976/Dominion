// 函数: sub_56a060
// 地址: 0x56a060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

memset(arg4, 0, 0xc80)
int32_t eax = *(arg3 + 0xc80)

if (eax s> 0)
    __builtin_memcpy(arg4, arg3, eax << 2)

*(arg4 + 0xc80) = eax
return arg4
