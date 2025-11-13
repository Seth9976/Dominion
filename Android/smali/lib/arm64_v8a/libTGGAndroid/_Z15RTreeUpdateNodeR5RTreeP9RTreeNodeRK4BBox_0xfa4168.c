// 函数: _Z15RTreeUpdateNodeR5RTreeP9RTreeNodeRK4BBox
// 地址: 0xfa4168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *arg3
*(arg2 + 0x10) = *(arg3 + 0x10)
*arg2 = v0
void* __offset(RTreeNode, 0x18) x8_1 = arg2 + 0x18
int32_t* x9 = *x8_1

if (x9 == 0)
    return 

v0.d = *x9

if (v0.d f> *arg2)
label_fa41e8:
    void* x10_1 = *(x9 + 0x20)
    
    if (x9 == *arg1)
        if (x10_1 == arg2)
            x10_1 = *(x9 + 0x28)
        
        int64_t x13_1 = *gRTreeGlobals
        *(gRTreeGlobals + 0x14) -= 1
        *x9 = x13_1
        *gRTreeGlobals = x9
        *x8_1 = 0
        *arg1 = x10_1
        x8_1 = x10_1 + 0x18
    else
        if (x10_1 == arg2)
            x10_1 = *(x9 + 0x28)
        
        void** x11_2 = *(x9 + 0x18)
        int64_t x16_1 = *gRTreeGlobals
        bool cond:0_1 = x11_2[4] == x9
        *(gRTreeGlobals + 0x14) -= 1
        *x9 = x16_1
        *gRTreeGlobals = x9
        int64_t x9_1
        
        x9_1 = cond:0_1 ? 0x20 : 0x28
        
        *(x11_2 + x9_1) = x10_1
        *(x10_1 + 0x18) = x11_2
    
    *x8_1 = 0
    *(arg2 + 0x20) = *(arg1 + 8)
    *(arg1 + 8) = arg2
    *(arg2 + 0x18) = 0
else
    v0.d = x9[3]
    
    if (v0.d f< *(arg2 + 0xc))
        goto label_fa41e8
    
    v0.d = x9[1]
    
    if (v0.d f> *(arg2 + 4))
        goto label_fa41e8
    
    v0.d = x9[4]
    
    if (v0.d f< *(arg2 + 0x10))
        goto label_fa41e8
    
    v0.d = x9[2]
    
    if (v0.d f> *(arg2 + 8))
        goto label_fa41e8
    
    v0.d = x9[5]
    
    if (not(v0.d f>= *(arg2 + 0x14)))
        goto label_fa41e8
