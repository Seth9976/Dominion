// 函数: _Z9FillSinksR7MeshMap
// 地址: 0xc163e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
void* __offset(MeshMap, 0x8) x9 = arg1 + 8
int32_t var_10010[0x4000]
float v0

do
    v0 = *(x9 - 8)
    
    if (v0 < float.s(0x3ccccccd) || v0 > float.s(0x3ffccccd))
        v0 = *x9
    else
        v0 = *(x9 - 4)
        
        if (v0 < float.s(0x3ccccccd))
            v0 = *x9
        else
            bool cond:0_1 = v0 <= float.s(0x3f79999a)
            v0 = fconvert.s(10f)
            
            if (not(cond:0_1))
                v0 = *x9
    
    *(&var_10010 + i) = v0
    i += 4
    x9 += 0xc
while (i != 0x10000)

int64_t x8 = 0
int32_t x16 = 0
float v1

while (true)
    v1 = var_10010[x8]
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
            float v2 = var_10010[sx.q(i_1)] f+ float.s(0x3727c5ac)
            
            if (v0 >= v2)
                var_10010[x8] = v0
                x15_2 = 1
                break
            
            if (not(v2 <= v0) && not(v1 <= v2))
                x15_2 = 1
                v1 = v2
                var_10010[x8] = v2
            
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

int64_t i_2 = 0
float* x9_1 = arg1 + 0x14

do
    float* x11_1 = &var_10010 + i_2
    v1 = x11_1[1]
    i_2 += 8
    x9_1[-3] = *x11_1
    *x9_1 = v1
    x9_1 = &x9_1[6]
while (i_2 != 0x10000)
