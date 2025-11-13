// 函数: vorbis_book_init_encode
// 地址: 0x108434c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
arg1[3] = arg2
__builtin_memset(&arg1[4], 0, 0x40)
int64_t x1 = arg2[1]
arg1[1] = x1
arg1[2] = x1
*arg1 = *arg2
int64_t x0_1
double value
double v1
x0_1, value, v1 = _make_words(arg2[2], x1, 0, v0)
arg1[5] = x0_1
int64_t x21 = arg2[1]
uint64_t x8_2

if (x21 s< 1)
    x8_2 = 0
label_1084464:
    arg1[0xa].d = x8_2.d
    int64_t x8_3 = arg2[4]
    value = float.d(x8_3 & 0x1fffff)
    
    if (x8_3.d s< 0)
        value = fneg(value)
    
    int128_t v0_1 = ldexp((x8_3.d u>> 0x15 & 0x3ff) - 0x314, value)
    int64_t x8_5 = arg2[5]
    int128_t var_40 = v0_1
    v0_1.q = float.d(x8_5 & 0x1fffff)
    
    if (x8_5.d s< 0)
        v0_1.q = fneg(v0_1.q)
    else
        v0_1.q = v0_1.q
    
    float128 v0_2
    int128_t v1_2
    v0_2, v1_2 = ldexp((x8_5.d u>> 0x15 & 0x3ff) - 0x314, v0_1.q)
    v1_2:8.q = v0_2.q
    *(arg1 + 0x54) = vcvt_s32_f32(vrndx_f32(vcvt_f32_f64(v0_2, v1_2)))
    return 0

int64_t x22_1 = *arg2
value.d = float.s(sx.d(x21))
v1.d = float.s(sx.d(x22_1))
v1.d = fconvert.s(1f) f/ v1.d
uint64_t x8_1 = vcvtmd_s64_f64(pow(fconvert.d(value.d), fconvert.d(v1.d)))

x8_2 = x8_1 s> 1 ? x8_1 : 1

if (x22_1 s>= 1)
    goto label_1084410

while (true)
    int64_t x11_2 = 1
    int64_t x12_1 = 1
    
    if (1 s<= x21)
        break
    
    while (true)
        int64_t x11_1
        
        x11_1 = x11_2 s<= x21 ? 1 : -1
        
    label_1084404:
        x8_2 += x11_1
        
        if (x22_1 s< 1)
            break
        
    label_1084410:
        int64_t x13_1 = 0
        x12_1 = 1
        x11_2 = 1
    label_1084424:
        
        if (x21 s/ x8_2 s< x11_2)
            x11_1 = -1
            goto label_1084404
        
        x13_1 += 1
        
        if (0x7fffffffffffffff s/ (x8_2 + 1) s< x12_1)
            x12_1 = 0x7fffffffffffffff
        else
            x12_1 *= x8_2 + 1
        
        x11_2 *= x8_2
        
        if (x22_1 s> x13_1)
            goto label_1084424
        
        if (x11_2 s<= x21)
        label_1084454:
            
            if (x12_1 s> x21)
                goto label_1084464

goto label_1084454
