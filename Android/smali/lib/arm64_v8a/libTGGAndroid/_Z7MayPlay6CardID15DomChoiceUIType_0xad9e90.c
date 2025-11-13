// 函数: _Z7MayPlay6CardID15DomChoiceUIType
// 地址: 0xad9e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((LimitPlayableCards(arg1) & 1) != 0)
    return 0

int32_t* x0_2 = DomGetContext()
int32_t var_68 = arg2
int64_t var_64
__builtin_memset(&var_64, 0, 0x18)
int32_t var_4c_1 = x19
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t x8_1 = *(x0_2 + 0x40)
int32_t var_cf0 = x19
int64_t var_40_1 = x8_1
memset(&var_cf0 | 4, 0, 0xc7c)
int32_t var_70_1 = 1
uint64_t x2_1 = zx.q(x0_2[6])
int32_t x9_1 = x0_2[7]
DomGame* x0_4 = *(x0_2 + 8)
int32_t var_cf8 = *x0_2
int32_t var_cf4_1 = x9_1
int32_t var_d00_1 = 0
int32_t var_d08_1 = 0
int32_t* var_d18_1 = &var_68
int32_t var_d10_1 = 0xb
int32_t var_d20_1 = 1
int32_t x0_5 = QueueChoiceCards(x0_4, &var_cf8, x2_1, 1, &var_cf0, 1, 1, 0)

if (x0_5 != 0)
    int32_t x20_1 = var_cf0
    GameAssert((x0_5 == 1 ? 1 : 0).b)
    void* x0_7 = DomGetContext()
    DomGame* x21_2 = *(x0_7 + 8)
    int32_t x22_1 = *(x0_7 + 0x18)
    var_cf0.q = ToCardRef(x21_2, zx.q(x20_1))
    var_68.q = 0
    var_cf8.q = 0
    PlayCard(x21_2, zx.q(x22_1), &var_cf0, &var_68, &var_cf8, 0)

return zx.q(x0_5 != 0 ? 1 : 0)
