// 函数: _ZNKSt6__ndk15ctypeIcE9do_narrowEPKcS3_cPc
// 地址: 0x10cf234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* x0 = arg2

if (arg2 == arg3)
    return x0

void* x8_1 = arg3 - x0
void* entry_x4

if (x8_1 u< 8 || (entry_x4 u< arg3 && entry_x4 + x8_1 u> x0))
    goto label_10cf308

void* i_4
uint128_t v0
uint128_t v1

if (x8_1 u>= 0x10)
    i_4 = x8_1 & 0xfffffffffffffff0
    v0.b = (arg4.d).b
    v0:1.b = (arg4.d).b
    v0:2.b = (arg4.d).b
    v0:3.b = (arg4.d).b
    v0:4.b = (arg4.d).b
    v0:5.b = (arg4.d).b
    v0:6.b = (arg4.d).b
    v0:7.b = (arg4.d).b
    v0:8.b = (arg4.d).b
    v0:9.b = (arg4.d).b
    v0:0xa.b = (arg4.d).b
    v0:0xb.b = (arg4.d).b
    v0:0xc.b = (arg4.d).b
    v0:0xd.b = (arg4.d).b
    v0:0xe.b = (arg4.d).b
    v0:0xf.b = (arg4.d).b
    void* i_3 = i_4
    void* x11_1 = entry_x4
    char const* x12_1 = x0
    void* i
    
    do
        v1 = *x12_1
        x12_1 = &x12_1[0x10]
        i = i_3
        i_3 -= 0x10
        *x11_1 = vbslq_s8(vcltzq_s8(v1), v0, v1)
        x11_1 += 0x10
    while (i != 0x10)
    
    if (x8_1 != i_4)
        if ((x8_1.d & 8) != 0)
            goto label_10cf2b8
        
        x0 += i_4
        entry_x4 += i_4
    label_10cf308:
        
        do
            int32_t x8_2 = sx.d(*x0)
            x0 = &x0[1]
            char x8_3
            
            if (x8_2 s< 0)
                x8_3 = arg4.b
            else
                x8_3 = x8_2.b
            
            *entry_x4 = x8_3
            entry_x4 += 1
        while (arg3 != x0)
else
    i_4 = nullptr
label_10cf2b8:
    void* x10_1 = x8_1 & 0xfffffffffffffff8
    v0.b = (arg4.d).b
    v0:1.b = (arg4.d).b
    v0:2.b = (arg4.d).b
    v0:3.b = (arg4.d).b
    v0:4.b = (arg4.d).b
    v0:5.b = (arg4.d).b
    v0:6.b = (arg4.d).b
    v0:7.b = (arg4.d).b
    void* x11_2 = x0 + i_4
    void* x12_2 = entry_x4 + i_4
    entry_x4 += x10_1
    x0 += x10_1
    void* i_2 = i_4 - x10_1
    void* i_1
    
    do
        v1.q = *x11_2
        x11_2 += 8
        i_1 = i_2
        i_2 += 8
        *x12_2 = vbsl_s8(vcltz_s8(v1), v0, v1).q
        x12_2 += 8
    while (i_1 != -8)
    
    if (x8_1 != x10_1)
        goto label_10cf308
return arg3
