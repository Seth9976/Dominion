// 函数: _Z23ResolveExtraTurnAbilityR7DomGame9AbilityID
// 地址: 0xbf0bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg2)
int32_t* x0 = AbilityGetRegistered(arg1, x20)

if (x0[0x13] != 0)
    void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x1_1 = zx.q(x0[0x14])
*(arg1 + 0x19d4) = x1_1.d
*(arg1 + 0x19d8) = x0[0x15]
int32_t x8_6 = x0[0x16]

if ((x8_6 & 1) == 0)
    if ((x8_6 & 2) != 0)
        goto label_bf0cd0
    
    goto label_bf0c6c

int32_t var_28_1 = 0
int32_t var_30_1 = 0
AddOngoing(arg1, x1_1, 9, 0, 1, 0, 0, 0xffffffff)
uint64_t x1_3
int64_t x9_3

if ((x0[0x16] & 2) == 0)
label_bf0c6c:
    x1_3 = zx.q(*(arg1 + 0x19d4))
    x9_3 = sx.q(*(arg1 + 0x19d8))
    
    if (x1_3.d != x9_3.d)
    label_bf0cf0:
        
        if (*(arg1 + 0x1528) s>= 1)
            int64_t i = 0
            void* x9_5 = arg1 + (sx.q(x1_3.d) << 2) + 0x1aa8
            void* x10_2 = arg1 + (x9_3 << 2) + 0x1aa8
            
            do
                int32_t x12_2 = *x9_5
                x9_5 += 0x68
                i += 1
                *x10_2 |= x12_2
                x10_2 += 0x68
            while (i s< sx.q(*(arg1 + 0x1528)))
            
            x1_3 = zx.q(*(arg1 + 0x19d4))
else
label_bf0cd0:
    int32_t var_28_2 = 0
    int32_t var_30_2 = 0
    AddOngoing(arg1, zx.q(*(arg1 + 0x19d4)), 0x19, 0, 1, 0, 0, 0xffffffff)
    x1_3 = zx.q(*(arg1 + 0x19d4))
    x9_3 = sx.q(*(arg1 + 0x19d8))
    
    if (x1_3.d != x9_3.d)
        goto label_bf0cf0
SetUsedAnyAssociatedWith(arg1, x1_3)

if (*x0 != 3)
    void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_12 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
    *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_13 = *(x8_12 - 0x90)
    *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int128_t* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = AbilityGetRegistered(arg1, x20)
*(result + 0x58) = 0
int64_t x8_15 = sx.q(*(arg1 + 0x19c0)) - 1
*(arg1 + 0x19c0) = x8_15.d
v0 = *(arg1 + x8_15 * 0xb8 + 0x3c238)
v2 = *(arg1 + x8_15 * 0xb8 + 0x3c208)
v3 = *(arg1 + x8_15 * 0xb8 + 0x3c218)
result[2] = *(arg1 + x8_15 * 0xb8 + 0x3c228)
result[3] = v0
*result = v2
result[1] = v3
v0 = *(arg1 + x8_15 * 0xb8 + 0x3c278)
v2 = *(arg1 + x8_15 * 0xb8 + 0x3c248)
v3 = *(arg1 + x8_15 * 0xb8 + 0x3c258)
result[6] = *(arg1 + x8_15 * 0xb8 + 0x3c268)
result[7] = v0
result[4] = v2
result[5] = v3
v0 = *(arg1 + x8_15 * 0xb8 + 0x3c2a8)
v1 = *(arg1 + x8_15 * 0xb8 + 0x3c288)
result[0xb].q = *(arg1 + x8_15 * 0xb8 + 0x3c2b8)
result[9] = *(arg1 + x8_15 * 0xb8 + 0x3c298)
result[0xa] = v0
result[8] = v1
return result
