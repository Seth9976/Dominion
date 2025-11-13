// 函数: _Z10NextPosPOIfRK5RectFf
// 地址: 0xba3efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v3
v3.q = *arg2
int128_t v2
v2.q = *(arg2 + 8)
double v5 = vsub_f32(v2, v3)
float v6 = v5.d f+ v5:4.d
float v4 = v6 + v6
v3.d = v4 * arg1

if (not(v3.d f>= arg3))
    v2.d = arg3 / v4

if (not(v3.d f>= arg3) && v2.d f> arg1)
    return 

v2.d = v5.d f- arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3f40
    
    return 

label_ba3f40:

if (not(v3.d f>= v5.d))
    v2.d = v5.d f/ v4

if (not(v3.d f>= v5.d) && v2.d f> arg1)
    return 

v2.d = v5.d f+ arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3f68
    
    return 

label_ba3f68:
v2.d = v6 - arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3f84
    
    return 

label_ba3f84:

if (not(v3.d f>= v6))
    v2.d = v6 / v4

if (not(v3.d f>= v6) && v2.d f> arg1)
    return 

v2.d = v6 + arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3fac
    
    return 

label_ba3fac:
v6 = v5.d f+ v6
v2.d = v6 - arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3fcc
    
    return 

label_ba3fcc:

if (not(v3.d f>= v6))
    v2.d = v6 / v4

if (not(v3.d f>= v6) && v2.d f> arg1)
    return 

v2.d = v6 + arg3

if (not(v3.d f>= v2.d))
    v2.d = v2.d f/ v4
    
    if (not(v2.d f> arg1))
        goto label_ba3ff4
    
    return 

label_ba3ff4:
v2.d = v5:4.d
v5.d = v2.d f+ v6
arg3 = v5.d f- arg3

if (not(v3.d f>= arg3))
    v2.d = arg3 / v4

if (not(v3.d f>= arg3) && not(v2.d f<= arg1))
    return 

if (v5.d f/ v4 > arg1)
    v3.d f- v5.d
    unimplemented  {fccmp s3, s5, #0, hi}
