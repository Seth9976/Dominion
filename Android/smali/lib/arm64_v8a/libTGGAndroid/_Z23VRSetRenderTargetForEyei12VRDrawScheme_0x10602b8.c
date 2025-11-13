// 函数: _Z23VRSetRenderTargetForEyei12VRDrawScheme
// 地址: 0x10602b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2

if (arg2 == 1)
    x8_2 = 0x3e8
else
    x8_2 = *(gVR + (sx.q(arg1) << 2) + 0xc8)

*(gVR + 0xf0) = x8_2
void* x8_8
int64_t (* x9)()

if (x8_2 == 0x3e8)
label_1060300:
    int32_t x0
    
    if (*(*gAppInterface + 0x30) != 0 && zx.d(*gUsingMultisampleExt) == 0)
        x0 = GameIsDebugDrawFlagSet(0x2000)
    
    if (*(*gAppInterface + 0x30) != 0 && (zx.d(*gUsingMultisampleExt) != 0 || (x0 & 1) == 0))
        void* x9_1 = gVR + (sx.q(*(gVR + 0xa8)) << 3)
        x8_8 = x9_1 + 8
        x9 = x9_1 + 0x78
    else
        x9 = gVR + 0x68
        x8_8 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x38
else
    if (x8_2 != 1)
        if (x8_2 == 0)
            goto label_1060300
        
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return VRDrawVinette() __tailcall
    
    int32_t x0_1
    
    if (*(*gAppInterface + 0x30) != 0 && zx.d(*gUsingMultisampleExt) == 0)
        x0_1 = GameIsDebugDrawFlagSet(0x2000)
    
    if (*(*gAppInterface + 0x30) != 0 && (zx.d(*gUsingMultisampleExt) != 0 || (x0_1 & 1) == 0))
        void* x9_2 = gVR + (sx.q(*(gVR + 0xa8)) << 3)
        x8_8 = x9_2 + 0x20
        x9 = x9_2 + 0x90
    else
        x9 = gVR + 0x70
        x8_8 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x50

return RendererSetMainRTTexture(*x8_8, *x9, true) __tailcall
