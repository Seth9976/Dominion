// 函数: _Z22RenderStateSetMaterialR10RenderItem
// 地址: 0xc92524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *(arg1 + 0x10)
int128_t v1
v1.d = *(gDraw3DData + 0xc8)

if (v1.d f!= v0.d)
label_c92658:
    v0 = *(arg1 + 0x30)
    int128_t v2 = *(arg1 + 0x10)
    int128_t v3 = *(arg1 + 0x20)
    *(gDraw3DData + 0xf8) = *(arg1 + 0x40)
    *(gDraw3DData + 0xe8) = v0
    *(gDraw3DData + 0xd8) = v3
    *(gDraw3DData + 0xc8) = v2
    v0 = *(gDraw3DData + 0x2e4)
    *(gDraw3DData + 0x188) = *(gDraw3DData + 0x2d4)
    *(gDraw3DData + 0x198) = v0
    v0 = *(gDraw3DData + 0x304)
    *(gDraw3DData + 0x1a8) = *(gDraw3DData + 0x2f4)
    *(gDraw3DData + 0x1b8) = v0
    v0.d = *(arg1 + 0x184)
    v1.d = *(gDraw3DData + 0x190)
    v2.d = *(gDraw3DData + 0x1a0)
    v3.d = *(gDraw3DData + 0x1b0)
    *(gDraw3DData + 0x4a4) = v0.d
    v1.d = v0.d f* v1.d
    v2.d = v0.d f* v2.d
    v0.d = v0.d f* v3.d
    *(gDraw3DData + 0x190) = v1.d
    *(gDraw3DData + 0x1a0) = v2.d
    *(gDraw3DData + 0x1b0) = v0.d
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = Mat4Multiply(gDraw3DData + 0x188, gDraw3DData + 0xc8)
    int128_t var_80
    *(gDraw3DData + 0x108) = var_80
    int128_t var_70
    *(gDraw3DData + 0x118) = var_70
    int128_t var_60
    *(gDraw3DData + 0x128) = var_60
    int128_t var_50
    *(gDraw3DData + 0x138) = var_50
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    v0_2, v1_2, v2_2, v3_2 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x188)
    *(gDraw3DData + 0x1c8) = var_80
    *(gDraw3DData + 0x1d8) = var_70
    *(gDraw3DData + 0x1e8) = var_60
    *(gDraw3DData + 0x1f8) = var_50
    int128_t v0_3
    int128_t v1_3
    int128_t v2_3
    int128_t v3_3
    v0_3, v1_3, v2_3, v3_3 = Mat4Multiply(gDraw3DData + 0x208, gDraw3DData + 0x108)
    *(gDraw3DData + 0x148) = var_80
    *(gDraw3DData + 0x158) = var_70
    *(gDraw3DData + 0x168) = var_60
    *(gDraw3DData + 0x178) = var_50
else
    v0.d = *(gDraw3DData + 0xcc)
    v1.d = *(arg1 + 0x14)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xd0)
    v1.d = *(arg1 + 0x18)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xd4)
    v1.d = *(arg1 + 0x1c)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xd8)
    v1.d = *(arg1 + 0x20)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xdc)
    v1.d = *(arg1 + 0x24)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xe0)
    v1.d = *(arg1 + 0x28)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xe4)
    v1.d = *(arg1 + 0x2c)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xe8)
    v1.d = *(arg1 + 0x30)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xec)
    v1.d = *(arg1 + 0x34)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xf0)
    v1.d = *(arg1 + 0x38)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xf4)
    v1.d = *(arg1 + 0x3c)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xf8)
    v1.d = *(arg1 + 0x40)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0xfc)
    v1.d = *(arg1 + 0x44)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0x100)
    v1.d = *(arg1 + 0x48)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0x104)
    v1.d = *(arg1 + 0x4c)
    
    if (v0.d f!= v1.d)
        goto label_c92658
    
    v0.d = *(gDraw3DData + 0x4a4)
    v1.d = *(arg1 + 0x184)
    
    if (not(v0.d f== v1.d))
        goto label_c92658

*(gDraw3DData + 0x460) = *(arg1 + 0x50)
MaterialState* x0_5
int128_t v0_4
int128_t v1_4
int128_t v2_4
int128_t v3_4
x0_5, v0_4, v1_4, v2_4, v3_4 = MaterialCacheGet(MaterialCacheGetId(*(arg1 + 0x50)))
*(gDraw3DData + 0x420) = x0_5
int64_t x8_3 = *(arg1 + 0x58)

if (x8_3 != 0)
    *(gDraw3DData + 0x468) = x8_3
    v0_4, v1_4, v2_4, v3_4 = MaterialStateReplaceTexture(x0_5, 0x53, *(arg1 + 0x58))

int64_t x8_4 = *(arg1 + 0x60)

if (x8_4 != 0)
    *(gDraw3DData + 0x470) = x8_4
    v0_4, v1_4, v2_4, v3_4 =
        MaterialStateReplaceTexture(*(gDraw3DData + 0x420), 0x54, *(arg1 + 0x60))

int64_t x8_5 = *(arg1 + 0x68)

if (x8_5 != 0)
    *(gDraw3DData + 0x478) = x8_5
    v0_4, v1_4, v2_4, v3_4 =
        MaterialStateReplaceTexture(*(gDraw3DData + 0x420), 0x55, *(arg1 + 0x68))

int64_t x8_6 = *(arg1 + 0x70)

if (x8_6 != 0)
    *(gDraw3DData + 0x480) = x8_6
    v0_4, v1_4, v2_4, v3_4 =
        MaterialStateReplaceTexture(*(gDraw3DData + 0x420), 0x56, *(arg1 + 0x70))

if (*(arg1 + 0x78) != 0)
    int64_t x8_8 = *(arg1 + 0x88)
    *(gDraw3DData + 0x488) = *(arg1 + 0x78)
    *(gDraw3DData + 0x498) = x8_8
    void* x0_10 = IBLDefGet(*(gDraw3DData + 0x488))
    MaterialStateReplaceTexture(*(gDraw3DData + 0x420), 0x58, *(x0_10 + 0x30))
    v0_4, v1_4, v2_4, v3_4 =
        MaterialStateReplaceTexture(*(gDraw3DData + 0x420), 0x59, *(x0_10 + 0x38))
    *(gDraw3DData + 0x3f8) = *(gDraw3DData + 0x490)

*(gDraw3DData + 0x3c8) = *(arg1 + 0x90)
*(gDraw3DData + 0x410) = *(arg1 + 0xa0)
*(gDraw3DData + 0x3b4) = *(arg1 + 0xb0)
v0_4.d = *(arg1 + 0x130)
*(gDraw3DData + 0x3c4) = v0_4.d
*(gDraw3DData + 0x3d8) = *(arg1 + 0x134)
*(gDraw3DData + 0x3e8) = *(arg1 + 0x144)
v1_4 = *(arg1 + 0xf0)
v2_4 = *(arg1 + 0xc0)
v3_4 = *(arg1 + 0xd0)
*(gDraw3DData + 0x394) = *(arg1 + 0xe0)
*(gDraw3DData + 0x3a4) = v1_4
*(gDraw3DData + 0x374) = v2_4
*(gDraw3DData + 0x384) = v3_4
v0_4 = *(arg1 + 0x120)
v2_4 = *(arg1 + 0x100)
*(gDraw3DData + 0x354) = *(arg1 + 0x110)
*(gDraw3DData + 0x364) = v0_4
*(gDraw3DData + 0x344) = v2_4
int64_t x8_17 = *(arg1 + 0x178)
*(gDraw3DData + 0x428) = arg1
*(gDraw3DData + 0x408) = x8_17
int64_t* x0_13 = *gGraphicsInterface
return (*(*x0_13 + 0x88))(x0_13, gDraw3DData + 0xc8)
