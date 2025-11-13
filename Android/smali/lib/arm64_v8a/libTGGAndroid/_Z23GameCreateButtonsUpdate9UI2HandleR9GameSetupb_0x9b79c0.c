// 函数: _Z23GameCreateButtonsUpdate9UI2HandleR9GameSetupb
// 地址: 0x9b79c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0_1 = GameCreateButtonState(arg2)

if (x0_1 u> 8)
    pthread_kill(pthread_self(), 6)
    return GameCreateButtonState(XNoReturn()) __tailcall

int64_t* x20 = &data_11ce5b8

switch (x0_1)
    case 0
        x20 = &data_11ce588
        UI2SetState(zx.q(x19), &data_11ce5a0, 0xffffffff, 0)
        int64_t result = GameIsValidToCreate(arg2, arg3 & 1)
        
        if ((result.d & 1) != 0)
            return result
    case 2
        x20 = &data_11ce5e8
    case 3
        x20 = &data_11ce5d0
    case 4
        x20 = &data_11ce600
    case 5
        x20 = &data_11ce618
    case 6, 7
        x20 = &data_11ce648
    case 8
        x20 = &data_11ce630

return UI2SetState(zx.q(x19), x20, 0xffffffff, 0) __tailcall
