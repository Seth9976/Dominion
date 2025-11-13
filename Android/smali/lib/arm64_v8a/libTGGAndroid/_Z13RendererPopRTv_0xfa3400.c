// 函数: _Z13RendererPopRTv
// 地址: 0xfa3400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
int64_t x9_1 = sx.q(*(x8 + 0x398)) - 1
*(x8 + 0x398) = x9_1.d

if (x9_1.d == 0)
    if (*(gDraw3DData + &data_7a4604) != 5)
        return RendererRestoreMainRT() __tailcall
    
    return DrawModeSet(0) __tailcall

int64_t x10 = x8 + (x9_1 << 5)
int32_t x11 = *(x10 + 0x198)

if (x11 == 1)
    int32_t x19_1 = *(x10 + 0x19c)
    DrawModeSet(0)
    int64_t* x0_4 = *gGraphicsInterface
    (*(*x0_4 + 0x110))(x0_4, zx.q(x19_1))
    *(*gpRenderAppData + 0x165) = 0
    return Draw3DSetRTInversion(false) __tailcall

if (x11 != 2)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return RendererPreDraw() __tailcall

int64_t x8_1 = x8 + (x9_1 << 5)
int64_t x19 = *(x8_1 + 0x1a0)
int64_t x20 = *(x8_1 + 0x1a8)
char x22 = (zx.d(*(x8_1 + 0x1b0)) == 0 ? 1 : 0).b
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x118))(x0, x19, x20)
*(*gpRenderAppData + 0x165) = 1
return Draw3DSetRTInversion((*gGlobalVRAppType != 5 ? 1 : 0).b | x22
    | (*gGraphicsDriverType != 1 ? 1 : 0).b) __tailcall
