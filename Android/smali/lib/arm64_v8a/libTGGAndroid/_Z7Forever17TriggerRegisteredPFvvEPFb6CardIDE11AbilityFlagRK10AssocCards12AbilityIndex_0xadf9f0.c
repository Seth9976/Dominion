// 函数: _Z7Forever17TriggerRegisteredPFvvEPFb6CardIDE11AbilityFlagRK10AssocCards12AbilityIndex
// 地址: 0xadf9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0
int32_t* x25
void* x27_1

if (x8 == 4)
    int32_t* x0_6 = AbilityAllocRegistered(*(x0 + 8))
    int32_t x8_3 = x0[6]
    *(x0_6 + 0x18) = 0xffffffff
    x0_6[8] = 0
    x0_6[5] = x8_3
    x25 = x0_6
    x27_1 = &x0[2]
    x0_6[9] = x0[7]
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        return CountCardsGainedThisTurnPlayer(XNoReturn()) __tailcall
    
    x27_1 = &x0[2]
    int32_t* x0_2 = AbilityAllocRegistered(*x27_1)
    x25 = x0_2
    x0_2[5] = *(x27_1 + 0x10)
    x0_2[6] = 0xffffffff
    *(x0_2 + 0x1c) = *(x27_1 + 0x14)
    uint64_t x1 = zx.q(*(x27_1 + 0x14))
    int32_t x0_4
    
    if (x1.d == 0)
        x0_4 = 0
    else
        x0_4 = CardWhat(*x27_1, x1)
    
    x25[9] = x0_4
    *(x25 + 0x38) = *(x0 + 0x40)
    *(x25 + 0x44) = *(x0 + 0x30)
    x25[0xa] = x0[0xe]

*x25 = 0
*(x25 + 0x58) = arg2
*(x25 + 0x60) = arg3
x25[0x13] = 2
x25[0x14] = arg1
x25[0x1c] = arg4
x25[0x1d] = 0xffffffff
x25[0x21] = 0
x25[0x20] = 0
x25[0x23] = 0
x25[0x25] = arg6
return ToAssociatedCards(*x27_1, &x25[0x20], &x25[0x21], &x25[0x22], arg5) __tailcall
