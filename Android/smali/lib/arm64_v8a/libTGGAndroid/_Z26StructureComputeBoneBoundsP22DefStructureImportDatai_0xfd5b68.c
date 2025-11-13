// 函数: _Z26StructureComputeBoneBoundsP22DefStructureImportDatai
// 地址: 0xfd5b68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *BBOX0
void* x8_1 = *(arg1 + 0x18) + muls.dp.d(arg2, 0xd8)
*(x8_1 + 0xd0) = *(BBOX0 + 0x10)
*(x8_1 + 0xc0) = v0
int32_t x15 = *arg1

if (x15 s< 1)
    return 

int64_t i = 0
int64_t x9_1 = sx.q(arg2)
char x11_1 = 1

do
    int64_t x16_1 = *(arg1 + 8)
    
    if (*(x16_1 + i * 0x150 + 0x14) s>= 1)
        int64_t j = 0
        
        do
            int32_t k = 0
            int32_t* x2_2 = *(x16_1 + i * 0x150 + 0x20) + j * 0x34
            
            do
                if (arg2 == zx.d((x2_2[0xb] u>> k).b) && (x2_2[0xc] u>> k & 0xfe) u>= 0x32)
                    int64_t x3_7 = *(arg1 + 0x18)
                    v0.d = *x2_2
                    float v1 = x2_2[1]
                    float v2 = x2_2[2]
                    bool cond:0_1 = zx.d(x11_1) == 0
                    void* x4_1 = x3_7 + x9_1 * 0xd8
                    float v3 = v0.d f* *(x4_1 + 0x80)
                    float v7 = v0.d f* *(x4_1 + 0x90)
                    v0.d = v0.d f* *(x4_1 + 0xa0)
                    float v17 = v2 * *(x4_1 + 0x98)
                    v0.d = v0.d f+ v1 * *(x4_1 + 0xa4)
                    v0.d = v0.d f+ v2 * *(x4_1 + 0xa8)
                    v2 = *(x4_1 + 0x8c) + v3 + v1 * *(x4_1 + 0x84) + v2 * *(x4_1 + 0x88)
                    v1 = *(x4_1 + 0x9c) + v7 + v1 * *(x4_1 + 0x94) + v17
                    v0.d = *(x4_1 + 0xac) f+ v0.d
                    x11_1 = 0
                    void* x3_1
                    
                    if (cond:0_1)
                        v3 = *(x4_1 + 0xc0)
                        x3_1 = x3_7 + x9_1 * 0xd8
                        
                        if (not(v3 < v2))
                            v3 = v2
                        
                        *(x4_1 + 0xc0) = v3
                        v3 = *(x3_1 + 0xc4)
                        float v4 = *(x3_1 + 0xc8)
                        float v5 = *(x3_1 + 0xcc)
                        float v6 = *(x3_1 + 0xd0)
                        
                        if (not(v3 < v1))
                            v3 = v1
                        
                        if (not(v4 f< v0.d))
                            v4 = v0.d
                        
                        *(x3_1 + 0xc4) = v3
                        *(x3_1 + 0xc8) = v4
                        v3 = *(x3_1 + 0xd4)
                        
                        if (v5 > v2)
                            v2 = v5
                        
                        if (v6 > v1)
                            v1 = v6
                        
                        if (v3 f> v0.d)
                            v0.d = v3
                        else
                            v0.d = v0.d
                    else
                        x3_1 = x3_7 + x9_1 * 0xd8
                        *(x4_1 + 0xc0) = v2
                        *(x3_1 + 0xc4) = v1
                        *(x3_1 + 0xc8) = v0.d
                    
                    *(x3_1 + 0xcc) = v2
                    *(x3_1 + 0xd0) = v1
                    *(x3_1 + 0xd4) = v0.d
                
                k += 8
            while (k != 0x20)
            
            j += 1
        while (j s< sx.q(*(x16_1 + i * 0x150 + 0x14)))
        
        x15 = *arg1
    
    i += 1
while (i s< sx.q(x15))
