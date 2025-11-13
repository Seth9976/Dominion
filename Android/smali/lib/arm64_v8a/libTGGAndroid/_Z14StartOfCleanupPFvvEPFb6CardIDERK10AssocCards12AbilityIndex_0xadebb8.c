// 函数: _Z14StartOfCleanupPFvvEPFb6CardIDERK10AssocCards12AbilityIndex
// 地址: 0xadebb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int32_t x24
int32_t x25
int32_t x26

if (x8 == 3)
    x24 = AbilitySourceCard(*(x0 + 8), zx.q(x0[7]))
    x25 = AbilitySource(*(x0 + 8), zx.q(x0[7]))
    x26 = 0
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        int64_t x0_12
        void (* x1_6)()
        bool (* x2_3)(CardID)
        AssocCards* x3_2
        int64_t x4_2
        int64_t x5_1
        x0_12, x1_6, x2_3, x3_2, x4_2, x5_1 = XNoReturn()
        return NextTime(x0_12, x1_6, x2_3, x3_2, x4_2, x5_1) __tailcall
    
    x24 = x0[7]
    x26 = x0[8]
    x25 = CardWhat(*(x0 + 8), zx.q(x24))

int32_t* x0_8 = AbilityAllocRegistered(*(x0 + 8))
int32_t x8_2 = x0[6]
x0_8[7] = x24
x0_8[8] = x26
x0_8[9] = x25
x0_8[5] = x8_2
x0_8[6] = 0xffffffff
*(x0_8 + 0x44) = *(x0 + 0x30)
int32_t x8_4 = x0[0xe]
*x0_8 = 3
*(x0_8 + 0x4c) = 2
*(x0_8 + 0x58) = arg1
*(x0_8 + 0x60) = arg2
x0_8[0x1c] = 0xa
x0_8[0xa] = x8_4
x0_8[0x20] = 0
x0_8[0x21] = 0
x0_8[0x23] = 0
x0_8[0x25] = arg4
return ToAssociatedCards(*(x0 + 8), &x0_8[0x20], &x0_8[0x21], &x0_8[0x22], arg3) __tailcall
