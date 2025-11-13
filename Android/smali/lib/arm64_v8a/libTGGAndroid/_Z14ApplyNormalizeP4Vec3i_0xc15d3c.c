// 函数: _Z14ApplyNormalizeP4Vec3i
// 地址: 0xc15d3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

uint64_t i_6 = zx.q(arg2)
void* __offset(Vec3, 0x8) x9_1 = arg1 + 8
float v0 = float.s(0x461c4000)
float v1 = float.s(0xc61c4000)
uint64_t i_4 = i_6
float v2
uint64_t i

do
    v2 = *x9_1
    x9_1 += 0xc
    
    if (v2 > v1)
        v1 = v2
    
    if (v2 < v0)
        v0 = v2
    
    i = i_4
    i_4 -= 1
while (i != 1)

if (arg2 s< 1)
    return 

v1 = v1 - v0
int64_t i_7
float v3
float v4

if (arg2 u< 3)
    i_7 = 0
label_c15e20:
    int64_t i_3 = i_6 - i_7
    float* x9_3 = arg1 + i_7 * 0xc + 8
    int64_t i_1
    
    do
        v4 = (*x9_3 - v0) / v1
        v3 = fconvert.s(-1f)
        
        if (not(v4 <= 0f))
            v3 = fconvert.s(1f)
            
            if (not(v4 >= v3))
                v3 = v4 + v4 + fconvert.s(-1f)
        
        i_1 = i_3
        i_3 -= 1
        *x9_3 = v3
        x9_3 = &x9_3[3]
    while (i_1 != 1)
    return 

i_7 = i_6 & 0xfffffffe
void* x10_1 = arg1 + 0x14
v2 = fconvert.s(-1f)
v3 = fconvert.s(1f)
int64_t i_5 = i_7
int64_t i_2

do
    v4 = (*x10_1 - v0) / v1
    float v5 = (*(x10_1 - 0xc) - v0) / v1
    v4 - 0f
    float v6
    
    if (v4 > 0f)
        v6 = v4 + v4 + v2
    else
        v6 = v2
    
    bool v_1
    bool n_1
    
    if (v4 > 0f)
        v4 - v3
        v_1 = unimplemented  {fccmp s4, s3, #0x8, hi}
        n_1 = unimplemented  {fccmp s4, s3, #0x8, hi}
    else
        n_1 = true
        v_1 = false
    
    if (n_1 == v_1)
        v6 = v3
    
    v5 - 0f
    
    if (v5 > 0f)
        v4 = v5 + v5 + v2
    else
        v4 = v2
    
    bool v_2
    bool n_2
    
    if (v5 > 0f)
        v5 - v3
        v_2 = unimplemented  {fccmp s5, s3, #0x8, hi}
        n_2 = unimplemented  {fccmp s5, s3, #0x8, hi}
    else
        n_2 = true
        v_2 = false
    
    if (n_2 == v_2)
        v4 = v3
    
    *x10_1 = v6
    i_2 = i_5
    i_5 -= 2
    *(x10_1 - 0xc) = v4
    x10_1 += 0x18
while (i_2 != 2)

if (i_7 != i_6)
    goto label_c15e20
