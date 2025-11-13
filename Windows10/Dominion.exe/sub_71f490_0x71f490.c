// 函数: sub_71f490
// 地址: 0x71f490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg3 + 0x10) = data_cb3cdc.q
*(arg3 + 0x18) = data_cb3ce4
*(arg3 + 0x1c) = arg4
int32_t eax_2 = *(arg3 + 0x10)
*(arg3 + 0x24) = 0x80
*(arg3 + 0x20) = 1
*(arg3 + 0xb0) = arg3 + 0x28
void* eax_3 = eax_2(arg4, arg3 + 0x28, 0x80)
*(arg3 + 0xa8) = arg3 + 0x28

if (eax_3 != 0)
    void* result = eax_3 + 0x28 + arg3
    *(arg3 + 0xac) = result
    *(arg3 + 0xb4) = result
    return result

*(arg3 + 0x20) = eax_3
*(arg3 + 0xac) = arg3 + 0x29
*(arg3 + 0x28) = 0
*(arg3 + 0xb4) = arg3 + 0x29
return arg3 + 0x29
