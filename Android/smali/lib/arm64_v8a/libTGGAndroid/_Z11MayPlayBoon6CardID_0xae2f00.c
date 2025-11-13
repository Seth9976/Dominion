// 函数: _Z11MayPlayBoon6CardID
// 地址: 0xae2f00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x0 = DomGetContext()
int32_t var_58 = 0xa9
int64_t var_54
__builtin_memset(&var_54, 0, 0x34)
int64_t x8 = *(x0 + 0x40)
int32_t var_ce0 = x19
int32_t var_60 = 1
int64_t var_34 = x8
DomGame* x8_1 = *(x0 + 8)
uint64_t x2 = zx.q(x0[6])
int32_t x10 = x0[7]
int32_t var_ce8 = *x0
int32_t var_ce4 = x10
int32_t var_cf0 = 0
int32_t var_cf8 = 0
int32_t* var_d08 = &var_58
int32_t var_d00 = 0xb
int32_t var_d10 = 1
int64_t result = QueueChoiceCards(x8_1, &var_ce8, x2, 1, &var_ce0, 1, 1, 0)

if (result.d == 0)
    return result

void* x0_2 = DomGetContext()

if ((HasOngoing(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), 0x2a, 0, 0) & 1) != 0)
    return PlayBoonMayDelay(zx.q(x19), 1)

void* x0_6 = DomGetContext()
return PlayFate(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), zx.q(x19), 1)
