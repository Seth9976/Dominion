// 函数: _ZNKSt6__ndk15ctypeIwE9do_narrowEPKwS3_cPc
// 地址: 0x10cec90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
wchar_t const* x0 = arg2

if (arg2 == arg3)
    return x0

void* entry_x4

if (arg3 - x0 - 4 u< 0x1c)
label_10ced50:
    
    do
        wchar_t const x8_5 = *x0
        x0 = &x0[1]
        char x8_6
        
        if (x8_5 u> 0x7f)
            x8_6 = arg4.b
        else
            x8_6 = x8_5.b
        
        *entry_x4 = x8_6
        entry_x4 += 1
    while (arg3 != x0)
else
    int64_t x8_4 = ((arg3 - x0 - 4) u>> 2) + 1
    
    if (&x0[x8_4] u> entry_x4 && entry_x4 + x8_4 u> x0)
        goto label_10ced50
    
    int64_t i_2 = x8_4 & 0x7ffffffffffffff8
    int128_t v0
    v0.w = (arg4.d).w
    v0:2.w = (arg4.d).w
    v0:4.w = (arg4.d).w
    v0:6.w = (arg4.d).w
    void* x10_1 = &x0[4]
    void* x11_1 = entry_x4 + 4
    entry_x4 += i_2
    x0 = &x0[i_2]
    uint128_t v1
    v1.d = 0x7f
    v1:4.d = 0x7f
    v1:8.d = 0x7f
    v1:0xc.d = 0x7f
    int64_t i_1 = i_2
    int64_t i
    
    do
        uint128_t v2 = *(x10_1 - 0x10)
        uint128_t v3 = *x10_1
        x10_1 += 0x20
        i = i_1
        i_1 -= 8
        uint128_t v4_1 = vcgtq_u32(v2, v1)
        uint128_t v5_1 = vcgtq_u32(v3, v1)
        int128_t v2_1 = vmovn_s32(v2)
        int128_t v3_1 = vmovn_s32(v3)
        int128_t v4_2 = vmovn_s32(v4_1)
        int128_t v5_2 = vmovn_s32(v5_1)
        uint128_t v2_2 = vbsl_s8(v4_2, v0, v2_1)
        uint128_t v3_2 = vbsl_s8(v5_2, v0, v3_1)
        vmovn_s16(v2_2)
        v2:4.d = vmovn_s16(v3_2).d
        *(x11_1 - 4) = v2.q
        x11_1 += 8
    while (i != 8)
    
    if (x8_4 != i_2)
        goto label_10ced50
return arg3
