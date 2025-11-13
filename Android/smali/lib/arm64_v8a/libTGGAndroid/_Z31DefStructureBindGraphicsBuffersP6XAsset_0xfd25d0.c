// 函数: _Z31DefStructureBindGraphicsBuffersP6XAsset
// 地址: 0xfd25d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(2)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8_1 = *(x19 + 0x24) + 1
*(x19 + 0x24) = x8_1
int32_t* x20 = **x9

if (x20 == 0)
    *(x19 + 0x24) = x8_1 - 1
    return 

if (*x20 s>= 1)
    int64_t i = 0
    int64_t x22_1 = 0x20
    
    do
        void* x25_1 = *(x20 + 8)
        void* x24_1 = x25_1 + x22_1
        
        if (*(x24_1 - 0xc) != 0)
            int64_t* x0 = *gGraphicsInterface
            
            if (((*(*x0 + 0x58))(x0, zx.q(*(x24_1 + 0x18))).d & 1) == 0)
                int64_t* x0_1 = *gGraphicsInterface
                int64_t* x8_7 = x25_1 + x22_1
                *(x24_1 + 0x18) =
                    (*(*x0_1 + 0x50))(x0_1, *x8_7, zx.q(x8_7[-1].d), zx.q(x8_7[-2].d), 0).d
            
            void* x26_1 = x25_1 + x22_1
            
            if (*(x26_1 + 0xc) s>= 1)
                int64_t* x0_2 = *gGraphicsInterface
                
                if (((*(*x0_2 + 0x70))(x0_2, zx.q(*(x26_1 + 0x1c))).d & 1) == 0)
                    int64_t* x0_3 = *gGraphicsInterface
                    void* x8_12 = x25_1 + x22_1
                    int32_t x2_2 = *(x26_1 + 0xc)
                    *(x26_1 + 0x1c) = (*(*x0_3 + 0x68))(x0_3, *(x8_12 + 0x10), x2_2, 
                        zx.q(x2_2 != *(x8_12 + 8) << 1 ? 1 : 0), 0, zx.q(*(x24_1 + 0x18))).d
        
        i += 1
        x22_1 += 0x150
    while (i s< sx.q(*x20))

if (*x20 s< 1 || x19 != 0)
    *(x19 + 0x24) -= 1
