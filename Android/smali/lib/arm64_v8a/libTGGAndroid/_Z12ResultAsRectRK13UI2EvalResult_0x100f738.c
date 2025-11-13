// 函数: _Z12ResultAsRectRK13UI2EvalResult
// 地址: 0x100f738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(UI2EvalResult, 0x18) x8_2
void* __offset(UI2EvalResult, 0x1c) x9
void* __offset(UI2EvalResult, 0x20) x10
void* __offset(UI2EvalResult, 0x24) x11

if (*arg1 != 7)
    x8_2 = RECT0
    x11 = RECT0 + 0xc
    x10 = RECT0 + 8
    x9 = RECT0 + 4
else
    if (*(arg1 + 4) != 0)
        pthread_kill(pthread_self(), 6)
        UI2StateDeclI* x0_1
        int32_t x1
        UI2State* x2
        int32_t x3
        x0_1, x1, x2, x3 = XNoReturn()
        return UI2VarBindingLookup(x0_1, x1, x2, x3) __tailcall
    
    x8_2 = arg1 + 0x18
    x9 = arg1 + 0x1c
    x10 = arg1 + 0x20
    x11 = arg1 + 0x24

int128_t v3
v3.d = *x11
int128_t v2
v2.d = *x10
int128_t v1
v1.d = *x9
int128_t v0
v0.d = *x8_2
