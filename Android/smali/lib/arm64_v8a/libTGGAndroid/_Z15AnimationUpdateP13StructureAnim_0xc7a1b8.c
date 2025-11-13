// 函数: _Z15AnimationUpdateP13StructureAnim
// 地址: 0xc7a1b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
StructureAnim* x19 = arg1
uint64_t x9 = zx.q(*(arg1 + 0x28))

if (*(arg1 + 0x18) != 0)
    size_t x2_1 = sx.q(x9.d) * 0x2c
    void var_b0
    void* x20_1 = &var_b0 - ((x2_1 + 0xf) & 0xfffffffffffffff0)
    memset(x20_1, 0, x2_1)
    AnimationUpdateTime(x19)
    AnimationAccumBonePosition(x19, x20_1)
    AnimationCalcFinalPosition(x19, x20_1)
    int64_t* x20_2
    
    if ((AnimationApplyIK(x19, x20_1).d & 1) == 0)
        x20_2 = *x19
        
        if (x20_2 == 0)
            goto label_c7a370
        
        goto label_c7a258
    
    AnimationCalcFinalPosition(x19, x20_1)
    x20_2 = *x19
    int64_t* x9_1
    
    if (x20_2 != 0)
    label_c7a258:
        x9_1 = *x20_2
        
        if (x9_1 == 0)
            AssetCatalogLoadAsset(x20_2, false, true)
            x9_1 = *x20_2
    else
    label_c7a370:
        x20_2 = AssetPtrGetNull(2)
        x9_1 = *x20_2
        
        if (x9_1 == 0)
            AssetCatalogLoadAsset(x20_2, false, true)
            x9_1 = *x20_2
    
    int32_t x8_6 = *(x20_2 + 0x24) + 1
    *(x20_2 + 0x24) = x8_6
    void* x22_1 = **x9_1
    uint64_t x9_3 = zx.q(*(x22_1 + 0x10))
    
    if (x9_3.d s< 1)
        *(x20_2 + 0x24) = x8_6 - 1
    else
        void* x24_1 = *(x19 + 0x20)
        int64_t i = 0
        int64_t x26_1 = 0x80
        
        do
            void* x27_1 = *(x19 + 0xb0)
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            arg1, v0_1, v1_1, v2_1, v3_1 = Mat4Multiply(x24_1 + i, *(x22_1 + 0x18) + x26_1)
            int128_t* x8_8 = x27_1 + i
            i += 0x40
            x26_1 += 0xd8
            int128_t var_88
            x8_8[2] = var_88
            int128_t var_78
            x8_8[3] = var_78
            int128_t var_a8
            *x8_8 = var_a8
            int128_t var_98
            x8_8[1] = var_98
        while (x9_3 << 6 != i)
        
        if (x20_2 != 0)
            *(x20_2 + 0x24) -= 1
else if (x9.d s>= 1)
    int64_t i_1 = 0
    
    do
        int128_t v1 = *(M4I + 0x30)
        int128_t v2 = *M4I
        int128_t v3 = *(M4I + 0x10)
        int128_t* x11_2 = *(x19 + 0xb0) + i_1
        i_1 += 0x40
        x11_2[2] = *(M4I + 0x20)
        x11_2[3] = v1
        *x11_2 = v2
        x11_2[1] = v3
    while (x9 << 6 != i_1)

if (*(x21 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
