// 函数: _Z14DiscardExactlyRK7CardIDsi8DomWhere15DomChoiceUIType11RevealStyle7LogFlag15DomChoiceAIHint
// 地址: 0xad89f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x8

if (*(arg1 + 0xc80) == 0)
    return memcpy(entry_x8, arg1, 0xc84) __tailcall

GameAssert((arg2 s> 0 ? 1 : 0).b)
int32_t x8 = *(arg1 + 0xc80)
int64_t var_19b8 = 0
int32_t x24_1

x24_1 = x8 s< arg2 ? x8 : arg2

int32_t var_19a8

if (x8 == 0)
    memset(&var_19a8, 0, 0xc84)
else
    int32_t* x0_1
    int128_t v0_1
    x0_1, v0_1 = DomGetContext()
    int32_t var_98 = arg4
    int128_t var_94_1 = 0.o
    int64_t var_84_1 = 0
    int32_t var_7c_1 = x24_1
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x18)
    int64_t var_70_1 = *(x0_1 + 0x40)
    CardID var_d20
    memcpy(&var_d20, arg1, 0xc84)
    uint64_t x2 = zx.q(x0_1[6])
    int32_t x8_2 = x0_1[7]
    DomGame* x0_3 = *(x0_1 + 8)
    var_19a8 = *x0_1
    int32_t var_19a4_1 = x8_2
    int32_t var_19d0_1 = 0
    int32_t var_19d8_1 = 0
    int32_t var_19e0_1 = arg7
    int32_t* var_19e8_1 = &var_98
    int32_t var_19f0_1 = 0x17
    int32_t var_a0
    int32_t var_a0_1 =
        QueueChoiceCards(x0_3, &var_19a8, x2, 1, &var_d20, zx.q(var_a0), zx.q(x24_1), zx.q(x24_1))
    memcpy(&var_19a8, &var_d20, 0xc84)

DiscardCards(&var_19a8, zx.q(arg3), 0xb, zx.q(arg5), zx.q(arg6))
return memcpy(entry_x8, &var_19a8, 0xc84)
