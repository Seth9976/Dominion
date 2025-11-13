// 函数: _Z10MayDiscard6CardID8DomWhere
// 地址: 0xad8e48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1

if ((CheckStopMoving(*(DomGetContext() + 8), zx.q(x20), zx.q(x19)) & 1) != 0)
    return 0

int32_t var_1980
memset(&var_1980 | 4, 0, 0xc7c)
GameAssert(true)
int32_t var_d00_1 = 1
var_1980 = x20
int64_t var_1990_1 = 0
int32_t* x0_5
int128_t v0_1
x0_5, v0_1 = DomGetContext()
int32_t var_68 = 0x10
int128_t var_64_1 = 0.o
int64_t var_54
__builtin_memset(&var_54, 0, 0x24)
int64_t var_44 = *(x0_5 + 0x40)
int32_t var_cf0
memcpy(&var_cf0, &var_1980, 0xc84)
DomGame* x0_7 = *(x0_5 + 8)
int32_t var_cf8 = *x0_5
int32_t var_cf4_1 = x0_5[7]
int32_t var_19a0_1 = 0
int32_t var_19a8_1 = 0
int32_t* var_19b8_1 = &var_68
int32_t var_19b0_1 = 5
int32_t var_19c0_1 = 0x17
int32_t var_70
int32_t x0_8 = QueueChoiceCards(x0_7, &var_cf8, zx.q(x0_5[6]), 1, &var_cf0, zx.q(var_70), 1, 0)
int32_t x21_1 = var_cf0

if (x0_8 != 0 && x21_1 != 0)
    var_cf0 = x21_1
    void* x0_9 = DomGetContext()
    int32_t var_19b0_2 = 0
    int64_t var_19b8_2 = 0
    int32_t var_19c0_2 = 0
    DiscardCards(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), &var_cf0, 1, zx.q(x19), 0xb, 7, 0)

return zx.q(x0_8 != 0 ? 1 : 0) & zx.q(x21_1 != 0 ? 1 : 0)
