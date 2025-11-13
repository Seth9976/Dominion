// 函数: _Z15FontStringWidthP6XAssetPKcff
// 地址: 0xf6ba80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_70 = v11
int64_t v9 = arg3.q
char const* x20 = arg2
XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(0x12)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8_1 = *(x19 + 0x24) + 1
*(x19 + 0x24) = x8_1
void* x23 = *x9
int128_t v10

if (*(x23 + 0x1c) == 0)
    v10.d = 0f
    *(x19 + 0x24) = x8_1 - 1
    return 

uint32_t i = zx.d(*x20)

if (i == 0)
    v10.d = 0f
    *(x19 + 0x24) -= 1
    return 

void* x24_1 = *(x23 + 0x20)
v10.d = 0f

do
    int32_t j = i & 0xff
    
    if ((i & 0x80) != 0)
        if ((j & 0xe0) == 0xc0)
            j = (zx.d(x20[1]) & 0x3f) | (0x1f & j) << 6
        else if ((i & 0xf0) == 0xe0)
            j = (((0xfffff03f & (j & 0xf) << 0xc) | (0x3f & zx.d(x20[1])) << 6) & 0xffffffc0)
                | (zx.d(x20[2]) & 0x3f)
        else if ((j & 0xf8) == 0xf0)
            j = (((0xfffff03f & ((0xfffc0fff & (j & 7) << 0x12) | (0x3f & zx.d(x20[1])) << 0xc))
                | (0x3f & zx.d(x20[2])) << 6) & 0xffffffc0) | (zx.d(x20[3]) & 0x3f)
    
    v11.d = fconvert.s(1f)
    
    if (not(v9.d f== 0f) && ((j != 0x20 ? 1 : 0) & (MyIsLower(j).d ^ 1) & 1) == 0)
        j = MyToUpper(j).d
        v11 = v9
    
    int32_t x9_6 = sx.d(*x20)
    int32_t x22_1
    char const* x8_11
    int32_t x9_7
    
    if ((x9_6 & 0x80000000) != 0)
        int32_t x8_12 = x9_6 & 0xff
        
        if ((x8_12 & 0xe0) == 0xc0)
            x8_11 = &x20[1]
            x20 = &x8_11[1]
            x9_7 = sx.d(*x20)
            x22_1 = x9_7 & 0xff
            
            if ((x9_7 & 0x80000000) != 0)
                goto label_f6bc38
        else if ((x9_6 & 0xf0) != 0xe0)
            if ((x8_12 & 0xf8) == 0xf0)
                x8_11 = &x20[3]
            else
                x8_11 = x20
            
            x20 = &x8_11[1]
            x9_7 = sx.d(*x20)
            x22_1 = x9_7 & 0xff
            
            if ((x9_7 & 0x80000000) != 0)
                goto label_f6bc38
        else
            x8_11 = &x20[2]
            x20 = &x8_11[1]
            x9_7 = sx.d(*x20)
            x22_1 = x9_7 & 0xff
            
            if ((x9_7 & 0x80000000) != 0)
                goto label_f6bc38
    else
        x8_11 = x20
        x20 = &x8_11[1]
        x9_7 = sx.d(*x20)
        x22_1 = x9_7 & 0xff
        
        if ((x9_7 & 0x80000000) != 0)
        label_f6bc38:
            
            if ((x22_1 & 0xe0) == 0xc0)
                x22_1 = (zx.d(x8_11[2]) & 0x3f) | (0x1f & x22_1) << 6
            else if ((x9_7 & 0xf0) == 0xe0)
                x22_1 = (((0xfffff03f & (x22_1 & 0xf) << 0xc) | (0x3f & zx.d(x8_11[2])) << 6)
                    & 0xffffffc0) | (zx.d(x8_11[3]) & 0x3f)
            else if ((x22_1 & 0xf8) == 0xf0)
                x22_1 = (((0xfffff03f
                    & ((0xfffc0fff & (x22_1 & 7) << 0x12) | (0x3f & zx.d(x8_11[2])) << 0xc))
                    | (0x3f & zx.d(x8_11[3])) << 6) & 0xffffffc0) | (zx.d(x8_11[4]) & 0x3f)
    
    if (not(v9.d f== 0f) && ((j != 0x20 ? 1 : 0) & (MyIsLower(j).d ^ 1) & 1) == 0)
        x22_1 = MyToUpper(x22_1).d
    
    int32_t x8_21
    int64_t x9_15
    
    if (j s> 0x7f)
        uint64_t j_1 = zx.q(j)
        int32_t* x8_24 = *(*(x23 + 0x38) + ((zx.q(*(x23 + 0x40)) & (j_1 | j_1 u>> 4)) << 3))
        
        if (x8_24 != 0)
            while (*x8_24 != j)
                x8_24 = *(x8_24 + 8)
                
                if (x8_24 == 0)
                    goto label_f6baf4
            
            x8_21 = x8_24[1]
            x9_15 = *(x24_1 + 0x20)
            
            if (x9_15 != 0)
                goto label_f6bd30
    else
        x8_21 = *(x23 + (sx.q(j) << 2) + 0x48)
        
        if (x8_21 != 0xffffffff)
            x9_15 = *(x24_1 + 0x20)
            
            if (x9_15 != 0)
            label_f6bd30:
                int64_t x10_6 = sx.q(x8_21)
                int32_t x8_26 = *(x9_15 + x10_6 * 0x24 + 0x1c)
                
                if (x22_1 == 0)
                label_f6bd98:
                    arg3 = float.s(x8_26)
                    
                    if (zx.d(*x20) != 0)
                        arg3 = *(x23 + 0x10) + arg4 + arg3
                else
                    int64_t x10_7 = sx.q(*(x9_15 + x10_6 * 0x24 + 0x20))
                    
                    if (x10_7.d == 0xffffffff)
                        goto label_f6bd98
                    
                    int64_t x11_1 = sx.q(*(x23 + 0x28))
                    
                    if (x10_7.d s>= x11_1.d)
                        goto label_f6bd98
                    
                    void* x9_21 = *(x23 + 0x30) + x10_7 * 0xc + 8
                    int64_t x10_8 = x11_1 - x10_7
                    
                    while (true)
                        if (*(x9_21 - 8) != j)
                            goto label_f6bd98
                        
                        if (*(x9_21 - 4) == x22_1)
                            arg3 = float.s(*x9_21 + x8_26)
                            
                            if (zx.d(*x20) != 0)
                                break
                            
                            goto label_f6baf0
                        
                        int64_t temp0_1 = x10_8
                        x10_8 -= 1
                        x9_21 += 0xc
                        
                        if (temp0_1 == 1)
                            goto label_f6bd98
                    
                    arg3 = *(x23 + 0x10) + arg4 + arg3
                
            label_f6baf0:
                v10.d = v10.d f+ v11.d f* arg3
label_f6baf4:
    i = zx.d(*x20)
while (i != 0)

if (x19 != 0)
    *(x19 + 0x24) -= 1
