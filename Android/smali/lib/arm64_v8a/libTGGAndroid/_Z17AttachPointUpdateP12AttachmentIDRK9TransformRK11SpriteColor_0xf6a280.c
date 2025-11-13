// 函数: _Z17AttachPointUpdateP12AttachmentIDRK9TransformRK11SpriteColor
// 地址: 0xf6a280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
int32_t x8 = *arg1

if (x8 == 0)
    return 

int64_t* x10_1 = *(*gpGameData + 0x28)
uint64_t x9_2 = zx.q(x8.w)

if (x9_2.d u>= x10_1[1].d)
    return 

int64_t x10_2 = *x10_1

if (*(x10_2 + x9_2 * 0x34 + 0x30) != x8)
    return 

AttachmentID* x22_1 = arg1
Attachment* x21_1 = x10_2 + x9_2 * 0x34
int32_t i

do
    float v0 = *(x21_1 + 0x10)
    float v1 = *(x21_1 + 0x14)
    float v4 = *(x21_1 + 0x18)
    float v2 = *(x21_1 + 0x1c)
    float v6 = *(x21_1 + 0x20)
    float v17 = *(arg2 + 0x10)
    float v16 = *(arg2 + 0x14)
    float v20 = *(arg2 + 4)
    float v18 = *(arg2 + 8)
    float v19 = *(arg2 + 0xc)
    float v3 = *(arg2 + 0x18)
    float v5 = *(arg2 + 0x1c)
    float v22 = v6 * v6
    float v23 = v1 * v1
    float v24 = v1 * v4
    float v25 = v6 * v2
    float v26 = v6 * v4
    float v27 = v1 * v2
    float v28 = v4 * v2
    float v29 = v6 * v1
    v8.d = v6 * v20
    v9.d = v24 - v25
    v24 = v24 + v25
    v25 = v22 + v23
    v22 = v22 - v23
    v23 = v26 + v27
    v26 = v27 - v26
    v27 = v28 - v29
    v28 = v29 + v28
    float v30 = v6 * v17 - v1 * v20
    float v31 = v6 * v18
    v29 = v1 * v17 f+ v8.d
    v8.d = v4 * v17
    v6 = v2 * v17 + v6 * v19
    v17 = v5 + v5
    v23 = v23 * v17
    v17 = v27 * v17
    v27 = v16 + v16
    v31 = v8.d f+ v31
    v8.d = v4 * v4
    v24 = v27 * v24
    v26 = v27 * v26
    v27 = v3 + v3
    v25 = v25 f- v8.d
    v9.d = v9.d f* v27
    v27 = v28 * v27
    v28 = v22 f+ v8.d
    v22 = v22 f- v8.d
    v8.d = v4 * v18
    v30 = v30 f- v8.d
    v8.d = v4 * v19
    v4 = v4 * v20
    v20 = v2 * v20 + v31
    v31 = v1 * v18
    v1 = v1 * v19
    v19 = v2 * v19
    v18 = v2 * v18
    v2 = v2 * v2
    v26 = v26 + v27
    v25 = v25 - v2
    v27 = v28 - v2
    int32_t x8_1 = *x21_1
    v15.d = v20 - v1
    v14.d = v31 + v6 - v4
    v2 = (v22 + v2) * v5
    v29 = v29 f+ v8.d
    v5 = v0 * (v16 * v25 f+ v9.d + v23)
    v8.d = v30 - v19
    v12.d = v29 - v18
    v9.d = *(x21_1 + 0x2c) + v0 * (v2 + v26)
    v11.d = *(x21_1 + 0x24) f+ v5
    v10.d = *(x21_1 + 0x28) + v0 * (v24 + v3 * v27 + v17)
    v13.d = v0 f* *arg2
    
    if (x8_1 == 2)
        Flanim* x0_3
        int128_t v4_1
        x0_3, v4_1 = FlanimTryToGet(zx.q(*(x21_1 + 8)))
        
        if (x0_3 == 0)
        label_f6a578:
            *x22_1 = *(x21_1 + 0xc)
            AttachmentDestroy(x21_1)
            i = *x22_1
            
            if (i == 0)
                break
        else
            float v0_1 = v15.d f+ v15.d
            float v2_1 = v12.d f+ v12.d
            float v3_1 = v8.d f+ v8.d
            v4_1 = data_71cfa0
            float v5_1 = v15.d f* v0_1
            float v6_1 = v15.d f* v2_1
            float v16_1 = v14.d f* v2_1
            float v21_1 = fconvert.s(1f)
            float v1_1 = v14.d f* (v14.d f+ v14.d)
            float v7_1 = v3_1 f* v14.d
            float v17_1 = v15.d f* v3_1
            v0_1 = v0_1 f* v14.d
            v3_1 = v12.d f* v3_1
            v2_1 = v21_1 - v12.d f* v2_1
            *(x0_3 + 0x64) = *arg3
            *(x0_3 + 0x2c) = v13.d f* (v17_1 + v16_1)
            *(x0_3 + 0x30) = v11.d
            *(x0_3 + 0x3c) = v13.d f* (v0_1 - v3_1)
            *(x0_3 + 0x40) = v10.d
            *(x0_3 + 0x44) = v13.d f* (v16_1 - v17_1)
            *(x0_3 + 0x48) = v13.d f* (v3_1 + v0_1)
            *(x0_3 + 0x24) = v13.d f* (v21_1 - v5_1 - v1_1)
            *(x0_3 + 0x28) = v13.d f* (v6_1 - v7_1)
            *(x0_3 + 0x34) = v13.d f* (v6_1 + v7_1)
            *(x0_3 + 0x38) = v13.d f* (v2_1 - v1_1)
            *(x0_3 + 0x4c) = v13.d f* (v2_1 - v5_1)
            *(x0_3 + 0x50) = v9.d
            *(x0_3 + 0x54) = v4_1
            FlanimUpdate(x0_3, *gSecondsPerUpdate)
            x22_1 = x21_1 + 0xc
            i = *x22_1
            
            if (i == 0)
                break
    else
        if (x8_1 != 1)
            pthread_kill(pthread_self(), 6)
            Attachment* x0_6
            Transform* x1
            x0_6, x1 = XNoReturn()
            return AttachmentDrawOne(x0_6, x1) __tailcall
        
        ParticleSystem* x0_1 = ParticleTryToGet(zx.q(*(x21_1 + 4)))
        
        if (x0_1 == 0)
            goto label_f6a578
        
        *(x0_1 + 0x54) = v13.d
        *(x0_1 + 0x58) = v12.d
        *(x0_1 + 0x5c) = v15.d
        *(x0_1 + 0x60) = v14.d
        *(x0_1 + 0x64) = v8.d
        *(x0_1 + 0x68) = v11.d
        *(x0_1 + 0x6c) = v10.d
        *(x0_1 + 0x70) = v9.d
        ParticleUpdate(x0_1)
        x22_1 = x21_1 + 0xc
        i = *x22_1
        
        if (i == 0)
            break
    
    uint64_t x10_3 = zx.q(i.w)
    int64_t* x9_4 = *(*gpGameData + 0x28)
    
    if (x10_3.d u>= x9_4[1].d)
        break
    
    x21_1 = *x9_4 + x10_3 * 0x34
while (*(x21_1 + 0x30) == i)
