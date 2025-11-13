// 函数: _Z10TrashOneOfRK7CardIDs8DomWhere15DomChoiceUIType15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xadde98
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
int32_t var_d28 = arg5
int32_t var_d30 = arg4
int128_t* var_d38 = &var_d10
int32_t var_d40 = 9
int32_t var_48
uint64_t result = QueueChoiceCards(x0_2, &var_cd0, x2, 1, &var_cc8, zx.q(var_48), 1, 1)

if (result.d == 0)
    return result

int32_t x20_1 = var_cc8
void* x0_3 = DomGetContext()

if ((TrashCard(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), zx.q(x20_1), zx.q(arg2), 0x12, 0) & 1) != 0)
    return zx.q(x20_1)

return 0
