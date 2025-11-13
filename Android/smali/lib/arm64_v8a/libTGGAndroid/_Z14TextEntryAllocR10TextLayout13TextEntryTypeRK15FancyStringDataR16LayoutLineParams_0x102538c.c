// 函数: _Z14TextEntryAllocR10TextLayout13TextEntryTypeRK15FancyStringDataR16LayoutLineParams
// 地址: 0x102538c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
float v0
float v1

if (not(*(arg4 + 0x1c) != 0f))
    int64_t* x8_1 = *(arg3 + 0x78)
    v9.d = *(arg3 + 0x2c)
    v8.d = *(arg3 + 0x30)
    XAsset* x0
    
    if (x8_1 != 0)
        x0 = *x8_1
    
    if (x8_1 == 0 || x0 == 0)
        XAsset* x23_1 = **(arg3 + 8)
        void** x8_3
        
        if (x23_1 == 0)
            x23_1 = AssetPtrGetNull(0x12)
            x8_3 = *x23_1
            
            if (x8_3 == 0)
                AssetCatalogLoadAsset(x23_1, false, true)
                x8_3 = *x23_1
        else
            x8_3 = *x23_1
            
            if (x8_3 == 0)
                AssetCatalogLoadAsset(x23_1, false, true)
                x8_3 = *x23_1
        
        int32_t x9_1 = *(x23_1 + 0x24)
        *(x23_1 + 0x24) = x9_1 + 1
        v1 = *(arg3 + 0x2c)
        v0 = *(*x8_3 + 8)
        *(x23_1 + 0x24) = x9_1
        v0 = v1 * float.s(v0)
    else
        v0 = FontGetLineSpacing(x0, *(arg3 + 0x80)) * *(arg3 + 0x2c)
    
    *(arg4 + 0x1c) = v8.d f* v9.d + v0

if (not(*(arg4 + 0x20) != 0f))
    int64_t* x8_5 = *(arg3 + 0x78)
    XAsset* x0_1
    
    if (x8_5 != 0)
        x0_1 = *x8_5
    
    if (x8_5 == 0 || x0_1 == 0)
        XAsset* x23_2 = **(arg3 + 8)
        float** x8_7
        
        if (x23_2 == 0)
            x23_2 = AssetPtrGetNull(0x12)
            x8_7 = *x23_2
            
            if (x8_7 == 0)
                AssetCatalogLoadAsset(x23_2, false, true)
                x8_7 = *x23_2
        else
            x8_7 = *x23_2
            
            if (x8_7 == 0)
                AssetCatalogLoadAsset(x23_2, false, true)
                x8_7 = *x23_2
        
        int32_t x9_2 = *(x23_2 + 0x24)
        *(x23_2 + 0x24) = x9_2 + 1
        v1 = *(arg3 + 0x2c)
        v0 = **x8_7
        *(x23_2 + 0x24) = x9_2
        v0 = v1 * float.s(v0)
    else
        v0 = TTFontGetHeight(x0_1, *(arg3 + 0x80)) * *(arg3 + 0x2c)
    
    *(arg4 + 0x20) = v0

float v2

if (not(*(arg4 + 0x24) != 0f))
    XAsset** x8_9 = *(arg3 + 0x78)
    XAsset* x0_2
    
    if (x8_9 != 0)
        x0_2 = *x8_9
    
    if (x8_9 == 0 || x0_2 == 0)
        XAsset* x23_3 = **(arg3 + 8)
        void** x8_11
        
        if (x23_3 == 0)
            x23_3 = AssetPtrGetNull(0x12)
            x8_11 = *x23_3
            
            if (x8_11 == 0)
                AssetCatalogLoadAsset(x23_3, false, true)
                x8_11 = *x23_3
        else
            x8_11 = *x23_3
            
            if (x8_11 == 0)
                AssetCatalogLoadAsset(x23_3, false, true)
                x8_11 = *x23_3
        
        int32_t x9_3 = *(x23_3 + 0x24)
        *(x23_3 + 0x24) = x9_3 + 1
        v2 = *(arg3 + 0x2c)
        v1 = *(*x8_11 + 4)
        v0 = float.s(*(arg3 + 0x18))
        *(x23_3 + 0x24) = x9_3
        v0 = float.s(v1) - v0
    else
        v0 = TTFontAscent(x0_2, *(arg3 + 0x80))
        v2 = *(arg3 + 0x2c)
        v0 = v0 - float.s(*(arg3 + 0x18))
    
    *(arg4 + 0x24) = v2 * v0

if (not(*(arg4 + 0x18) != 0f))
    v0 = *(arg4 + 0x28)
    
    if (v0 != 0f)
        v0 = v0 + *(arg4 + 0x1c) + *(arg4 + 0x38)
    else
        XAsset** x8_13 = *(arg3 + 0x78)
        XAsset* x0_3
        
        if (x8_13 != 0)
            x0_3 = *x8_13
        
        if (x8_13 == 0 || x0_3 == 0)
            XAsset* x23_4 = **(arg3 + 8)
            void** x8_15
            
            if (x23_4 == 0)
                x23_4 = AssetPtrGetNull(0x12)
                x8_15 = *x23_4
                
                if (x8_15 == 0)
                    AssetCatalogLoadAsset(x23_4, false, true)
                    x8_15 = *x23_4
            else
                x8_15 = *x23_4
                
                if (x8_15 == 0)
                    AssetCatalogLoadAsset(x23_4, false, true)
                    x8_15 = *x23_4
            
            int32_t x9_4 = *(x23_4 + 0x24)
            *(x23_4 + 0x24) = x9_4 + 1
            v2 = *(arg3 + 0x2c)
            v1 = *(*x8_15 + 4)
            v0 = float.s(*(arg3 + 0x18))
            *(x23_4 + 0x24) = x9_4
            v0 = float.s(v1) - v0
        else
            v0 = TTFontAscent(x0_3, *(arg3 + 0x80))
            v2 = *(arg3 + 0x2c)
            v0 = v0 - float.s(*(arg3 + 0x18))
        
        v0 = v2 * v0
    
    *(arg4 + 0x18) = v0
    *(arg4 + 0x38) = 0

int32_t x24 = *(arg1 + 0x28)
int32_t x8_17 = *(arg1 + 0x2c)
int64_t x23_5

if (x24 s>= x8_17)
    int32_t x25_1
    
    if (x8_17 == 0)
        x25_1 = 0x10
    else
        x25_1 = x8_17 << 1
    
    int64_t x0_5 = XPooledCalloc(x25_1 << 6)
    int64_t x1 = *(arg1 + 0x20)
    x23_5 = x0_5
    
    if (x1 != 0)
        memcpy(x23_5, x1, sx.q(x24 << 6))
        XPooledFree(*(arg1 + 0x20), *(arg1 + 0x2c) << 6)
    
    x24 = *(arg1 + 0x28)
    *(arg1 + 0x20) = x23_5
    *(arg1 + 0x2c) = x25_1
else
    x23_5 = *(arg1 + 0x20)

int32_t* result = x23_5 + (sx.q(x24) << 6)
*(arg1 + 0x28) = x24 + 1
__builtin_memset(result, 0, 0x40)
result[2] = *(arg4 + 0x10)
int32_t x8_22 = *(arg4 + 0x14)
*(arg4 + 0x14) = x8_22 + 1
result[3] = x8_22
*result = arg2
result[5] = *(arg4 + 0x18)
int64_t x8_23 = sx.q(*(arg4 + 4))

if (x8_23.d == 0xffffffff)
    v0 = 0f
else
    void* x8_24 = *(arg1 + 0x20) + (x8_23 << 6)
    v0 = *(x8_24 + 0x10) + *(x8_24 + 0x18)

result[4] = v0
result[6] = 0
v0 = *(arg4 + 0x20)
result[1] = 0
result[7] = v0
result[1] = *(arg3 + 0x70) == 4 ? 1 : 0
uint32_t x8_29 = ((result - *(arg1 + 0x20)) u>> 6).d

if (*arg4 == 0xffffffff)
    *arg4 = x8_29

*(arg4 + 4) = x8_29
*(arg4 + 8) = x8_29
return result
