// 函数: _Z11PressActionRK10ControllerR9PressInfo9ClickType
// 地址: 0x9abdf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x10)

if (x8 == 1)
    if (*(arg2 + 0x20) == 0)
        return GameSpecific_HitAction(arg1, *(arg2 + 0x14), arg3) __tailcall
    
    return UIHitAction(arg1, arg2 + 0x18, arg3) __tailcall

if (x8 == 2)
    return 

if (x8 != 3)
    pthread_kill(pthread_self(), 6)
    return PressEndForZoom(XNoReturn()) __tailcall

Cardset* x0 = *(arg2 + 0x38)
uint64_t x1 = zx.q(*(arg2 + 0x40))

if (arg3.d != 1)
    return GameSpecific_CardsetHitAction(x0, x1) __tailcall

return CardsetZoom(x0, x1) __tailcall
