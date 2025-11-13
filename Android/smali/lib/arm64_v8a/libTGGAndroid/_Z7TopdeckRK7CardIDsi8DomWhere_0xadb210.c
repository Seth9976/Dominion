// 函数: _Z7TopdeckRK7CardIDsi8DomWhere
// 地址: 0xadb210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0xc80)
int64_t entry_x8

if (x9 == 0)
    return memcpy(entry_x8, arg1, 0xc84) __tailcall

int32_t x22

x22 = x9 s< arg2 ? x9 : arg2

int32_t* x0 = DomGetContext()
int32_t var_78 = 0x17
int64_t var_74
__builtin_memset(&var_74, 0, 0x18)
int32_t var_5c = x22
int64_t var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t var_50 = *(x0 + 0x40)
CardID var_d00
memcpy(&var_d00, arg1, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8_1 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_1988 = *x0
int32_t var_1984 = x8_1
int32_t var_1990 = 0
int32_t var_1998 = 0
int32_t* var_19a8 = &var_78
int32_t var_19a0 = 0xe
int32_t var_19b0 = 0xe
int32_t var_80
int32_t var_80_1 =
    QueueChoiceCards(x0_2, &var_1988, x2, 1, &var_d00, zx.q(var_80), zx.q(x22), zx.q(x22))
memcpy(&var_1988, &var_d00, 0xc84)
int32_t i_2
uint64_t i_1 = zx.q(i_2)

if (i_1.d s>= 1)
    int32_t* x22_1 = &var_1988
    uint64_t i
    
    do
        uint64_t x0_5 = zx.q(*x22_1)
        x22_1 = &x22_1[1]
        MoveToTopDeck(x0_5, zx.q(arg3), 0xb)
        i = i_1
        i_1 -= 1
    while (i != 1)

return memcpy(entry_x8, &var_1988, 0xc84)
