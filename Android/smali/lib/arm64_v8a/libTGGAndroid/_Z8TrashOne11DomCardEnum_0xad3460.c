// 函数: _Z8TrashOne11DomCardEnum
// 地址: 0xad3460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 0, zx.q(arg1))
int32_t var_28

if (var_28 == 0)
    return 0

void* x0 = DomGetContext()
int32_t var_ca8
TrashCard(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(var_ca8), 0x3ea, 0x12, 0)
return zx.q(var_ca8)
