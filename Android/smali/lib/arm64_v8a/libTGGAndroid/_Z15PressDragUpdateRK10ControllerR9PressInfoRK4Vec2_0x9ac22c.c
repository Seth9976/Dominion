// 函数: _Z15PressDragUpdateRK10ControllerR9PressInfoRK4Vec2
// 地址: 0x9ac22c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg3
int128_t v1
v1.q = *(arg2 + 0x98)
int64_t var_18 = vsub_f32(v0, v1).q
int128_t v1_1
v1_1.q = *(arg2 + 0x90)
double var_28 = vsub_f32(v0, v1_1)
int32_t x8 = *arg2
void* __offset(PressInfo, 0x8) x1
int64_t x2
Vec2* x3
Vec2* x4

if (x8 == 3)
    x1 = arg2 + 8
    x3 = &var_18
    x4 = &var_28
    x2 = 4
else
    double var_38
    int64_t var_30
    
    if (x8 == 5)
        int64_t x8_2 = var_18
        x1 = arg2 + 8
        x3 = &var_30
        x4 = &var_38
        var_38 = var_28
        var_30 = x8_2
        var_30.d = 0
        var_38.d = 0
        x2 = 4
    else if (x8 != 4)
        x1 = arg2 + 8
        x3 = &var_18
        x4 = &var_28
        x2 = 1
    else
        int64_t x8_1 = var_18
        x1 = arg2 + 8
        x3 = &var_30
        x4 = &var_38
        var_38 = var_28
        var_30 = x8_1
        var_30:4.d = 0
        var_38:4.d = 0
        x2 = 3

int64_t result = GameSpecific_DragUpdateAction(arg1, x1, x2, x3, x4, arg3)
*(arg2 + 0x98) = *arg3
return result
