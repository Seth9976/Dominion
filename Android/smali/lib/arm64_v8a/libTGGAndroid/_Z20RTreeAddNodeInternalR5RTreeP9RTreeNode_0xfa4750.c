// 函数: _Z20RTreeAddNodeInternalR5RTreeP9RTreeNode
// 地址: 0xfa4750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RTreeNode* x0 = FindBestInsertionNeighbor(arg1, arg2)
int64_t* i = *(x0 + 0x18)
int64_t x21

if (i[4] == x0)
    x21 = 0x20
else
    x21 = 0x28

void* x0_2
int128_t v0
int128_t v1
int128_t v4
int128_t v5
x0_2, v0, v1, v4, v5 = BranchNodeCreate(arg2, x0)
*(i + x21) = x0_2
*(x0_2 + 0x18) = i

do
    int64_t* x8_1 = i[4]
    int64_t* x9_1 = i[5]
    v0.q = *x8_1
    v1.q = *x9_1
    float v2_1 = x8_1[1].d
    float v3_1 = x9_1[1].d
    v4.q = *(x8_1 + 0xc)
    int128_t v7_1 = vcgt_f32(v1, v0)
    v5.q = *(x9_1 + 0xc)
    float v6_1 = *(x8_1 + 0x14)
    v0 = vbsl_s8(v7_1, v0, v1)
    v1.d = *(x9_1 + 0x14)
    int128_t v7_2 = vcgt_f32(v4, v5)
    
    if (not(v2_1 < v3_1))
        v2_1 = v3_1
    
    v4 = vbsl_s8(v7_2, v4, v5)
    
    if (v6_1 f> v1.d)
        v1.d = v6_1
    else
        v1.d = v1.d
    
    *i = v0.q
    i[1].d = v2_1
    *(i + 0xc) = v4.q
    *(i + 0x14) = v1.d
    i = i[3]
while (i != 0)

return zx.q(arg2.d)
