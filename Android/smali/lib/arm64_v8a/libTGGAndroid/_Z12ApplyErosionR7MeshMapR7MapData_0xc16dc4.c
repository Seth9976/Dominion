// 函数: _Z12ApplyErosionR7MeshMapR7MapData
// 地址: 0xc16dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_10040
void* x9 = &var_10040
float v0

for (int64_t i = 0; i != 0x30000; )
    v0 = *(arg1 + i)
    
    if (v0 < float.s(0x3ccccccd) || v0 > float.s(0x3ffccccd))
        v0 = *(arg1 + i + 8)
    else
        v0 = *(arg1 + i + 4)
        
        if (v0 < float.s(0x3ccccccd))
            v0 = *(arg1 + i + 8)
        else
            bool cond:0_1 = v0 <= float.s(0x3f79999a)
            v0 = fconvert.s(10f)
            
            if (not(cond:0_1))
                v0 = *(arg1 + i + 8)
    
    i += 0xc
    *x9 = v0
    x9 += 4

int64_t x8 = 0
int32_t x16 = 0
float v1

while (true)
    v1 = *(&var_10040 + (x8 << 2))
    v0 = *(arg1 + x8 * 0xc + 8)
    int32_t i_1
    int64_t x15_4
    
    if (v1 != v0)
        x15_4 = sx.q(*(arg1 + (x8 << 2) + 0xeffc0))
        i_1 = *(arg1 + (x15_4 << 2) + 0xfffc0)
    
    int32_t x15_2
    
    if (not(v1 != v0) || i_1 == 0xffffffff)
        x15_2 = x16
    else
        void* x17_2 = arg1 + 0xfffc4 + (x15_4 << 2)
        x15_2 = x16
        
        do
            float v2 = *(&var_10040 + (sx.q(i_1) << 2)) + float.s(0x3727c5ac)
            
            if (v0 >= v2)
                *(&var_10040 + (x8 << 2)) = v0
                x15_2 = 1
                break
            
            if (not(v2 <= v0) && not(v1 <= v2))
                x15_2 = 1
                v1 = v2
                *(&var_10040 + (x8 << 2)) = v2
            
            i_1 = *x17_2
            x17_2 += 4
        while (i_1 != 0xffffffff)
    
    bool cond:3_1 = x8 != 0x3fff
    int32_t x16_2 = x8 != 0x3fff ? 1 : 0
    
    if (x8 == 0x3fff)
        x8 = 0
    else
        x8 += 1
    
    x16 = x16_2 & x15_2
    
    if (not(cond:3_1))
        if ((x15_2 & 1) == 0)
            break

int64_t i_2 = 0x14
void var_1003c
void* x9_1 = &var_1003c

do
    v0 = *(x9_1 - 4)
    v1 = *x9_1
    float* x11_1 = arg1 + i_2
    i_2 += 0x18
    x9_1 += 8
    x11_1[-3] = v0
    *x11_1 = v1
while (i_2 != 0x30014)

float128 v0_1
float128 v1_1
float128 v2_1
int128_t v4
v0_1, v1_1, v2_1, v4 = ErosionRate(arg1, &var_10040, arg2)
void* __offset(MeshMap, 0x20) x8_1 = arg1 + 0x20
int64_t i_17 = -0xfff0
v0_1.d = 0xbdcccccd
v0_1:4.d = 0xbdcccccd
v0_1:8.d = 0xbdcccccd
v0_1:0xc.d = 0xbdcccccd
int64_t i_3

do
    v2_1.d = *(x8_1 - 0x18)
    *(x8_1 - 0x14)
    v4.d = *(x8_1 - 0x10)
    v2_1:4.d = *(x8_1 - 0xc)
    *(x8_1 - 8)
    v4:4.d = *(x8_1 - 4)
    v2_1:8.d = *x8_1
    *(x8_1 + 4)
    v4:8.d = *(x8_1 + 8)
    v2_1:0xc.d = *(x8_1 + 0xc)
    *(x8_1 + 0x10)
    v4:0xc.d = *(x8_1 + 0x14)
    void* __offset(MeshMap, 0x2c) x10_2 = x8_1 + 0xc
    v1_1 = vaddq_f32(v2_1, vmulq_f32(*(&var_10040 + i_17 + 0xfff0), v0_1, 0))
    i_3 = i_17
    i_17 += 0x10
    *(x8_1 - 0x18) = v1_1.d
    *(x8_1 - 0xc) = v1_1:4.d
    *x8_1 = v1_1:8.d
    x8_1 += 0x30
    *x10_2 = v1_1:0xc.d
while (i_3 != -0x10)
int32_t var_50
v0_1.d = var_50
v1_1.d = *(arg1 + 0x2ffd8)
v2_1.d = float.s(0x3dcccccd)
v0_1.d = v0_1.d f* v2_1.d
v0_1.d = v1_1.d f- v0_1.d
*(arg1 + 0x2ffd8) = v0_1.d
int32_t var_4c
v0_1.d = var_4c
v1_1.d = *(arg1 + 0x2ffe4)
v0_1.d = v0_1.d f* v2_1.d
v0_1.d = v1_1.d f- v0_1.d
*(arg1 + 0x2ffe4) = v0_1.d
int32_t var_48
v0_1.d = var_48
v1_1.d = *(arg1 + 0x2fff0)
int64_t i_4 = 0
v0_1.d = v0_1.d f* v2_1.d
v0_1.d = v1_1.d f- v0_1.d
*(arg1 + 0x2fff0) = v0_1.d
int32_t var_44
v0_1.d = var_44
v1_1.d = *(arg1 + 0x2fffc)
void* x9_2 = &var_10040
v0_1.d = v0_1.d f* v2_1.d
v0_1.d = v1_1.d f- v0_1.d
*(arg1 + 0x2fffc) = v0_1.d

do
    v0_1.d = *(arg1 + i_4)
    v1_1.d = float.s(0x3ccccccd)
    
    if (v0_1.d f< v1_1.d)
        v0_1.d = *(arg1 + i_4 + 8)
    else
        v1_1.d = float.s(0x3ffccccd)
        
        if (v0_1.d f> v1_1.d)
            v0_1.d = *(arg1 + i_4 + 8)
        else
            v0_1.d = *(arg1 + i_4 + 4)
            v1_1.d = float.s(0x3ccccccd)
            
            if (v0_1.d f< v1_1.d)
                v0_1.d = *(arg1 + i_4 + 8)
            else
                v1_1.d = float.s(0x3f79999a)
                bool cond:6_1 = v0_1.d f<= v1_1.d
                v0_1.d = fconvert.s(10f)
                
                if (not(cond:6_1))
                    v0_1.d = *(arg1 + i_4 + 8)
    
    i_4 += 0xc
    *x9_2 = v0_1.d
    x9_2 += 4
while (i_4 != 0x30000)

int64_t x8_2 = 0
int32_t x16_3 = 0

while (true)
    v1_1.d = *(&var_10040 + (x8_2 << 2))
    v0_1.d = *(arg1 + x8_2 * 0xc + 8)
    int32_t i_5
    int64_t x15_8
    
    if (v1_1.d f!= v0_1.d)
        x15_8 = sx.q(*(arg1 + (x8_2 << 2) + 0xeffc0))
        i_5 = *(arg1 + (x15_8 << 2) + 0xfffc0)
    
    int32_t x15_6
    
    if (not(v1_1.d f!= v0_1.d) || i_5 == 0xffffffff)
        x15_6 = x16_3
    else
        void* x17_4 = arg1 + 0xfffc4 + (x15_8 << 2)
        x15_6 = x16_3
        
        do
            v2_1.d = *(&var_10040 + (sx.q(i_5) << 2))
            v2_1.d = v2_1.d f+ float.s(0x3727c5ac)
            
            if (v0_1.d f>= v2_1.d)
                *(&var_10040 + (x8_2 << 2)) = v0_1.d
                x15_6 = 1
                break
            
            if (not(v2_1.d f<= v0_1.d) && not(v1_1.d f<= v2_1.d))
                x15_6 = 1
                v1_1 = v2_1
                *(&var_10040 + (x8_2 << 2)) = v2_1.d
            
            i_5 = *x17_4
            x17_4 += 4
        while (i_5 != 0xffffffff)
    
    bool cond:9_1 = x8_2 != 0x3fff
    int32_t x16_5 = x8_2 != 0x3fff ? 1 : 0
    
    if (x8_2 == 0x3fff)
        x8_2 = 0
    else
        x8_2 += 1
    
    x16_3 = x16_5 & x15_6
    
    if (not(cond:9_1))
        if ((x15_6 & 1) == 0)
            break

int64_t i_6 = 0x14
void* x9_3 = &var_1003c

do
    v0_1.d = *(x9_3 - 4)
    v1_1.d = *x9_3
    int32_t* x11_3 = arg1 + i_6
    i_6 += 0x18
    x9_3 += 8
    x11_3[-3] = v0_1.d
    *x11_3 = v1_1.d
while (i_6 != 0x30014)

float128 v0_2
float128 v1_3
float128 v2_2
int128_t v4_1
v0_2, v1_3, v2_2, v4_1 = ErosionRate(arg1, &var_10040, arg2)
void* __offset(MeshMap, 0x20) x8_3 = arg1 + 0x20
int64_t i_18 = -0xfff0
v0_2.d = 0xbdcccccd
v0_2:4.d = 0xbdcccccd
v0_2:8.d = 0xbdcccccd
v0_2:0xc.d = 0xbdcccccd
int64_t i_7

do
    v2_2.d = *(x8_3 - 0x18)
    *(x8_3 - 0x14)
    v4_1.d = *(x8_3 - 0x10)
    v2_2:4.d = *(x8_3 - 0xc)
    *(x8_3 - 8)
    v4_1:4.d = *(x8_3 - 4)
    v2_2:8.d = *x8_3
    *(x8_3 + 4)
    v4_1:8.d = *(x8_3 + 8)
    v2_2:0xc.d = *(x8_3 + 0xc)
    *(x8_3 + 0x10)
    v4_1:0xc.d = *(x8_3 + 0x14)
    void* __offset(MeshMap, 0x2c) x10_4 = x8_3 + 0xc
    v1_3 = vaddq_f32(v2_2, vmulq_f32(*(&var_10040 + i_18 + 0xfff0), v0_2, 0))
    i_7 = i_18
    i_18 += 0x10
    *(x8_3 - 0x18) = v1_3.d
    *(x8_3 - 0xc) = v1_3:4.d
    *x8_3 = v1_3:8.d
    x8_3 += 0x30
    *x10_4 = v1_3:0xc.d
while (i_7 != -0x10)
v0_2.d = var_50
v1_3.d = *(arg1 + 0x2ffd8)
v2_2.d = float.s(0x3dcccccd)
v0_2.d = v0_2.d f* v2_2.d
v0_2.d = v1_3.d f- v0_2.d
*(arg1 + 0x2ffd8) = v0_2.d
v0_2.d = var_4c
v1_3.d = *(arg1 + 0x2ffe4)
v0_2.d = v0_2.d f* v2_2.d
v0_2.d = v1_3.d f- v0_2.d
*(arg1 + 0x2ffe4) = v0_2.d
v0_2.d = var_48
v1_3.d = *(arg1 + 0x2fff0)
int64_t i_8 = 0
v0_2.d = v0_2.d f* v2_2.d
v0_2.d = v1_3.d f- v0_2.d
*(arg1 + 0x2fff0) = v0_2.d
v0_2.d = var_44
v1_3.d = *(arg1 + 0x2fffc)
void* x9_4 = &var_10040
v0_2.d = v0_2.d f* v2_2.d
v0_2.d = v1_3.d f- v0_2.d
*(arg1 + 0x2fffc) = v0_2.d

do
    v0_2.d = *(arg1 + i_8)
    v1_3.d = float.s(0x3ccccccd)
    
    if (v0_2.d f< v1_3.d)
        v0_2.d = *(arg1 + i_8 + 8)
    else
        v1_3.d = float.s(0x3ffccccd)
        
        if (v0_2.d f> v1_3.d)
            v0_2.d = *(arg1 + i_8 + 8)
        else
            v0_2.d = *(arg1 + i_8 + 4)
            v1_3.d = float.s(0x3ccccccd)
            
            if (v0_2.d f< v1_3.d)
                v0_2.d = *(arg1 + i_8 + 8)
            else
                v1_3.d = float.s(0x3f79999a)
                bool cond:12_1 = v0_2.d f<= v1_3.d
                v0_2.d = fconvert.s(10f)
                
                if (not(cond:12_1))
                    v0_2.d = *(arg1 + i_8 + 8)
    
    i_8 += 0xc
    *x9_4 = v0_2.d
    x9_4 += 4
while (i_8 != 0x30000)

int64_t x8_4 = 0
int32_t x16_6 = 0

while (true)
    v1_3.d = *(&var_10040 + (x8_4 << 2))
    v0_2.d = *(arg1 + x8_4 * 0xc + 8)
    int32_t i_9
    int64_t x15_12
    
    if (v1_3.d f!= v0_2.d)
        x15_12 = sx.q(*(arg1 + (x8_4 << 2) + 0xeffc0))
        i_9 = *(arg1 + (x15_12 << 2) + 0xfffc0)
    
    int32_t x15_10
    
    if (not(v1_3.d f!= v0_2.d) || i_9 == 0xffffffff)
        x15_10 = x16_6
    else
        void* x17_6 = arg1 + 0xfffc4 + (x15_12 << 2)
        x15_10 = x16_6
        
        do
            v2_2.d = *(&var_10040 + (sx.q(i_9) << 2))
            v2_2.d = v2_2.d f+ float.s(0x3727c5ac)
            
            if (v0_2.d f>= v2_2.d)
                *(&var_10040 + (x8_4 << 2)) = v0_2.d
                x15_10 = 1
                break
            
            if (not(v2_2.d f<= v0_2.d) && not(v1_3.d f<= v2_2.d))
                x15_10 = 1
                v1_3 = v2_2
                *(&var_10040 + (x8_4 << 2)) = v2_2.d
            
            i_9 = *x17_6
            x17_6 += 4
        while (i_9 != 0xffffffff)
    
    bool cond:15_1 = x8_4 != 0x3fff
    int32_t x16_8 = x8_4 != 0x3fff ? 1 : 0
    
    if (x8_4 == 0x3fff)
        x8_4 = 0
    else
        x8_4 += 1
    
    x16_6 = x16_8 & x15_10
    
    if (not(cond:15_1))
        if ((x15_10 & 1) == 0)
            break

int64_t i_10 = 0x14
void* x9_5 = &var_1003c

do
    v0_2.d = *(x9_5 - 4)
    v1_3.d = *x9_5
    int32_t* x11_5 = arg1 + i_10
    i_10 += 0x18
    x9_5 += 8
    x11_5[-3] = v0_2.d
    *x11_5 = v1_3.d
while (i_10 != 0x30014)

float128 v0_3
float128 v1_5
float128 v2_3
int128_t v4_2
v0_3, v1_5, v2_3, v4_2 = ErosionRate(arg1, &var_10040, arg2)
void* __offset(MeshMap, 0x20) x8_5 = arg1 + 0x20
int64_t i_19 = -0xfff0
v0_3.d = 0xbdcccccd
v0_3:4.d = 0xbdcccccd
v0_3:8.d = 0xbdcccccd
v0_3:0xc.d = 0xbdcccccd
int64_t i_11

do
    v2_3.d = *(x8_5 - 0x18)
    *(x8_5 - 0x14)
    v4_2.d = *(x8_5 - 0x10)
    v2_3:4.d = *(x8_5 - 0xc)
    *(x8_5 - 8)
    v4_2:4.d = *(x8_5 - 4)
    v2_3:8.d = *x8_5
    *(x8_5 + 4)
    v4_2:8.d = *(x8_5 + 8)
    v2_3:0xc.d = *(x8_5 + 0xc)
    *(x8_5 + 0x10)
    v4_2:0xc.d = *(x8_5 + 0x14)
    void* __offset(MeshMap, 0x2c) x10_6 = x8_5 + 0xc
    v1_5 = vaddq_f32(v2_3, vmulq_f32(*(&var_10040 + i_19 + 0xfff0), v0_3, 0))
    i_11 = i_19
    i_19 += 0x10
    *(x8_5 - 0x18) = v1_5.d
    *(x8_5 - 0xc) = v1_5:4.d
    *x8_5 = v1_5:8.d
    x8_5 += 0x30
    *x10_6 = v1_5:0xc.d
while (i_11 != -0x10)
v0_3.d = var_50
v1_5.d = *(arg1 + 0x2ffd8)
v2_3.d = float.s(0x3dcccccd)
v0_3.d = v0_3.d f* v2_3.d
v0_3.d = v1_5.d f- v0_3.d
*(arg1 + 0x2ffd8) = v0_3.d
v0_3.d = var_4c
v1_5.d = *(arg1 + 0x2ffe4)
v0_3.d = v0_3.d f* v2_3.d
v0_3.d = v1_5.d f- v0_3.d
*(arg1 + 0x2ffe4) = v0_3.d
v0_3.d = var_48
v1_5.d = *(arg1 + 0x2fff0)
int64_t i_12 = 0
v0_3.d = v0_3.d f* v2_3.d
v0_3.d = v1_5.d f- v0_3.d
*(arg1 + 0x2fff0) = v0_3.d
v0_3.d = var_44
v1_5.d = *(arg1 + 0x2fffc)
void* x9_6 = &var_10040
v0_3.d = v0_3.d f* v2_3.d
v0_3.d = v1_5.d f- v0_3.d
*(arg1 + 0x2fffc) = v0_3.d

do
    v0_3.d = *(arg1 + i_12)
    v1_5.d = float.s(0x3ccccccd)
    
    if (v0_3.d f< v1_5.d)
        v0_3.d = *(arg1 + i_12 + 8)
    else
        v1_5.d = float.s(0x3ffccccd)
        
        if (v0_3.d f> v1_5.d)
            v0_3.d = *(arg1 + i_12 + 8)
        else
            v0_3.d = *(arg1 + i_12 + 4)
            v1_5.d = float.s(0x3ccccccd)
            
            if (v0_3.d f< v1_5.d)
                v0_3.d = *(arg1 + i_12 + 8)
            else
                v1_5.d = float.s(0x3f79999a)
                bool cond:18_1 = v0_3.d f<= v1_5.d
                v0_3.d = fconvert.s(10f)
                
                if (not(cond:18_1))
                    v0_3.d = *(arg1 + i_12 + 8)
    
    i_12 += 0xc
    *x9_6 = v0_3.d
    x9_6 += 4
while (i_12 != 0x30000)

int64_t x8_6 = 0
int32_t x16_9 = 0

while (true)
    v1_5.d = *(&var_10040 + (x8_6 << 2))
    v0_3.d = *(arg1 + x8_6 * 0xc + 8)
    int32_t i_13
    int64_t x15_16
    
    if (v1_5.d f!= v0_3.d)
        x15_16 = sx.q(*(arg1 + (x8_6 << 2) + 0xeffc0))
        i_13 = *(arg1 + (x15_16 << 2) + 0xfffc0)
    
    int32_t x15_14
    
    if (not(v1_5.d f!= v0_3.d) || i_13 == 0xffffffff)
        x15_14 = x16_9
    else
        void* x17_8 = arg1 + 0xfffc4 + (x15_16 << 2)
        x15_14 = x16_9
        
        do
            v2_3.d = *(&var_10040 + (sx.q(i_13) << 2))
            v2_3.d = v2_3.d f+ float.s(0x3727c5ac)
            
            if (v0_3.d f>= v2_3.d)
                *(&var_10040 + (x8_6 << 2)) = v0_3.d
                x15_14 = 1
                break
            
            if (not(v2_3.d f<= v0_3.d) && not(v1_5.d f<= v2_3.d))
                x15_14 = 1
                v1_5 = v2_3
                *(&var_10040 + (x8_6 << 2)) = v2_3.d
            
            i_13 = *x17_8
            x17_8 += 4
        while (i_13 != 0xffffffff)
    
    bool cond:21_1 = x8_6 != 0x3fff
    int32_t x16_11 = x8_6 != 0x3fff ? 1 : 0
    
    if (x8_6 == 0x3fff)
        x8_6 = 0
    else
        x8_6 += 1
    
    x16_9 = x16_11 & x15_14
    
    if (not(cond:21_1))
        if ((x15_14 & 1) == 0)
            break

int64_t i_14 = 0x14
void* x9_7 = &var_1003c

do
    v0_3.d = *(x9_7 - 4)
    v1_5.d = *x9_7
    int32_t* x11_7 = arg1 + i_14
    i_14 += 0x18
    x9_7 += 8
    x11_7[-3] = v0_3.d
    *x11_7 = v1_5.d
while (i_14 != 0x30014)

int64_t i_15 = 0
*(arg2 + 0x175fcc) = 1

do
    int64_t x17_9 = i_15 << 2
    *(&var_10040 + x17_9) = i_15.d
    *(arg2 + x17_9 + 0x175fd0) = 0x38800000
    int64_t x17_11 = sx.q(*(arg1 + x17_9 + 0xeffc0))
    int32_t j = *(arg1 + (x17_11 << 2) + 0xfffc0)
    int32_t j_1
    
    if (j == 0xffffffff)
        j_1 = -1
    else
        void* x1_3 = arg1 + 0xfffc4 + (x17_11 << 2)
        j_1 = -1
        v0_3.d = float.s(0x47c34f80)
        
        do
            v1_5.d = *(arg1 + muls.dp.d(j, 0xc) + 8)
            v1_5.d f- v0_3.d
            
            if (not(v1_5.d f> v0_3.d))
                j_1 = j
            
            j = *x1_3
            x1_3 += 4
            
            if (v1_5.d f> v0_3.d)
                v0_3.d = v0_3.d
            else
                v0_3.d = v1_5.d
        while (j != 0xffffffff)
    
    void* x0_3 = arg2 + (i_15 << 2)
    i_15 += 1
    *(x0_3 + 0x185fd0) = j_1
while (i_15 != 0x4000)

MeshMap& var_38 = arg1
int64_t __saved_fp
int64_t result = sub_c209e4(&var_10040, &__saved_fp, &var_38, v0_3.d)

for (int64_t i_16 = 0; i_16 != 0x10000; i_16 += 4)
    int64_t x11_8 = sx.q(*(&var_10040 + i_16))
    uint64_t x12_5 = zx.q(*(arg2 + (x11_8 << 2) + 0x185fd0))
    
    if ((x12_5.d & 0x80000000) == 0)
        (arg2 + 0x175fd0)[x12_5] = (arg2 + 0x175fd0)[x11_8] + (arg2 + 0x175fd0)[x12_5]

return result
