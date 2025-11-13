// 函数: _Z29CurrentTransformWithMouseoverR6DomGfx
// 地址: 0xaea848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_40 = v10
int64_t v9
int64_t var_38 = v9
int64_t v8
int64_t var_30 = v8
void* __offset(DomGfx, 0x3b0) x0

if (*(arg1 + 0x3b0) == 1)
    *(arg1 + 0x430) = arg1
    x0 = arg1 + 0x3b0
    
    if (*(arg1 + 0x308) == 1)
        goto label_aea970
    
    goto label_aea88c

x0 = arg1 + 0x3b0

if (*(arg1 + 0x308) != 1)
label_aea88c:
    
    if (*(arg1 + 0x260) == 1)
        *(arg1 + 0x2e0) = arg1
else
label_aea970:
    *(arg1 + 0x388) = arg1
    
    if (*(arg1 + 0x260) == 1)
        *(arg1 + 0x2e0) = arg1

int32_t x20 = *(arg1 + 0x2148)
int64_t result
int128_t v0
int128_t v2
result, v0, v2 = CalcTransform<DomLoc>(x0, nullptr)
int32_t x8_3 = *(arg1 + 0x21d0)
int128_t* entry_x8
float v1_1

if (x8_3 == *(gDomClient + 0x1f8c0))
    v0.q = *(entry_x8 + 0x14)
    v2.q = *(gDomClient + 0x1f8c4)
    v1_1 = *(entry_x8 + 0x1c) + 0f
    *(entry_x8 + 0x14) = vadd_f32(v2, v0).q
    *(entry_x8 + 0x1c) = v1_1

if (x20 != 0)
    v0.d = *(arg1 + 0x2178)
    
    if (*(gDomClient + 0x207a4) == 2 && *(arg1 + 0x2c) == 0 && *(arg1 + 0xa4) == 0x3e9
            && *(gDomClient + 0x20758) != 0x2b)
        v8.d = fconvert.s(1f)
    
    if (*(gDomClient + 0x207a4) != 2 || *(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3e9
            || *(gDomClient + 0x20758) == 0x2b || *(arg1 + 0x98) != *(gDomClient + 0x207a8))
        if (x8_3 != *(gDomClient + 0x1d01c))
            v8 = v0.q
        else
            v8.d = 0f
            
            if (*(arg1 + 0x1f78) != 0)
                v1_1 = *(arg1 + 0x1f84)
                
                if (v1_1 <= 0f)
                    v8 = v0.q
                else
                    v2.d = fconvert.s(1f)
                    
                    if (not(v1_1 f>= v2.d))
                        v2.d = 0f
                        v2.d = v2.d f- v0.d
                        v8.d = v0.d f+ v2.d f* v1_1
    
    int32_t x22_1
    
    if (*(arg1 + 0x2c) == 0)
        int32_t x8_8 = *(arg1 + 0xa4)
        
        if (x8_8 - 7 u>= 0xc)
            x22_1 = x8_8 - 0x13 u< 0x14 ? 1 : 0
        else
            x22_1 = 2
    else
        x22_1 = 0
    
    v10.d = *(arg1 + 0x217c)
    v9.d = *(arg1 + 0x2180)
    result = GetMouseoverStyle(arg1)
    
    if (result.d u> 4)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return DomMinimizePileAny() __tailcall
    
    int128_t var_70
    int128_t var_60
    int32_t var_50
    uint64_t var_48
    
    switch (result.d)
        case 1, 2
            var_48 = *V20
            int32_t v0_2
            int32_t v1_2
            v0_2, v1_2 = UI2GetSize(zx.q(x20), "itemCard", 0)
            var_50 = v0_2
            int32_t var_4c_1 = v1_2
            int128_t v0_4
            int128_t v1_4
            result, v0_4, v1_4 =
                MousoverScale(entry_x8, &var_50, &var_48, zx.q(x22_1), v8.d, v10.d, v9.d)
            *entry_x8 = var_70
            entry_x8[1] = var_60
        case 3, 4
            var_48 = *V20
            int32_t v0_5
            int32_t v1_5
            v0_5, v1_5 = UI2GetSize(zx.q(x20), "itemCard", 0)
            var_50 = v0_5
            int32_t var_4c_2 = v1_5
            int128_t v0_7
            int128_t v1_7
            int128_t v2_3
            result, v0_7, v1_7, v2_3 =
                MousoverScale(entry_x8, &var_50, &var_48, zx.q(x22_1), v8.d, v10.d, v9.d)
            *entry_x8 = var_70
            entry_x8[1] = var_60
            *(entry_x8 + 4) = *QI

return result
