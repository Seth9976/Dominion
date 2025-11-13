// 函数: _Z16InflateRecursiveP9RTreeNode
// 地址: 0xfa4394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

do
    int64_t* x8_1 = *(arg1 + 0x20)
    int64_t* x9_1 = *(arg1 + 0x28)
    int128_t v0
    v0.q = *x8_1
    int128_t v1
    v1.q = *x9_1
    float v2 = x8_1[1].d
    float v3 = x9_1[1].d
    int128_t v4
    v4.q = *(x8_1 + 0xc)
    int128_t v7_1 = vcgt_f32(v1, v0)
    int128_t v5
    v5.q = *(x9_1 + 0xc)
    float v6 = *(x8_1 + 0x14)
    v0 = vbsl_s8(v7_1, v0, v1)
    v1.d = *(x9_1 + 0x14)
    int128_t v7_2 = vcgt_f32(v4, v5)
    
    if (not(v2 < v3))
        v2 = v3
    
    v4 = vbsl_s8(v7_2, v4, v5)
    
    if (v6 f> v1.d)
        v1.d = v6
    else
        v1.d = v1.d
    
    *arg1 = v0.q
    *(arg1 + 8) = v2
    *(arg1 + 0xc) = v4.q
    *(arg1 + 0x14) = v1.d
    arg1 = *(arg1 + 0x18)
while (arg1 != 0)

return arg1
