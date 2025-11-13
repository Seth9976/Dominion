// 函数: _Z14GenerateRiversR7MapData
// 地址: 0xc177b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t entry_v0
int128_t v1
uint128_t v2
uint128_t v3
float128 v5

if (zx.d(*(arg1 + 0x175fcc)) == 0)
    int32_t var_10040[0x2000]
    
    for (int64_t i = 0; i != 0x4000; )
        int64_t x17_1 = i << 2
        var_10040[i] = i.d
        *(arg1 + x17_1 + 0x175fd0) = 0x38800000
        int64_t x17_3 = sx.q(*(arg1 + 0x10 + x17_1 + 0xeffc0))
        int32_t j = *(arg1 + 0x10 + (x17_3 << 2) + 0xfffc0)
        int32_t j_1
        
        if (j == 0xffffffff)
            j_1 = -1
        else
            void* x1_2 = arg1 + 0xfffd4 + (x17_3 << 2)
            j_1 = -1
            entry_v0.d = float.s(0x47c34f80)
            
            do
                v1.d = *(arg1 + muls.dp.d(j, 0xc) + 0x18)
                v1.d f- entry_v0.d
                
                if (not(v1.d f> entry_v0.d))
                    j_1 = j
                
                j = *x1_2
                x1_2 += 4
                
                if (v1.d f> entry_v0.d)
                    entry_v0.d = entry_v0.d
                else
                    entry_v0.d = v1.d
            while (j != 0xffffffff)
        
        void* x0 = arg1 + (i << 2)
        i += 1
        *(x0 + 0x185fd0) = j_1
    
    void* __offset(MapData, 0x10) var_38 = arg1 + 0x10
    int64_t __saved_fp
    entry_v0, v1, v2, v3, v5 = sub_c209e4(&var_10040, &__saved_fp, &var_38, entry_v0.d)
    
    for (int64_t i_1 = 0; i_1 != 0x10000; i_1 += 4)
        int64_t x11_1 = sx.q(*(&var_10040 + i_1))
        uint64_t x12_2 = zx.q(*(arg1 + (x11_1 << 2) + 0x185fd0))
        
        if ((x12_2.d & 0x80000000) == 0)
            entry_v0.d = *(arg1 + 0x175fd0 + (x11_1 << 2))
            uint64_t x11_2 = x12_2 << 2
            v1.d = *(arg1 + 0x175fd0 + x11_2)
            entry_v0.d = entry_v0.d f+ v1.d
            *(arg1 + 0x175fd0 + x11_2) = entry_v0.d
    
    *(arg1 + 0x175fcc) = 1

*(arg1 + 0x215fd4) = 0
entry_v0.d = *(arg1 + 0x195fd0)

if (not(entry_v0.d f!= 0f))
    void* __offset(MapData, 0x48) x9_1 = arg1 + 0x48
    entry_v0.q = 0
    entry_v0:8.q = 0
    int64_t i_5 = 0x3ff8
    v1.q = 0
    v1:8.q = 0
    int64_t i_2
    
    do
        v2.d = *x9_1
        v3.d = *(x9_1 + 4)
        *(x9_1 + 8)
        v2:4.d = *(x9_1 + 0xc)
        v3:4.d = *(x9_1 + 0x10)
        *(x9_1 + 0x14)
        v2:8.d = *(x9_1 + 0x18)
        v3:8.d = *(x9_1 + 0x1c)
        *(x9_1 + 0x20)
        v2:0xc.d = *(x9_1 + 0x24)
        v3:0xc.d = *(x9_1 + 0x28)
        *(x9_1 + 0x2c)
        v5.d = *(x9_1 - 0x30)
        *(x9_1 - 0x2c)
        *(x9_1 - 0x28)
        v5:4.d = *(x9_1 - 0x24)
        *(x9_1 - 0x20)
        *(x9_1 - 0x1c)
        v5:8.d = *(x9_1 - 0x18)
        *(x9_1 - 0x14)
        *(x9_1 - 0x10)
        v5:0xc.d = *(x9_1 - 0xc)
        *(x9_1 - 8)
        *(x9_1 - 4)
        i_2 = i_5
        i_5 -= 8
        x9_1 += 0x60
        v1 -= vcgtzq_f32(v2, 0)
        entry_v0 -= vcgtzq_f32(v5, 0)
    while (i_2 != 8)
    entry_v0 += v1
    v1.d = *(arg1 + 0x2ffb8)
    entry_v0.d = vaddvq_u32(entry_v0)
    int32_t x9_2 = entry_v0.d
    entry_v0.d = *(arg1 + 0x2ffc4)
    bool cond:1_1 = v1.d f> 0f
    v1.d = *(arg1 + 0x2ffd0)
    bool cond:2_1 = entry_v0.d f> 0f
    entry_v0.d = *(arg1 + 0x2ffdc)
    bool cond:3_1 = v1.d f> 0f
    v1.d = *(arg1 + 0x2ffe8)
    bool cond:4_1 = entry_v0.d f> 0f
    entry_v0.d = *(arg1 + 0x2fff4)
    bool cond:5_1 = v1.d f> 0f
    v1.d = *(arg1 + 0x30000)
    bool cond:6_1 = entry_v0.d f> 0f
    entry_v0.d = *(arg1 + 0x3000c)
    bool cond:7_1 = v1.d f> 0f
    v1.d = float.s(0x38800000)
    entry_v0.d = float.s(x9_2 + (cond:1_1 ? 1 : 0) + (cond:2_1 ? 1 : 0) + (cond:3_1 ? 1 : 0)
        + (cond:4_1 ? 1 : 0) + (cond:5_1 ? 1 : 0) + (cond:6_1 ? 1 : 0) + (cond:7_1 ? 1 : 0)
        + (entry_v0.d f> 0f ? 1 : 0))
    entry_v0.d = entry_v0.d f* v1.d
    v1.d = float.s(0x3c23d70a)
    entry_v0.d = entry_v0.d f* v1.d
    *(arg1 + 0x195fd0) = entry_v0.d

void* __offset(MapData, 0x18) x8_11 = arg1 + 0x18
int64_t i_4 = -0x4000
entry_v0.d = fconvert.s(4f)
void* __offset(MapData, 0x185fd0) result = arg1 + 0x185fd0
int64_t i_3

do
    uint64_t x2_3 = zx.q(*result)
    
    if ((x2_3.d & 0x80000000) == 0)
        v1.d = *(x8_11 - 8)
        v2.d = float.s(0x3ccccccd)
        
        if (not(v1.d f< v2.d))
            v2.d = float.s(0x3ffccccd)
            
            if (not(v1.d f> v2.d))
                v2.d = *(x8_11 - 4)
                v3.d = float.s(0x3ccccccd)
                
                if (not(v2.d f< v3.d))
                    v3.d = float.s(0x3f79999a)
                    
                    if (not(v2.d f> v3.d))
                        v3.d = *(arg1 + x2_3 * 0xc + 0x10)
                        
                        if (not(v3.d f< float.s(0x3ccccccd)) && not(v3.d f> float.s(0x3ffccccd)))
                            float v4 = *(arg1 + x2_3 * 0xc + 0x14)
                            v5.d = float.s(0x3ccccccd)
                            
                            if (not(v4 f< v5.d))
                                v5.d = float.s(0x3f79999a)
                                
                                if (not(v4 f> v5.d))
                                    v5.d = *(result - 0x10000)
                                    
                                    if (not(v5.d f<= *(arg1 + 0x195fd0)) && not(*x8_11 <= 0f)
                                            && not(*(arg1 + x2_3 * 0xc + 0x18) <= 0f))
                                        int64_t x3_4 = sx.q(*(arg1 + 0x215fd4))
                                        float v7 = *(arg1 + (x2_3 << 2) + 0x175fd0)
                                        float v6 = float.s(0x44800000)
                                        *(arg1 + 0x215fd4) = x3_4.d + 1
                                        v1.d = v1.d f* v6
                                        v2.d = v2.d f* v6
                                        v3.d = v3.d f* v6
                                        v4 = v4 * v6
                                        v6 = float.s(0x42480000)
                                        int32_t x3_6 = *result
                                        v5.d = v5.d f* v6
                                        v5.d = vmin_f32(v5.d, entry_v0.d)
                                        float temp0_3 = vmin_f32(v7 * v6, entry_v0.d)
                                        v5.d = sqrt(v5.d)
                                        *(arg1 + (x3_4 << 5) + 0x195fd4) = v1.d
                                        *(arg1 + (x3_4 << 5) + 0x195fd8) = v2.d
                                        v1.d = sqrt(temp0_3)
                                        *(arg1 + (x3_4 << 5) + 0x195fdc) = v5.d
                                        *(arg1 + (x3_4 << 5) + 0x195fe0) = i_4.d + 0x4000
                                        *(arg1 + (x3_4 << 5) + 0x195fe4) = v3.d
                                        *(arg1 + (x3_4 << 5) + 0x195fe8) = v4
                                        *(arg1 + (x3_4 << 5) + 0x195fec) = v1.d
                                        *(arg1 + (x3_4 << 5) + 0x195ff0) = x3_6
    
    i_3 = i_4
    i_4 += 1
    result += 4
    x8_11 += 0xc
while (i_3 u< -1)
return result
