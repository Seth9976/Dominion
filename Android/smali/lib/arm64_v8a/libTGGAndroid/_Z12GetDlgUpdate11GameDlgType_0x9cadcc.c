// 函数: _Z12GetDlgUpdate11GameDlgType
// 地址: 0x9cadcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1.d - 1)

if (x8.d u< 0x26 && ((0x23bff5f9bf u>> x8).d & 1) != 0)
    return *((&data_11231f8)[sx.q(x8.d)] + 0x10)

return *(GameSpecific_GetDlgDef(arg1) + 0x10)
