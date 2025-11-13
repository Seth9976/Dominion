// 函数: _Z24ControllerCursorPositionRK10ControllerR4Vec2
// 地址: 0xc81434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return HasLeftHand() __tailcall

int64_t var_18
int32_t x0_1 = GetCursorPosition(&var_18)
int64_t x8_1

if ((x0_1 & 1) == 0)
    x8_1 = *(arg1 + 0xa5ec)
else
    x8_1 = var_18
    *(arg1 + 0xa5ec) = x8_1

*arg2 = x8_1
return zx.q(x0_1) & 1
