// 函数: _Z22Draw3DDirectionalLightRK4Vec3RK9ColorRgbai
// 地址: 0xc95710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10 = gDraw3DData + muls.dp.d(arg3, 0xc)
int128_t v0
v0.d = *(x10 + 0x530)
int64_t x9 = sx.q(arg3)

if (v0.d f!= *arg1)
label_c9576c:
    int64_t x12_1 = *arg1
    *(x10 + 0x538) = *(arg1 + 8)
    *(x10 + 0x530) = x12_1
    *(gDraw3DData + (x9 << 4) + 0x4f0) = *arg2
    return 

v0.d = *(gDraw3DData + x9 * 0xc + 0x534)

if (v0.d f!= *(arg1 + 4))
    goto label_c9576c

v0.d = *(gDraw3DData + x9 * 0xc + 0x538)

if (not(v0.d f== *(arg1 + 8)))
    goto label_c9576c

void* x11_4 = gDraw3DData + (x9 << 4)
v0.d = *(x11_4 + 0x4f0)

if (v0.d f!= *arg2)
    goto label_c9576c

v0.d = *(x11_4 + 0x4f4)

if (v0.d f!= *(arg2 + 4))
    goto label_c9576c

void* x11_5 = gDraw3DData + (x9 << 4)
v0.d = *(x11_5 + 0x4f8)

if (v0.d f!= *(arg2 + 8))
    goto label_c9576c

v0.d = *(x11_5 + 0x4fc)

if (not(v0.d f== *(arg2 + 0xc)))
    goto label_c9576c
