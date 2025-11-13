// 函数: _Z11Ruins_Setup8DomWhere
// 地址: 0xa643a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_cb0[0x320]

for (int64_t i = 0; i != 0x32; i += 1)
    var_cb0[i] = *(&data_7e27c0 + (zx.q((i.d & 0xff) u% 5) << 2))

int32_t x21 = NumPlayers() * 0xa - 0xa
int64_t x0_3
int64_t x1
int128_t v0
x0_3, x1, v0 = RandomSplit(GameRNG())
void* x8_1 = *(x0 + 8)
*(x8_1 + 0x10) = x0_3
*(x8_1 + 0x18) = x1
int128_t var_cc0 = *(*(x0 + 8) + 0x10)
ShuffleIntsN(&var_cc0, &var_cb0, 0x32, x21)
return AddPileCards(zx.q(arg1), &var_cb0, x21)
