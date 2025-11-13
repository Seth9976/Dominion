// 函数: _Z14Province_Setup8DomWhere
// 地址: 0xa259e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x8 = NumPlayers() - 2

if (x8 u> 4)
    return AddPileCards(zx.q(x19), 0x103, 0xc) __tailcall

return AddPileCards(zx.q(x19), 0x103, *(&data_7af58c + (sx.q(x8) << 2))) __tailcall
