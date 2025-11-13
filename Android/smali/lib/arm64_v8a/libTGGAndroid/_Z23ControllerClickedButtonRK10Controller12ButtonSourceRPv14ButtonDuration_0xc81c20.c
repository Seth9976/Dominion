// 函数: _Z23ControllerClickedButtonRK10Controller12ButtonSourceRPv14ButtonDuration
// 地址: 0xc81c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Controller, 0x10) x8

if (arg2 s> 0x23)
    if (*(arg1 + 8) == 0)
        x8 = arg1 + 0x72d0
    else
        x8 = arg1 + 0x8c50
    
    arg2 = arg2 - 0x24
else
    x8 = arg1 + 0x10

*arg3 = x8 + muls.dp.d(arg2, 0x330) + 0x114

if (arg4 u> 4)
    pthread_kill(pthread_self(), 6)
    Controller* x0_6
    int64_t x1
    void** x2
    x0_6, x1, x2 = XNoReturn()
    return ControllerClickedAction(x0_6, x1, x2) __tailcall

int64_t x9_5 = sx.q(arg2)

switch (arg4)
    case 0
        return zx.q(zx.d(*(x8 + x9_5 * 0x330 + 0x329)) != 0 ? 1 : 0)
    case 1
        return zx.q(zx.d(*(x8 + x9_5 * 0x330 + 0x32a)) != 0 ? 1 : 0)
    case 2
        void* x8_6 = x8 + x9_5 * 0x330
        return zx.q((zx.d(*(x8_6 + 0x32b)) | zx.d(*(x8_6 + 0x32c))) != 0 ? 1 : 0)
    case 3
        return zx.q(zx.d(*(x8 + x9_5 * 0x330 + 0x32b)) != 0 ? 1 : 0)
    case 4
        return zx.q(zx.d(*(x8 + x9_5 * 0x330 + 0x32c)) != 0 ? 1 : 0)
