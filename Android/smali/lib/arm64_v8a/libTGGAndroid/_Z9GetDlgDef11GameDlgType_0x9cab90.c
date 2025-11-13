// 函数: _Z9GetDlgDef11GameDlgType
// 地址: 0x9cab90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(arg1.d - 1)

if (x8_1.d u<= 0x25 && ((0x23bff5f9bf u>> x8_1).d & 1) != 0)
    return (&data_11231f8)[sx.q(x8_1.d)]

return GameSpecific_GetDlgDef(arg1) __tailcall
