// 函数: _Z16SphereTreeUpdateR10SphereTree
// 地址: 0xfaa2fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SphereTreeNode* i = *(arg1 + 8)

if (i == 0)
    return 

SphereTree& x19_1 = arg1

do
    *(x19_1 + 8) = *(i + 0x18)
    *(i + 0x18) = 0
    Sphere* x21_1 = *x19_1
    
    if (x21_1 == 0)
        *x19_1 = i
        *(i + 0x10) = 0
    else if (*(x21_1 + 0x18) == 0)
        void* x26_1 = *gSphereTreeGlobals
        *(gSphereTreeGlobals + 0x14) += 1
        
        if (x26_1 == 0)
            int64_t* x0_2 = XMalloc(8 + *(gSphereTreeGlobals + 0x10) * 0x28)
            *x0_2 = *(gSphereTreeGlobals + 8)
            int32_t x8_7 = *(gSphereTreeGlobals + 0x10)
            x26_1 = *gSphereTreeGlobals
            *(gSphereTreeGlobals + 8) = x0_2
            
            if (x8_7 s>= 1)
                int64_t j = 0
                void** x8_8 = &x0_2[1]
                
                do
                    void* x10_1 = x8_8
                    *x8_8 = x26_1
                    x8_8 = &x8_8[5]
                    j += 1
                    x26_1 = x10_1
                while (j s< sx.q(*(gSphereTreeGlobals + 0x10)))
                
                x26_1 = x8_8 - 0x28
            
            *gSphereTreeGlobals = x26_1
        
        *gSphereTreeGlobals = *x26_1
        float v0_1
        int32_t v1_1
        float v2_1
        int32_t v3_1
        arg1, v0_1, v1_1, v2_1, v3_1 = SphereUnion(i, x21_1)
        *(x26_1 + 8) = v2_1
        *(x26_1 + 0xc) = v3_1
        *(x26_1 + 0x18) = i
        *x26_1 = v0_1 * float.s(0x3f8ccccd)
        *(x26_1 + 4) = v1_1
        *(i + 0x10) = x26_1
        *(x26_1 + 0x20) = x21_1
        *(x21_1 + 0x10) = x26_1
        *x19_1 = x26_1
        *(x26_1 + 0x10) = 0
    else
        sSphereTreeAddNode(x19_1, i)
    
    i = *(x19_1 + 8)
while (i != 0)
