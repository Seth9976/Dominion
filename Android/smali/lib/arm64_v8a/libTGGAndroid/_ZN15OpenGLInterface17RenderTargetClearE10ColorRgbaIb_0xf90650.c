// 函数: _ZN15OpenGLInterface17RenderTargetClearE10ColorRgbaIb
// 地址: 0xf90650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v11
int64_t var_40 = entry_v11.q
int128_t entry_v10
int64_t var_38 = entry_v10.q
int128_t entry_v9
int64_t var_30 = entry_v9.q
int128_t entry_v8
int64_t var_28 = entry_v8.q
int32_t entry_x2
int32_t x8_6
int32_t x20

if ((entry_x2 & 1) != 0 || zx.d(*(*gpRenderAppData + 0x9c)) == 0)
    x20 = 0
    x8_6 = 1
else
    float v1 = float.s(0x437f0000)
    int32_t* x8_5 = *gOpenGLInterface + 0x4234
    float v4 = *x8_5
    entry_v11.d = float.s(zx.d(arg2)) / v1
    entry_v9.d = float.s(zx.d((arg2.d u>> 8).b)) / v1
    entry_v8.d = float.s(zx.d((arg2.d u>> 0x10).b)) / v1
    entry_v10.d = float.s(zx.d((arg2 u>> 0x18).b)) / v1
    
    if (v4 f!= entry_v11.d || x8_5[1] f!= entry_v9.d || x8_5[2] f!= entry_v8.d
            || x8_5[3] f!= entry_v10.d)
        glClearColor(entry_v11, entry_v9, entry_v8, entry_v10, v4)
        x8_6 = 0
        int32_t* x9_3 = *gOpenGLInterface + 0x4234
        *x9_3 = entry_v11.d
        x9_3[1] = entry_v9.d
        x9_3[2] = entry_v8.d
        x9_3[3] = entry_v10.d
    else
        x8_6 = 0
    
    x20 = 0x4000

if (zx.d(*(*gAppInterface + 0x34)) != 0 || zx.d(*(arg1 + 0x4275)) != 0)
    x20 |= 0x100
    int32_t* x8_8 = *gOpenGLInterface + 0x4054
    
    if (*x8_8 != 1)
        *x8_8 = 1
        glDepthMask(1)
else if ((x8_6 & 1) != 0)
    entry_v9.q = var_30
    entry_v8.q = var_28
    entry_v11.q = var_40
    entry_v10.q = var_38
    return 

entry_v9.q = var_30
entry_v8.q = var_28
entry_v11.q = var_40
entry_v10.q = var_38
return glClear(zx.q(x20)) __tailcall
