// 函数: _Z18AndroidActionInput10XInputTypeiP11AInputEvent
// 地址: 0x1066e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
int32_t var_58
InputDataClear(&var_58)
var_58 = arg1
float v0 = AMotionEvent_getX(arg3, 0)
float v0_1 = AMotionEvent_getY(arg3, 0)
float v1 = fconvert.s(0.5f)
float v2 = fconvert.s(-0.5f)
float v3

v3 = v0 < 0f ? v2 : v1

if (v0_1 < 0f)
    v1 = v2

int32_t v0_2
int32_t v1_1
v0_2, v1_1 =
    WindowToSurfaceCoords(zx.q(vcvts_s32_f32(v0 + v3)) | zx.q(vcvts_s32_f32(v0_1 + v1)) << 0x20)
int32_t var_48 = v0_2
int32_t var_44 = v1_1
AppInput(&var_58)
return XString::~XString()
