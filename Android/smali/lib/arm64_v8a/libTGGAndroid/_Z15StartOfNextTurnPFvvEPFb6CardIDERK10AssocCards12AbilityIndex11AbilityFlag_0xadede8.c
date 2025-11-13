// 函数: _Z15StartOfNextTurnPFvvEPFb6CardIDERK10AssocCards12AbilityIndex11AbilityFlag
// 地址: 0xadede8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg5
int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int64_t x27 = *(x0 + 0x40)
int32_t x25
int32_t x26
uint32_t x28

if (x8 == 3)
    int64_t x0_4 = AbilitySourceCardRef(*(x0 + 8), zx.q(x0[7]))
    x25 = x0_4.d
    x28 = (x0_4 u>> 0x20).d
    x26 = AbilitySource(*(x0 + 8), zx.q(x0[7]))
    
    if ((AbilityIsRegistered(zx.q(x0[7])) & 1) != 0)
        x27 = *(AbilityGetRegistered(*(x0 + 8), zx.q(x0[7])) + 0x38)
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        void (* x0_16)()
        bool (* x1_7)(CardID)
        AssocCards* x2_3
        int64_t x3_2
        x0_16, x1_7, x2_3, x3_2 = XNoReturn()
        return EndOfBuy(x0_16, x1_7, x2_3, x3_2) __tailcall
    
    x25 = x0[7]
    x28 = x0[8]
    x26 = CardWhat(*(x0 + 8), zx.q(x25))

int32_t* x0_12 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_3 = x0[6]
x0_12[7] = x25
x0_12[8] = x28
x0_12[9] = x26
x0_12[5] = x8_3
x0_12[6] = 0xffffffff
*(x0_12 + 0x44) = *(x0 + 0x30)
int32_t x8_5 = x0[0xe]
*x0_12 = 3
x0_12[0xa] = x8_5

if ((x22 & 0x40000) != 0)
    x0_12[1] = 6

*(x0_12 + 0x58) = arg1
*(x0_12 + 0x60) = arg2
x0_12[0x1c] = x22
*(x0_12 + 0x4c) = 0x100000002
int32_t x8_7 = *(*(x0 + 8) + 0x19ec)
x0_12[0x20] = 0
x0_12[0x25] = arg4
x0_12[0x1d] = x8_7
x0_12[0x21] = 0
x0_12[0x23] = 0
*(x0_12 + 0x38) = x27
return ToAssociatedCards(*(x0 + 8), &x0_12[0x20], &x0_12[0x21], &x0_12[0x22], arg3) __tailcall
