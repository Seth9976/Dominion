// 函数: _Z12DiscardOneOfRK7CardIDs8DomWhere15DomChoiceUIType7LogFlag15DomChoiceAIHint
// 地址: 0xaddf88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t var_cc8
memcpy(&var_cc8, arg1, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_cd0 = *x0
int32_t var_ccc = x8
int128_t var_cf0
var_cf0:8.q = *(x0 + 0x40)
int128_t var_d10
__builtin_memset(&var_d10, 0, 0x38)
var_d10.d = arg3
int32_t var_d20 = 0
int32_t var_d28 = 0
int32_t var_d30 = arg5
int128_t* var_d38 = &var_d10
int32_t var_d40 = 0x17
int32_t var_48
uint64_t result = QueueChoiceCards(x0_2, &var_cd0, x2, 1, &var_cc8, zx.q(var_48), 1, 1)

if (result.d == 0)
    return result

int32_t x21_1 = var_cc8
var_d10.d = x21_1

if (x21_1 == 0)
    return 0

void* x0_3 = DomGetContext()
int32_t var_d30_1 = 0
int64_t var_d38_1 = 0
int32_t var_d40_1 = 0

if (DiscardCards(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), &var_d10, 1, zx.q(arg2), 0xb, 7, zx.q(arg4))
        == 0)
    return 0

return zx.q(x21_1)
