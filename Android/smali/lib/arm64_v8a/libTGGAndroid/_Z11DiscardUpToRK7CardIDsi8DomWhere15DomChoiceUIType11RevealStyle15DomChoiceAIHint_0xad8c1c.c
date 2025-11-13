// 函数: _Z11DiscardUpToRK7CardIDsi8DomWhere15DomChoiceUIType11RevealStyle15DomChoiceAIHint
// 地址: 0xad8c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0xc80)
int32_t x22

x22 = x9 s< arg2 ? x9 : arg2

int64_t entry_x8

if (x22 == 0)
    return memset(entry_x8, 0, 0xc84) __tailcall

int64_t var_19b8 = 0
int32_t var_19a8
int32_t x22_1

if (x9 == 0)
    memset(&var_19a8, 0, 0xc84)
    x22_1 = 0
else
    int32_t* x0
    int128_t v0_1
    x0, v0_1 = DomGetContext()
    int32_t var_98 = arg4
    int128_t var_94_1 = 0.o
    int64_t var_84_1 = 0
    int32_t var_7c_1 = x22
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x18)
    int64_t var_70_1 = *(x0 + 0x40)
    CardID var_d20
    memcpy(&var_d20, arg1, 0xc84)
    uint64_t x2 = zx.q(x0[6])
    int32_t x8_1 = x0[7]
    DomGame* x0_2 = *(x0 + 8)
    var_19a8 = *x0
    int32_t var_19a4_1 = x8_1
    int32_t var_19d0_1 = 0
    int32_t var_19d8_1 = 0
    int32_t var_19e0_1 = arg6
    int32_t* var_19e8_1 = &var_98
    int32_t var_19f0_1 = 0x17
    int32_t var_a0
    int32_t var_a0_1 =
        QueueChoiceCards(x0_2, &var_19a8, x2, 1, &var_d20, zx.q(var_a0), zx.q(x22), 0)
    memcpy(&var_19a8, &var_d20, 0xc84)
    int32_t var_d28
    x22_1 = var_d28

void* x0_8 = DomGetContext()
int32_t var_19e0_2 = 0
int64_t var_19e8_2 = 0
int32_t var_19f0_2 = 0
DiscardCards(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), &var_19a8, zx.q(x22_1), zx.q(arg3), 0xb, 
    zx.q(arg5), 0)
return memcpy(entry_x8, &var_19a8, 0xc84)
