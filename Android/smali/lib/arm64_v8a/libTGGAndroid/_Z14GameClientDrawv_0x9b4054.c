// 函数: _Z14GameClientDrawv
// 地址: 0x9b4054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Draw3DSetRenderTargetClearColor(zx.q(*gRgbaIBlack))
GameSpecific_Lighting()
UIProjectScreenTransform()
void var_30
int128_t v0
float128 v1
float128 v3
v0, v1, v3 = UIProjectInto3DTransformVR(&var_30)

if (zx.d(*weird) == 0)
    GameDlgManagerDraw()
    GameSpecific_Draw()
else
    if ((zx.d(data_11cd578) & 1) == 0)
        int32_t x0_3
        x0_3, v0, v1, v3 = __cxa_guard_acquire(&data_11cd578)
        
        if (x0_3 != 0)
            v0 = data_71ab10
            data_11cd590 = v0
            v0, v1, v3 = __cxa_guard_release(&data_11cd578, v0)
    
    if ((zx.d(data_11cd580) & 1) == 0)
        int32_t x0_4
        x0_4, v0, v1, v3 = __cxa_guard_acquire(&data_11cd580)
        
        if (x0_4 != 0)
            data_11cd568.q = 0x3fc00000
            v0, v1, v3 = __cxa_guard_release(&data_11cd580)
    
    v3.d = data_11cd568
    v0.d = *gSecondsPerUpdate
    v1.d = float.s(0x43fa0000)
    v1.d = v0.d f* v1.d
    v0.d = v0.d f* v1.d
    v0.d = data_11cd56c f+ v0.d
    data_11cd56c = v0.d
    float128 v2_2
    v2_2:4.d = v0.d
    v2_2:8.d = v3.d
    v2_2:0xc.d = v0.d
    data_11cd590 = vaddq_f32(data_11cd590, v2_2)
    DrawRectSolid(&data_11cd590, gRgbaIWhite)
    DrawRectFrame(&data_11cd590, gRgbaIBlack, fconvert.s(1f))

UIProjectScreenRestore()
return GameSpecific_Draw3D()
