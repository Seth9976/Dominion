// 函数: _Z23UI2GetScrollDeltaAmountR3UI2
// 地址: 0x1041594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x167c)

if (x8 == 3)
    int64_t x0_4
    int128_t v1_1
    x0_4, v1_1 = TextGetLineHeight(arg1)
    return x0_4

if (x8 != 2)
    pthread_kill(pthread_self(), 6)
    return UI2TableScrollUp(XNoReturn()) __tailcall

RectF var_30
RectF var_20
UI2TableTransform(arg1, 0, &var_20, &var_30, false)
int64_t x0_2
int128_t v0
int128_t v1
x0_2, v0, v1 = UI2TableTransform(arg1, 1, &var_20, &var_30, false)
int64_t var_5c
v0.q = var_5c
int64_t var_3c
v1.q = var_3c
double v0_1
v0_1.d = vsub_f32(v0, v1):4.d
return x0_2
