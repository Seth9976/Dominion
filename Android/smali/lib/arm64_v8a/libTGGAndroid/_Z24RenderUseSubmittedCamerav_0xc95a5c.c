// 函数: _Z24RenderUseSubmittedCamerav
// 地址: 0xc95a5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*gpRenderAppData + 0x166) = 0
float var_70
int64_t var_60
int32_t var_30
int32_t var_24
int64_t x8_2
int128_t v0_3
int128_t v1_3

if ((VRIsDrawingEye() & 1) == 0)
    float v0 = *gDraw3DData
    int64_t v3 = *(gDraw3DData + 8)
    float v2 = fconvert.s(0.5f)
    float v1 = v0 / *(gDraw3DData + 4)
    float v4 = *V20
    float v5 = *(V20 + 4)
    v0 = (v0 + v0) * v2
    v1 = (v1 + v1) * v2
    var_70 = v4 - v1
    float var_6c_1 = v5 - v0
    float var_68_1 = v4 + v1
    float var_64_1 = v0 + v5
    var_60 = v3
    v0_3, v1_3 = Draw3DSetCameraFrustum(&var_70)
    x8_2 = 2
else
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = VRGetCurrentEyeViewRect()
    float v4_1 = *(gDraw3DData + 8)
    float v5_1 = *(gDraw3DData + 0xc)
    var_30 = v0_1
    int32_t var_2c_1 = v1_1
    int32_t var_28_1 = v2_1
    var_24 = v3_1
    FrustumSet(&var_30, v4_1, v5_1)
    v0_3, v1_3 = Draw3DSetCameraFrustum(&var_70)
    int32_t x8_1 = *(gVR + 0xf0)
    
    if (x8_1 == 0)
        x8_2 = 0
    else if (x8_1 == 0x3e8)
        x8_2 = 3
    else
        if (x8_1 != 1)
            pthread_kill(pthread_self(), 6)
            return Draw3DSetCamera(XNoReturn()) __tailcall
        
        x8_2 = 1
void* x8_3 = gDraw3DData + x8_2 * 0x1c
var_24.o = *(x8_3 + 0x60)
var_30.o = *(x8_3 + 0x54)
int64_t result
int128_t v0_4
int128_t v1_4
int128_t v2_2
int128_t v3_2
result, v0_4, v1_4, v2_2, v3_2 = Mat4View(&var_30)
*(gDraw3DData + 0x2d4) = var_70.o
*(gDraw3DData + 0x2e4) = var_60.o
int128_t var_50
*(gDraw3DData + 0x2f4) = var_50
int128_t var_40
*(gDraw3DData + 0x304) = var_40
return result
