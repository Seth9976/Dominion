// 函数: _Z21RendererRestoreMainRTv
// 地址: 0xfa3274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpRenderAppData
int32_t x9 = *(x8 + 0x170)
*(x8 + 0x398) = 0

if (x9 == 2)
    int64_t x19_1 = *(x8 + 0x180)
    int64_t x20 = *(x8 + 0x188)
    char x22 = (zx.d(*(x8 + 0x190)) == 0 ? 1 : 0).b
    DrawModeSet(0)
    int64_t* x0_2 = *gGraphicsInterface
    (*(*x0_2 + 0x118))(x0_2, x19_1, x20)
    *(*gpRenderAppData + 0x165) = 1
    return Draw3DSetRTInversion((*gGlobalVRAppType != 5 ? 1 : 0).b | x22
        | (*gGraphicsDriverType != 1 ? 1 : 0).b) __tailcall

if (x9 != 1)
    pthread_kill(pthread_self(), 6)
    return RendererPushMonitorRT(XNoReturn()) __tailcall

int32_t x19 = *(x8 + 0x174)
DrawModeSet(0)
int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x110))(x0, zx.q(x19))
*(*gpRenderAppData + 0x165) = 0
return Draw3DSetRTInversion(false) __tailcall
