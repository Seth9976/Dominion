// 函数: _Z8PassLeftv
// 地址: 0xadc4f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_cf0
__builtin_memset(&var_cf0, 0, 0x20)
var_cf0.d = 0x30
int128_t var_ce0
__builtin_memset(&var_ce0:0xc, 0, 0x1c)
CardsWhereType(0x3ea, 0, 0)
void var_cb8
int32_t x0_1 = ChooseCard(&var_cb8, 0xb, &var_cf0, 0x10, 0)
void* x0_2 = DomGetContext()
DomGame* x0_3 = *(x0_2 + 8)
int32_t x20 = (*(x0_2 + 0x18) + 1) s% *(x0_3 + 0xd40)

while ((HasOngoing(x0_3, zx.q(x20), 4, 0, 0) & 1) == 0)
    x0_3 = *(x0_2 + 8)
    x20 = (x20 + 1) s% *(x0_3 + 0xd40)

void* x0_5 = DomGetContext()
DomGame* x21_1 = *(x0_5 + 8)
int32_t x22 = *(x0_5 + 0x18)
int32_t var_cf8 = 0
int64_t var_d00 = 0
int32_t var_d10 = 0
int32_t var_d18 = 0
int32_t var_d08 = 1
int64_t var_d20 = 0
MoveCardTo(x21_1, zx.q(x20), zx.q(x0_1), 0x3ea, 0x10, 0x3ed, 0xa, 0)
void* result = CardGet(x21_1, zx.q(x0_1))
*(result + 0x30) = x22
return result
