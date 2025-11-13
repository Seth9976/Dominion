// 函数: _Z11RTreeUpdateR5RTree
// 地址: 0xfa47f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

BBox* i = *(arg1 + 8)

if (i == 0)
    return 

RTree& x19_1 = arg1

do
    *(x19_1 + 8) = *(i + 0x20)
    *(i + 0x20) = 0
    RTreeNode* x1_1 = *x19_1
    
    if (x1_1 == 0)
        *x19_1 = i
        *(i + 0x18) = 0
    else if (*(x1_1 + 0x20) == 0)
        i = BranchNodeCreate(i, x1_1)
        *x19_1 = i
        *(i + 0x18) = 0
    else
        RTreeNode* x0_2 = FindBestInsertionNeighbor(x19_1, i)
        int64_t* j = *(x0_2 + 0x18)
        int64_t x24_1
        
        if (j[4] == x0_2)
            x24_1 = 0x20
        else
            x24_1 = 0x28
        
        int128_t v0_1
        int128_t v1_1
        int128_t v4_1
        int128_t v5_1
        arg1, v0_1, v1_1, v4_1, v5_1 = BranchNodeCreate(i, x0_2)
        *(j + x24_1) = arg1
        *(arg1 + 0x18) = j
        
        do
            int64_t* x8_4 = j[4]
            int64_t* x9_1 = j[5]
            v0_1.q = *x8_4
            v1_1.q = *x9_1
            float v2_1 = x8_4[1].d
            float v3_1 = x9_1[1].d
            v4_1.q = *(x8_4 + 0xc)
            int128_t v7_1 = vcgt_f32(v1_1, v0_1)
            v5_1.q = *(x9_1 + 0xc)
            float v6_1 = *(x8_4 + 0x14)
            v0_1 = vbsl_s8(v7_1, v0_1, v1_1)
            v1_1.d = *(x9_1 + 0x14)
            int128_t v7_2 = vcgt_f32(v4_1, v5_1)
            
            if (not(v2_1 < v3_1))
                v2_1 = v3_1
            
            v4_1 = vbsl_s8(v7_2, v4_1, v5_1)
            
            if (v6_1 f> v1_1.d)
                v1_1.d = v6_1
            else
                v1_1.d = v1_1.d
            
            *j = v0_1.q
            j[1].d = v2_1
            *(j + 0xc) = v4_1.q
            *(j + 0x14) = v1_1.d
            j = j[3]
        while (j != 0)
    
    i = *(x19_1 + 8)
while (i != 0)
