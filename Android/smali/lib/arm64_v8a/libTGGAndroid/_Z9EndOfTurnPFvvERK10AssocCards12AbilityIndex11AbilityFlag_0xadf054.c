// 函数: _Z9EndOfTurnPFvvERK10AssocCards12AbilityIndex11AbilityFlag
// 地址: 0xadf054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int32_t x0_2
int64_t x24

if (x8 == 3)
    x24 = AbilitySourceCardRef(*(x0 + 8), zx.q(x0[7]))
    x0_2 = AbilitySource(*(x0 + 8), zx.q(x0[7]))
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        int64_t x0_11
        void (* x1_6)()
        bool (* x2_3)(CardID)
        int64_t x3_2
        AssocCards* x4_2
        int64_t x5_1
        void (* x6_1)()
        int64_t x7_1
        x0_11, x1_6, x2_3, x3_2, x4_2, x5_1, x6_1, x7_1 = XNoReturn()
        return NextTimeThisTurn(x0_11, x1_6, x2_3, x3_2, x4_2, x5_1, x6_1, x7_1) __tailcall
    
    x24 = *(x0 + 0x1c)
    x0_2 = CardWhat(*(x0 + 8), zx.q(x24.d))

int32_t* x0_7 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_2 = x0[6]
*(x0_7 + 0x1c) = x24
x0_7[9] = x0_2
x0_7[5] = x8_2
x0_7[6] = 0xffffffff
*(x0_7 + 0x44) = *(x0 + 0x30)
int32_t x8_4 = x0[0xe]
*x0_7 = 3
*(x0_7 + 0x4c) = 0x200000002
*(x0_7 + 0x58) = arg1
*(x0_7 + 0x60) = 0
x0_7[0x1c] = arg4 | 8
x0_7[0xa] = x8_4
x0_7[0x20] = 0
x0_7[0x21] = 0
x0_7[0x23] = 0
x0_7[0x25] = arg3
return ToAssociatedCards(*(x0 + 8), &x0_7[0x20], &x0_7[0x21], &x0_7[0x22], arg2) __tailcall
