// 函数: _Z20KingdomHasDruidBoonsR7DomGameRP11DomCardEnum
// 地址: 0xb1ca64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(DomBoardPile(arg1, 3) + 8)

if (x8 != 0)
    *arg2 = arg1 + 0xe70

return zx.q(x8 != 0 ? 1 : 0)
