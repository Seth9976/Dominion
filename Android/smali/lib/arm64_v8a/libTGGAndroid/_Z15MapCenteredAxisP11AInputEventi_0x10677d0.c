// 函数: _Z15MapCenteredAxisP11AInputEventi
// 地址: 0x10677d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float v0
int128_t v1
result, v0, v1 = AMotionEvent_getAxisValue(arg1, arg2, 0)
v1.d = float.s(0x3e87c400)
int32_t x8 = -0x41783c00

if (v0 f> v1.d)
    goto label_1067818

v1.d = float.s(0xbe87c400)
bool cond:0_1 = v0 f>= v1.d
v1.d = 0f

if (not(cond:0_1))
    x8 = 0x3e87c400
label_1067818:
    v1.d = float.s(x8)
    v0 = v0 f+ v1.d
    v1.d = float.s(0x3f3c1e00)
    v1.d = v0 f/ v1.d

return result
