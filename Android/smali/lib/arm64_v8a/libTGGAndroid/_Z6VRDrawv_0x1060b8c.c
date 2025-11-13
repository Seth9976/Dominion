// 函数: _Z6VRDrawv
// 地址: 0x1060b8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gGraphicsInterface
(*(*x0 + 0x150))(x0, 0)
int32_t x0_1 = GameIsDebugDrawFlagSet(0x4000)
int64_t* x8_2 = *gVR

if (((*(*x8_2 + 0x38))(x8_2) & 1) != 0)
    *(gVR + 0x18c) = 1
    VRBindEyeTextures()
    (*(**gGraphicsInterface + 0x130))()
    VRSetRenderTargetForEye(0, zx.q(x0_1) & 1)
    VRDrawEye()
    
    if ((x0_1 & 1) == 0)
        VRSetRenderTargetForEye(1, 0)
        VRDrawEye()
    
    int64_t* x0_5 = *gGraphicsInterface
    *(gVR + 0x18c) = 0
    (*(*x0_5 + 0x138))()

int64_t* x0_6 = *gGraphicsInterface
(*(*x0_6 + 0x158))(x0_6, 0)
int64_t* x0_7 = *gGraphicsInterface
(*(*x0_7 + 0x150))(x0_7, 1)
int32_t x0_8

if (*(*gAppInterface + 0x30) != 0 && zx.d(*gUsingMultisampleExt) == 0)
    x0_8 = GameIsDebugDrawFlagSet(0x2000)

int64_t* x0_9
int64_t (* x1_2)()
int64_t x2
int64_t x3
int64_t x8_20

if (*(*gAppInterface + 0x30) == 0 ||
        (zx.d(*gUsingMultisampleExt) == 0 && ((x0_8 & 1) != 0 || zx.d(*gUsingMultisampleExt) == 0)))
    x0_9 = *gVR
    void* x8_18 = gVR + (sx.q(*(gVR + 0xa8)) << 3)
    x2 = *(x8_18 + 0x38)
    
    if ((x0_1 & 1) == 0)
        x3 = *(x8_18 + 0x50)
        x8_20 = *(*x0_9 + 0x40)
        x1_2 = gVR + 0xf4
    else
    label_1060cd0:
        x1_2 = gVR + 0xf4
        x3 = x2
        x8_20 = *(*x0_9 + 0x40)
else
    x0_9 = *gVR
    void* x8_16 = gVR + (sx.q(*(gVR + 0xa8)) << 3)
    x2 = *(x8_16 + 8)
    
    if ((x0_1 & 1) != 0)
        goto label_1060cd0
    
    x3 = *(x8_16 + 0x20)
    x8_20 = *(*x0_9 + 0x40)
    x1_2 = gVR + 0xf4

x8_20(x0_9, x1_2, x2, x3)
int64_t* x0_10 = *gGraphicsInterface
(*(*x0_10 + 0x158))(x0_10, 1)
int32_t x8_23 = *(gVR + 0xa8)
int32_t x8_24

if (x8_23 == 2)
    x8_24 = 0
else
    x8_24 = x8_23 + 1

*(gVR + 0xa8) = x8_24
return DrawModeSet(0) __tailcall
