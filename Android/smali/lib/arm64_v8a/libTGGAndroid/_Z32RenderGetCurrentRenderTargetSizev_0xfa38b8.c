// 函数: _Z32RenderGetCurrentRenderTargetSizev
// 地址: 0xfa38b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
int64_t x9 = sx.q(*(x8 + 0x398))
int128_t v0

if (x9.d == 0)
    int32_t x9_1 = *(x8 + 0x170)
    
    if (x9_1 != 2)
        if (x9_1 != 1 || *(x8 + 0x174) != 1)
            pthread_kill(pthread_self(), 6)
            return Rot2FromAngle(XNoReturn()) __tailcall
        
        v0.q = *(*gAppInterface + 0x28)
        vcvt_f32_s32(v0)
        return 
else
    x8 += x9 << 5

int64_t* x19 = *(x8 + 0x180)
int64_t* x8_3 = *x19

if (x8_3 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    int64_t x0
    x0, v0 = AssetCatalogLoadAsset(x19, false, true)
    x8_3 = *x19

int64_t* x8_6 = **x8_3
v0.q = *x8_6
float v1 = *(x8_6 + 0xc) f* x8_6[1].d
double v0_2
v0_2.d = vcvt_f32_u32(v0).d f* v1
v0_2:4.d = v0_2:4.d f* v1
