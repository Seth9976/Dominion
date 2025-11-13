// 函数: _Z11OtherPlayer9PlayerWhoNSt6__ndk18functionIFvvEEE
// 地址: 0xadc634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t* x0 = DomGetContext()
int32_t x8 = *x0

if (x8 == 3)
    DomPushAbilityContext(*(x0 + 8), zx.q(x20), zx.q(x0[7]))
else
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        return OtherPlayers(XNoReturn()) __tailcall
    
    DomPushContext(*(x0 + 8), zx.q(x20), &x0[7])

int64_t* x0_3 = *(arg2 + 0x20)

if (x0_3 == 0)
    sub_a58ab4()
    noreturn

(*(*x0_3 + 0x30))()
return DomPopContext() __tailcall
