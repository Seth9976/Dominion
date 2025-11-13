// 函数: _Z15ApplyCleanCoastR7MapDataR7MeshMap
// 地址: 0xc16aa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_10010[0x4000]
float v1
float v2
float v3
float v4

for (int64_t i = 0; i != 0x4000; i += 1)
    v1 = *(arg2 + i * 0xc + 8)
    var_10010[i] = v1
    int64_t x17_1 = sx.q(*(arg2 + (i << 2) + 0xeffc0))
    int32_t j = *(arg2 + (x17_1 << 2) + 0xfffc0)
    
    if (j != 0xffffffff)
        int32_t x14_5 = 0
        int32_t x15_1 = 0
        void* x17_2 = arg2 + 0xfffc4 + (x17_1 << 2)
        v2 = 0f
        v3 = 0f
        
        do
            v4 = *(arg2 + muls.dp.d(j, 0xc) + 8)
            j = *x17_2
            x17_2 += 4
            v4 - 0f
            
            if (v3 > v4)
                v3 = v4
            
            x15_1 += v4 < 0f ? 1 : 0
            
            if (v2 < v4)
                v2 = v4
            
            x14_5 += v4 > 0f ? 1 : 0
        while (j != 0xffffffff)
        
        if (not(v3 >= 0f) && not(v2 <= 0f))
            if (x14_5 u<= x15_1)
                v2 = v3 - v1
            else
                v2 = v2 - v1
            
            var_10010[i] = v1 + v2 * fconvert.s(0.5f)

int64_t i_1 = 0
void* __offset(MeshMap, 0x14) x9 = arg2 + 0x14

do
    void* x11_1 = &var_10010 + i_1
    v1 = *(x11_1 + 4)
    i_1 += 8
    *(x9 - 0xc) = *x11_1
    *x9 = v1
    x9 += 0x18
while (i_1 != 0x10000)

for (int64_t i_2 = 0; i_2 != 0x4000; i_2 += 1)
    v1 = *(arg2 + i_2 * 0xc + 8)
    var_10010[i_2] = v1
    int64_t x17_3 = sx.q(*(arg2 + (i_2 << 2) + 0xeffc0))
    int32_t j_1 = *(arg2 + (x17_3 << 2) + 0xfffc0)
    
    if (j_1 != 0xffffffff)
        int32_t x14_10 = 0
        int32_t x15_2 = 0
        void* x17_4 = arg2 + 0xfffc4 + (x17_3 << 2)
        v2 = 0f
        v3 = 0f
        
        do
            v4 = *(arg2 + muls.dp.d(j_1, 0xc) + 8)
            j_1 = *x17_4
            x17_4 += 4
            v4 - 0f
            
            if (v3 > v4)
                v3 = v4
            
            x15_2 += v4 < 0f ? 1 : 0
            
            if (v2 < v4)
                v2 = v4
            
            x14_10 += v4 > 0f ? 1 : 0
        while (j_1 != 0xffffffff)
        
        if (not(v3 >= 0f) && not(v2 <= 0f))
            if (x14_10 u> x15_2)
                v2 = v2 - v1
            else
                v2 = v3 - v1
            
            var_10010[i_2] = v1 + v2 * fconvert.s(0.5f)

int64_t i_3 = 0
float* x9_1 = arg2 + 0x14

do
    void* x11_2 = &var_10010 + i_3
    v1 = *(x11_2 + 4)
    i_3 += 8
    x9_1[-3] = *x11_2
    *x9_1 = v1
    x9_1 = &x9_1[6]
while (i_3 != 0x10000)

for (int64_t i_4 = 0; i_4 != 0x4000; i_4 += 1)
    v1 = *(arg2 + i_4 * 0xc + 8)
    var_10010[i_4] = v1
    int64_t x17_5 = sx.q(*(arg2 + (i_4 << 2) + 0xeffc0))
    int32_t j_2 = *(arg2 + (x17_5 << 2) + 0xfffc0)
    
    if (j_2 != 0xffffffff)
        int32_t x14_15 = 0
        int32_t x15_3 = 0
        void* x17_6 = arg2 + 0xfffc4 + (x17_5 << 2)
        v2 = 0f
        v3 = 0f
        
        do
            v4 = *(arg2 + muls.dp.d(j_2, 0xc) + 8)
            j_2 = *x17_6
            x17_6 += 4
            v4 - 0f
            
            if (v3 > v4)
                v3 = v4
            
            x15_3 += v4 < 0f ? 1 : 0
            
            if (v2 < v4)
                v2 = v4
            
            x14_15 += v4 > 0f ? 1 : 0
        while (j_2 != 0xffffffff)
        
        if (not(v3 >= 0f) && not(v2 <= 0f))
            if (x14_15 u> x15_3)
                v2 = v2 - v1
            else
                v2 = v3 - v1
            
            var_10010[i_4] = v1 + v2 * fconvert.s(0.5f)

int64_t i_5 = 0
float* x9_2 = arg2 + 0x14

do
    float* x11_3 = &var_10010 + i_5
    v1 = x11_3[1]
    i_5 += 8
    x9_2[-3] = *x11_3
    *x9_2 = v1
    x9_2 = &x9_2[6]
while (i_5 != 0x10000)
