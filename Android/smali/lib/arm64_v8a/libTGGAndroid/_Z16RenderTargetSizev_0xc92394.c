// 函数: _Z16RenderTargetSizev
// 地址: 0xc92394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
int32_t x9 = *(x8 + 0x170)

if (x9 != 2)
    if (x9 != 1)
        pthread_kill(pthread_self(), 6)
        RectF* x0_8
        RectF* x1_3
        x0_8, x1_3 = XNoReturn()
        return RectToPercent(x0_8, x1_3) __tailcall
    
    return AppGetWindowSize() __tailcall

int64_t* x19 = *(x8 + 0x180)
int64_t* x8_2 = *x19

if (x8_2 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8_2 = *x19

float v2 = fconvert.s(0.5f)
int32_t* x8_5 = **x8_2
float v0 = x8_5[3] f* x8_5[2]
float v3 = v0 * float.s(*x8_5)
float v1 = fconvert.s(-0.5f)
v0 = v0 * float.s(x8_5[1])
float v4

v4 = v3 < 0f ? v1 : v2

if (not(v0 < 0f))
    v1 = v2

return zx.q(vcvts_s32_f32(v3 + v4)) | zx.q(vcvts_s32_f32(v0 + v1)) << 0x20
