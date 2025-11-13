// 函数: _Z19FindOrCreatePileRepR6DomGfx
// 地址: 0xb93720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(data_18231d0)
int128_t var_b4
int32_t x8

if (result.d == 0)
    x8 = *(gDomClient + 0x205e8)
label_b9392c:
    uint64_t x23_1 = zx.q(*(gDomClient + 0x205f0))
    uint64_t x8_4
    int64_t x9_9
    int32_t x10_13
    
    if (x23_1.d != x8)
        x9_9 = *(gDomClient + 0x205e0)
        x10_13 = *(x9_9 + x23_1 * 0x21d8 + 0x21d0)
        x8_4 = x23_1
    else
        x9_9 = *(gDomClient + 0x205e0)
        x10_13 = x8 + 1
        *(gDomClient + 0x205e8) = x10_13
        x8_4 = zx.q(x8)
    
    void* x20_1 = x9_9 + x8_4 * 0x21d8
    *(gDomClient + 0x205f0) = x10_13
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    v0_1, v1_1, v2_1, v3_1, v4_1 = memset(x20_1, 0, 0x21d0)
    v0_1.q = 3
    *(x20_1 + 0x21d0) = x23_1.d | *(gDomClient + 0x205f8) << 0x10
    int32_t x10_14 = *(gDomClient + 0x205f8)
    int32_t x10_15
    
    if (x10_14 == 0xffff)
        x10_15 = 1
    else
        x10_15 = x10_14 + 1
    
    *(gDomClient + 0x205f8) = x10_15
    *(gDomClient + 0x205f4) += 1
    *(x20_1 + 0x2c) = 1
    *(x20_1 + 0x170) = *(arg1 + 0x30)
    *(x20_1 + 0x174) = 3
    int128_t var_90_2 = *(arg1 + 0x3d8)
    int128_t var_80_2 = *(arg1 + 0x3e8)
    int128_t var_b0_2 = *(arg1 + 0x3b8)
    int128_t var_a0_2 = *(arg1 + 0x3c8)
    int128_t var_50_2 = *(arg1 + 0x418)
    int128_t var_40_2 = *(arg1 + 0x428)
    int128_t var_70_2 = *(arg1 + 0x3f8)
    int128_t var_60_2 = *(arg1 + 0x408)
    *(x20_1 + 0x260) = 1
    *(x20_1 + 0x264) = var_b4
    *(x20_1 + 0x2a4) = var_80_2
    *(x20_1 + 0x294) = var_90_2
    *(x20_1 + 0x284) = var_a0_2
    *(x20_1 + 0x274) = var_b0_2
    *(x20_1 + 0x2e4) = var_40_2:0xc.d
    *(x20_1 + 0x2d4) = var_50_2
    *(x20_1 + 0x2c4) = var_60_2
    *(x20_1 + 0x2b4) = var_70_2
    *(x20_1 + 0x308) = 1
    *(x20_1 + 0x30c) = var_b4
    *(x20_1 + 0x34c) = var_80_2
    *(x20_1 + 0x33c) = var_90_2
    *(x20_1 + 0x32c) = var_a0_2
    *(x20_1 + 0x31c) = var_b0_2
    *(x20_1 + 0x38c) = var_40_2:0xc.d
    *(x20_1 + 0x36c) = var_60_2
    *(x20_1 + 0x37c) = var_50_2
    *(x20_1 + 0x35c) = var_70_2
    *(x20_1 + 0x3b0) = 1
    *(x20_1 + 0x3e4) = var_90_2
    *(x20_1 + 0x3f4) = var_80_2
    *(x20_1 + 0x3d4) = var_a0_2
    *(x20_1 + 0x3b4) = var_b4
    *(x20_1 + 0x3c4) = var_b0_2
    *(x20_1 + 0x434) = var_40_2:0xc.d
    *(x20_1 + 0x414) = var_60_2
    *(x20_1 + 0x424) = var_50_2
    *(x20_1 + 0x404) = var_70_2
    result = zx.q(*(x20_1 + 0x21d0))
    *(x20_1 + 0x1f78) = 0
    data_18231d0 = result.d
else
    x8 = *(gDomClient + 0x205e8)
    int64_t x9_1 = result & 0xffff
    
    if (x9_1.d u>= x8)
        goto label_b9392c
    
    int64_t x10_1 = *(gDomClient + 0x205e0)
    
    if (*(x10_1 + x9_1 * 0x21d8 + 0x21d0) != result.d)
        goto label_b9392c
    
    void* x8_1 = x10_1 + x9_1 * 0x21d8
    int32_t x11_3 = *(arg1 + 0x30)
    
    if (*(x8_1 + 0x170) != x11_3)
        *(x8_1 + 0x170) = x11_3
        int128_t v0
        v0.q = 3
        void* x8_3 = x10_1 + x9_1 * 0x21d8
        *(x8_3 + 0x174) = 3
        int128_t var_90_1 = *(arg1 + 0x3d8)
        int128_t var_80_1 = *(arg1 + 0x3e8)
        int128_t var_b0_1 = *(arg1 + 0x3b8)
        int128_t var_a0_1 = *(arg1 + 0x3c8)
        int128_t var_50_1 = *(arg1 + 0x418)
        int128_t var_40_1 = *(arg1 + 0x428)
        int128_t var_70_1 = *(arg1 + 0x3f8)
        int128_t var_60_1 = *(arg1 + 0x408)
        *(x8_3 + 0x260) = 1
        *(x8_3 + 0x264) = var_b4
        *(x8_3 + 0x2a4) = var_80_1
        *(x8_3 + 0x294) = var_90_1
        *(x8_3 + 0x284) = var_a0_1
        *(x8_3 + 0x274) = var_b0_1
        *(x8_3 + 0x2e4) = var_40_1:0xc.d
        *(x8_3 + 0x2d4) = var_50_1
        *(x8_3 + 0x2c4) = var_60_1
        *(x8_3 + 0x2b4) = var_70_1
        *(x8_3 + 0x308) = 1
        *(x8_3 + 0x30c) = var_b4
        *(x8_3 + 0x33c) = var_90_1
        *(x8_3 + 0x34c) = var_80_1
        *(x8_3 + 0x32c) = var_a0_1
        *(x8_3 + 0x31c) = var_b0_1
        *(x8_3 + 0x38c) = var_40_1:0xc.d
        *(x8_3 + 0x36c) = var_60_1
        *(x8_3 + 0x37c) = var_50_1
        *(x8_3 + 0x35c) = var_70_1
        *(x8_3 + 0x3b0) = 1
        *(x8_3 + 0x3e4) = var_90_1
        *(x8_3 + 0x3f4) = var_80_1
        *(x8_3 + 0x3d4) = var_a0_1
        *(x8_3 + 0x3b4) = var_b4
        *(x8_3 + 0x3c4) = var_b0_1
        *(x8_3 + 0x434) = var_40_1:0xc.d
        *(x8_3 + 0x414) = var_60_1
        *(x8_3 + 0x424) = var_50_1
        *(x8_3 + 0x404) = var_70_1
        *(x8_3 + 0x1f78) = 0
return result
