// 函数: _Z29DomCreateCardPlaceholder_ZoomR6DomGfx
// 地址: 0xaee970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& result = arg1

if (*(arg1 + 0x2c) != 1 || *(result + 0x174) != 1)
    uint64_t x22_1 = zx.q(*(gDomClient + 0x205f0))
    int32_t x8_3
    int64_t x23_1
    
    if (x22_1.d != *(gDomClient + 0x205e8))
        x23_1 = *(gDomClient + 0x205e0)
        x8_3 = *(x23_1 + x22_1 * 0x21d8 + 0x21d0)
    else
        x23_1 = *(gDomClient + 0x205e0)
        x8_3 = x22_1.d + 1
        *(gDomClient + 0x205e8) = x8_3
    
    DomGfx* result_2 = x23_1 + x22_1 * 0x21d8
    *(gDomClient + 0x205f0) = x8_3
    memset(result_2, 0, 0x21d0)
    *(result_2 + 0x21d0) = x22_1.d | *(gDomClient + 0x205f8) << 0x10
    int32_t x8_7 = *(gDomClient + 0x205f8)
    int32_t x8_8
    
    if (x8_7 == 0xffff)
        x8_8 = 1
    else
        x8_8 = x8_7 + 1
    
    *(gDomClient + 0x205f4) += 1
    *(gDomClient + 0x205f8) = x8_8
    *(result_2 + 0x2c) = 1
    DomGfx& result_1 = result
    int32_t x0_2
    int32_t i
    
    for (i = *(result_1 + 0x2c); i == 3; i = *(result_1 + 0x2c))
        x0_2 = *(result_1 + 0x30)
        
        if (x0_2 == 0x70d)
            goto label_aeeae0
        
        if (x0_2 == 0x718)
            goto label_aeeae0
        
        int32_t x8_9 = *(result_1 + 0x70)
        
        if (x8_9 == 0)
            goto label_aeeae0
        
        result_1 = *(gDomClient + 0x205e0) + zx.q(x8_9.w) * 0x21d8
    
    if (i == 5)
        x0_2 = *(result_1 + 0x204)
    else if (i == 1)
        x0_2 = *(result_1 + 0x170)
    else
        if (i != 0)
            pthread_kill(pthread_self(), 6)
            return DomCreateIconPlaceholder_ZoomNoSource(XNoReturn()) __tailcall
        
        x0_2 = CardWhat(gDomClient + 0x20728, zx.q(*(result_1 + 0x98)))
    
label_aeeae0:
    void* x22_2 = x23_1 + x22_1 * 0x21d8
    *(x22_2 + 0x170) = x0_2
    int32_t x8_11 = *(result + 0x21d0)
    *(x22_2 + 0x174) = 0
    *(x22_2 + 0x178) = x8_11
    *(result + 0x2134) = *(result_2 + 0x21d0)
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = CurrentTransformWithMouseover(result)
    *(x22_2 + 0x308) = 0
    result = result_2
    int128_t var_d4
    *(x22_2 + 0x32c) = var_d4
    int128_t var_e4
    *(x22_2 + 0x31c) = var_e4
    int128_t var_f4
    *(x22_2 + 0x30c) = var_f4
    int128_t var_b4
    *(x22_2 + 0x34c) = var_b4
    int128_t var_a4
    *(x22_2 + 0x35c) = var_a4
    int128_t var_94
    *(x22_2 + 0x36c) = var_94
    int128_t var_c4
    *(x22_2 + 0x33c) = var_c4
    int128_t var_108
    *(x22_2 + 0x3ac) = var_108:0xc.d
    int128_t var_74
    *(x22_2 + 0x38c) = var_74
    int128_t var_118
    *(x22_2 + 0x39c) = var_118
    int128_t var_84
    *(x22_2 + 0x37c) = var_84
    *(x22_2 + 0x3b0) = 0
    *(x22_2 + 0x3c4) = var_e4
    *(x22_2 + 0x3d4) = var_d4
    *(x22_2 + 0x3b4) = var_f4
    *(x22_2 + 0x404) = var_a4
    *(x22_2 + 0x414) = var_94
    *(x22_2 + 0x3e4) = var_c4
    *(x22_2 + 0x3f4) = var_b4
    *(x22_2 + 0x454) = var_108:0xc.d
    *(x22_2 + 0x434) = var_74
    *(x22_2 + 0x444) = var_118
    *(x22_2 + 0x424) = var_84
    *(x22_2 + 0x1f78) = 0
else
    *(result + 0x174) = 0

return result
