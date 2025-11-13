// 函数: _Z18SpriteDrawVertsIntI12DefVertPosXYEvPT_P4Vec2PK11SpriteColorbP6XAssetS9_
// 地址: 0xfca5b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_70 = v10
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
XAsset* x23 = arg6
XAsset* x22 = arg5
uint64_t x25 = *gpRenderAppData
Vec2* x19 = arg2
float var_a0
float v0

if (zx.d(*(x25 + 0x167)) != 0)
    v8.d = *(x25 + 0x168)
    v0 = *(x25 + 0x16c)
    v10.d = fconvert.s(1f) / (v8.d f* v0)
    v9.d = fconvert.s(-1f) / v0
    float cosp_3
    float sinp_3
    sincosf(&sinp_3, &cosp_3, v10.d f* *arg1)
    float v1_1 = cosp_3 f* v8.d
    var_a0 = v8.d f* sinp_3
    float var_9c_1 = v1_1
    float var_98_1 = v9.d f* *(arg1 + 4)
    float cosp_2
    float sinp_2
    sincosf(&sinp_2, &cosp_2, v10.d f* *(arg1 + 8))
    float var_94_1 = v8.d f* sinp_2
    float var_90_1 = cosp_2 f* v8.d
    float var_8c_1 = v9.d f* *(arg1 + 0xc)
    float cosp_1
    float sinp_1
    sincosf(&sinp_1, &cosp_1, v10.d f* *(arg1 + 0x10))
    float var_88_1 = v8.d f* sinp_1
    float var_84_1 = cosp_1 f* v8.d
    float var_80_1 = v9.d f* *(arg1 + 0x14)
    float cosp
    float sinp
    sincosf(&sinp, &cosp, v10.d f* *(arg1 + 0x18))
    float var_7c_1 = v8.d f* sinp
    float var_78_1 = cosp f* v8.d
    float var_74_1 = v9.d f* *(arg1 + 0x1c)
    
    if (x23 == 0)
        x23 = *(x25 + 0x3b8)
        
        if (x23 == 0)
            if ((zx.d(*guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
                    & 1) == 0 && __cxa_guard_acquire(guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
                    != 0)
                *void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle =
                    AssetPtrFromPath("sys/sprite_3d.material", 5)
                __cxa_guard_release(guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
            
            x23 = *void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle
    
    return Draw3DQuadParams(&var_a0, x19, arg3, x22, x23)

int32_t x24_1 = arg4.d

if (zx.d(*(x25 + 0x164)) != 0)
    float v7 = *arg1
    float v16 = *(arg1 + 4)
    float v1 = *(x25 + 0x124)
    float v2 = *(x25 + 0x128)
    float v4 = *(x25 + 0x134)
    float v5 = *(x25 + 0x138)
    float v6 = *(x25 + 0x144)
    float v20 = *(x25 + 0x148)
    float v18 = 0f
    v0 = *(x25 + 0x130)
    float v3 = *(x25 + 0x140)
    float v22 = *(x25 + 0x150)
    float v17 = *(x25 + 0x12c) * v18
    float v19 = *(x25 + 0x13c) * v18
    v18 = *(x25 + 0x14c) * v18
    var_a0 = v0 + v7 * v1 + v16 * v2 + v17
    float var_9c_2 = v3 + v7 * v4 + v16 * v5 + v19
    float var_98_2 = v22 + v7 * v6 + v16 * v20 + v18
    v7 = *(arg1 + 8)
    v16 = *(arg1 + 0xc)
    float var_94_2 = v0 + v7 * v1 + v16 * v2 + v17
    float var_90_2 = v3 + v7 * v4 + v16 * v5 + v19
    float var_8c_2 = v22 + v7 * v6 + v16 * v20 + v18
    v7 = *(arg1 + 0x10)
    v16 = *(arg1 + 0x14)
    float var_88_2 = v0 + v7 * v1 + v16 * v2 + v17
    float var_84_2 = v3 + v7 * v4 + v16 * v5 + v19
    float var_80_2 = v22 + v7 * v6 + v16 * v20 + v18
    v7 = *(arg1 + 0x18)
    v16 = *(arg1 + 0x1c)
    float var_7c_2 = v0 + v7 * v1 + v16 * v2 + v17
    float var_78_2 = v3 + v7 * v4 + v16 * v5 + v19
    float var_74_2 = v22 + v7 * v6 + v16 * v20 + v18
    
    if (x23 == 0)
        x23 = *(x25 + 0x3b8)
        
        if (x23 == 0)
            if ((zx.d(*guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
                    & 1) == 0 && __cxa_guard_acquire(guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
                    != 0)
                *void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle =
                    AssetPtrFromPath("sys/sprite_3d.material", 5)
                __cxa_guard_release(guard variable for void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle)
            
            x23 = *void SpriteDrawVertsInt<DefVertPosXY>(DefVertPosXY*, Vec2*, SpriteColor const*, bool, XAsset*, XAsset*)::materialParticle
    
    return Draw3DQuadParams(&var_a0, x19, arg3, x24_1.b & 1, x22, x23)

uint32_t result = DrawModeSet(1)

if (x22 != 0)
    result = TextureUpdateUVForAtlas(x22, x19, &var_a0, 4, nullptr)
    
    if ((result & 1) != 0)
        int64_t* x8_4 = *x22
        
        if (x8_4 == 0)
            if (*(x22 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            result = AssetCatalogLoadAsset(x22, false, true)
            x8_4 = *x22
        
        x19 = &var_a0
        x22 = *(**x8_4 + 0x28)

uint64_t x25_1 = *gpSpriteAppData

if ((*(x25_1 + 0x18) | 0x400) == 0x400)
label_fca960:
    result = SpriteDrawBuffers()
    x25_1 = *gpSpriteAppData
    *(x25_1 + 0x60) = x22
    *(x25_1 + 0x68) = x23
else if (*(x25_1 + 0x60) != x22 || *(x25_1 + 0x68) != x23)
    uint64_t x8_17 = *gpRenderAppData
    *(x8_17 + 0x30) += 1
    
    if ((GameIsDebugDrawFlagSet(0x100) & 1) != 0)
        uint64_t x8_18 = *gpSpriteAppData
        
        if (*(x8_18 + 0x68) != x23)
            XString::XString()
            XString::XString()
            char var_68
            
            if (*(*gpSpriteAppData + 0x68) == 0)
                XString::operator=(&var_68)
            else
                XString::operator=(&var_68)
            char var_a8
            
            if (x23 == 0)
                XString::operator=(&var_a8)
            else
                XString::operator=(&var_a8)
            XString::operator char const*()
            XString::operator char const*()
            XTrace("Material change: %s to  %s")
            XString::~XString()
            XString::~XString()
        else if (x22 == 0 || *(x8_18 + 0x60) == 0)
            XTrace("Texture Swap with null")
        else
            XString::operator char const*()
            XString::operator char const*()
            XTrace("Texture Swap: %s %s")
    
    goto label_fca960

int64_t x10_1 = *(x25_1 + 0x40)
int64_t* x8_11
int64_t x12_1

if (x10_1 != 0)
    int64_t x8_10 = sx.q(*(x25_1 + 0x18))
    x12_1 = x8_10 << 2
    x8_11 = x10_1 + (x8_10 << 7)
    
    if ((x24_1 & 1) == 0)
        goto label_fcaa14
    
    goto label_fca988

int64_t* x0_10 = *gGraphicsInterface
int64_t x0_11 = (*(*x0_10 + 0xc8))(x0_10, zx.q(*(x25_1 + (sx.q(*(x25_1 + 0x10)) << 2))))
uint64_t x25_2 = *gpSpriteAppData
*(x25_2 + 0x40) = x0_11
result = memset(x0_11, 0, 0x20000)
x10_1 = *(x25_2 + 0x40)
int64_t x8_14 = sx.q(*(x25_2 + 0x18))
x12_1 = x8_14 << 2
x8_11 = x10_1 + (x8_14 << 7)
int32_t x9_9

if ((x24_1 & 1) != 0)
label_fca988:
    void* x13_1 = x10_1 + (x12_1 << 5)
    *x8_11 = *arg1
    *(x13_1 + 8) = *x19
    *(x13_1 + 0xc) = *(x19 + 4)
    int32_t x14_1 = *arg3
    int32_t x13_2
    
    if (*gGraphicsDriverType != 1)
        *(x13_1 + 0x18) = (x14_1 & 0xff) << 0x10 | (x14_1 & 0xff00ff00) | (x14_1 u>> 0x10 & 0xff)
        int32_t x13_4 = *(arg3 + 4)
        x13_2 = (x13_4 & 0xff) << 0x10 | (x13_4 & 0xff00ff00) | (x13_4 u>> 0x10 & 0xff)
    else
        *(x13_1 + 0x18) = x14_1
        x13_2 = *(arg3 + 4)
    
    *(x10_1 + (x12_1 << 5) + 0x1c) = x13_2
    x8_11[4] = *(arg1 + 8)
    x8_11[5].d = *(x19 + 8)
    *(x8_11 + 0x2c) = *(x19 + 0xc)
    int32_t x10_4 = *(arg3 + 8)
    int32_t x10_5
    
    if (*gGraphicsDriverType != 1)
        x8_11[7].d = (x10_4 & 0xff) << 0x10 | (x10_4 & 0xff00ff00) | (x10_4 u>> 0x10 & 0xff)
        int32_t x10_13 = *(arg3 + 0xc)
        x10_5 = (x10_13 & 0xff) << 0x10 | (x10_13 & 0xff00ff00) | (x10_13 u>> 0x10 & 0xff)
    else
        x8_11[7].d = x10_4
        x10_5 = *(arg3 + 0xc)
    
    *(x8_11 + 0x3c) = x10_5
    x8_11[8] = *(arg1 + 0x10)
    x8_11[9].d = *(x19 + 0x10)
    *(x8_11 + 0x4c) = *(x19 + 0x14)
    int32_t x10_17 = *(arg3 + 0x10)
    int32_t x10_18
    
    if (*gGraphicsDriverType != 1)
        x8_11[0xb].d = (x10_17 & 0xff) << 0x10 | (x10_17 & 0xff00ff00) | (x10_17 u>> 0x10 & 0xff)
        int32_t x10_22 = *(arg3 + 0x14)
        x10_18 = (x10_22 & 0xff) << 0x10 | (x10_22 & 0xff00ff00) | (x10_22 u>> 0x10 & 0xff)
    else
        x8_11[0xb].d = x10_17
        x10_18 = *(arg3 + 0x14)
    
    *(x8_11 + 0x5c) = x10_18
    x8_11[0xc] = *(arg1 + 0x18)
    x8_11[0xd].d = *(x19 + 0x18)
    *(x8_11 + 0x6c) = *(x19 + 0x1c)
    int32_t x10_26 = *(arg3 + 0x18)
    
    if (*gGraphicsDriverType != 1)
        x8_11[0xf].d = (x10_26 & 0xff) << 0x10 | (x10_26 & 0xff00ff00) | (x10_26 u>> 0x10 & 0xff)
        int32_t x10_30 = *(arg3 + 0x1c)
        x9_9 = (x10_30 & 0xff) << 0x10 | (x10_30 & 0xff00ff00) | (x10_30 u>> 0x10 & 0xff)
    else
        x8_11[0xf].d = x10_26
        x9_9 = *(arg3 + 0x1c)
else
label_fcaa14:
    uint32_t x15_1 = zx.d(*arg3)
    result = zx.d(*(arg3 + 1))
    uint32_t x17_1 = zx.d(*(arg3 + 2))
    uint32_t x13_3 = zx.d(*(arg3 + 4))
    uint32_t x14_2 = zx.d(*(arg3 + 5))
    uint32_t x9_4 = zx.d(*(arg3 + 6))
    char x11_1 = *(arg3 + 7)
    int32_t x15_3
    
    if (*gGraphicsDriverType != 1)
        x15_3 = (0xffff00ff & x15_1 << 0x10) | (0xff & result) << 8 | x17_1
        x13_3 <<= 0x10
    else
        x15_3 =
            (0xff00ffff & ((0xffff00ff & x15_1) | (0xff & result) << 8)) | (0xff & x17_1) << 0x10
        x9_4 <<= 0x10
    
    int32_t x15_8 = x15_3 | zx.d(*(arg3 + 3)) << 0x18
    void* x10_6 = x10_1 + (x12_1 << 5)
    *x8_11 = *arg1
    x9_9 = (0xffffff & (x13_3 | x14_2 << 8 | x9_4)) | zx.d(x11_1) << 0x18
    *(x10_6 + 8) = *x19
    int32_t v0_5 = *(x19 + 4)
    *(x10_6 + 0x10) = 0x3f80000000000000
    *(x10_6 + 0x18) = x15_8
    *(x10_6 + 0x1c) = x9_9
    *(x10_6 + 0xc) = v0_5
    x8_11[4] = *(arg1 + 8)
    x8_11[5].d = *(x19 + 8)
    v0_5 = *(x19 + 0xc)
    x8_11[6] = 0x3f80000000000000
    x8_11[7].d = x15_8
    *(x8_11 + 0x3c) = x9_9
    *(x8_11 + 0x2c) = v0_5
    x8_11[8] = *(arg1 + 0x10)
    x8_11[9].d = *(x19 + 0x10)
    v0_5 = *(x19 + 0x14)
    x8_11[0xa] = 0x3f80000000000000
    x8_11[0xb].d = x15_8
    *(x8_11 + 0x5c) = x9_9
    *(x8_11 + 0x4c) = v0_5
    x8_11[0xc] = *(arg1 + 0x18)
    x8_11[0xd].d = *(x19 + 0x18)
    v0_5 = *(x19 + 0x1c)
    x8_11[0xe] = 0x3f80000000000000
    x8_11[0xf].d = x15_8
    *(x8_11 + 0x6c) = v0_5

*(x8_11 + 0x7c) = x9_9
uint64_t x8_21 = *gpSpriteAppData
*(x8_21 + 0x18) += 1
uint64_t x8_22 = *gpRenderAppData
*(x8_22 + 0x28) += 1
return result
