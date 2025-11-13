// 函数: _Z16NextTimeThisTurn17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlagRK10AssocCards12AbilityIndexS1_9PlayerWho
// 地址: 0xadf15c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = arg8
int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int32_t x0_2
int64_t x28

if (x8 == 3)
    x28 = AbilitySourceCardRef(*(x0 + 8), zx.q(x0[7]))
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
        return ThisTurnOnce(x0_11, x1_6, x2_3, x3_2, x4_2, x5_1, x6_1, x7_1) __tailcall
    
    x28 = *(x0 + 0x1c)
    x0_2 = CardWhat(*(x0 + 8), zx.q(x28.d))

int64_t* x0_7 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_2 = x0[6]
*(x0_7 + 0x1c) = x28
int32_t x8_3

x8_3 = x27 == 0xffffffff ? x8_2 : x27

*(x0_7 + 0x24) = x0_2
*(x0_7 + 0x14) = x8_3
x0_7[3].d = 0xffffffff
*(x0_7 + 0x44) = *(x0 + 0x30)
int32_t x8_5 = x0[0xe]
*x0_7 = 0x200000005
x0_7[5].d = x8_5
int32_t x8_6 = x0[0x14]
*(x0_7 + 0x84) = 0
x0_7[0xb] = arg2
*(x0_7 + 0x4c) = 2
x0_7[0xa].d = arg1
x0_7[0xc] = arg3
x0_7[0xd] = arg7
x0_7[0xe].d = arg4
*(x0_7 + 0x94) = arg6
x0_7[2].d = x8_6
x0_7[0x10].d = 0
*(x0_7 + 0x8c) = 0
return ToAssociatedCards(*(x0 + 8), &x0_7[0x10], x0_7 + 0x84, &x0_7[0x11], arg5) __tailcall
