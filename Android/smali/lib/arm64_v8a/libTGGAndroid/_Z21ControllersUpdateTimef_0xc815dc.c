// 函数: _Z21ControllersUpdateTimef
// 地址: 0xc815dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gControllers + 0x53004) = *(gControllers + 0x53004) + arg1
*gControllers = 0
*(gControllers + 0x53000) = 1

if ((MainWindowHasFocus() & 1) == 0)
    *(gControllers + 0x53008) = 0
    *(gControllers + 0x53016) = 0
    *(gControllers + 0x53033) = 0
    *(gControllers + 0x5300c) = 0
else
    if ((AnyTouchDown() & 1) == 0 && (InputIsButtonDown(0) & 1) == 0)
        *(gControllers + 0x53008) = 0
    
    if ((InputIsButtonDown(1) & 1) == 0)
        *(gControllers + 0x53009) = 0

float v0 = *(gControllers + 0x53004) * float.s(0x447a0000)
float v1_1

if (v0 < 0f)
    v1_1 = fconvert.s(-0.5f)
else
    v1_1 = fconvert.s(0.5f)

return zx.q(vcvts_s32_f32(v0 + v1_1))
