// 函数: _Z12ThisTurnOnce17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlagRK10AssocCards12AbilityIndexS1_9PlayerWho
// 地址: 0xadf298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = arg8
int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int64_t x19 = *(x0 + 0x40)
int64_t x28
int32_t fp

if (x8 == 3)
    x28 = AbilitySourceCardRef(*(x0 + 8), zx.q(x0[7]))
    fp = AbilitySource(*(x0 + 8), zx.q(x0[7]))
    
    if ((AbilityIsRegistered(zx.q(x0[7])) & 1) != 0)
        x19 = *(AbilityGetRegistered(*(x0 + 8), zx.q(x0[7])) + 0x38)
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        int32_t* x0_16
        void (* x1_7)()
        bool (* x2_3)(CardID)
        int64_t x3_2
        int64_t x4_2
        x0_16, x1_7, x2_3, x3_2, x4_2 = XNoReturn()
        return ThisTurnRepeated(x0_16, x1_7, x2_3, x3_2, x4_2) __tailcall
    
    x28 = *(x0 + 0x1c)
    fp = CardWhat(*(x0 + 8), zx.q(x28.d))

int64_t* x0_12 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_3 = x0[6]
*(x0_12 + 0x1c) = x28
int32_t x8_4

x8_4 = x27 == 0xffffffff ? x8_3 : x27

*(x0_12 + 0x24) = fp
*(x0_12 + 0x14) = x8_4
x0_12[3].d = 0xffffffff
*(x0_12 + 0x44) = *(x0 + 0x30)
int32_t x8_6 = x0[0xe]
*x0_12 = 0x200000004
*(x0_12 + 0x4c) = 2
x0_12[0xa].d = arg1
x0_12[0xb] = arg2
x0_12[0xc] = arg3
x0_12[0xd] = arg7
x0_12[0xe].d = arg4
*(x0_12 + 0x94) = arg6
x0_12[5].d = x8_6
x0_12[0x10].d = 0
*(x0_12 + 0x84) = 0
*(x0_12 + 0x8c) = 0
x0_12[7] = x19
return ToAssociatedCards(*(x0 + 8), &x0_12[0x10], x0_12 + 0x84, &x0_12[0x11], arg5) __tailcall
