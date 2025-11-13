// 函数: _Z21StructureBindMaterialP9Structure
// 地址: 0xfd29e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x30)) != 0)
    return 

int64_t* x19_1 = *(arg1 + 8)
Structure* x20_1 = arg1
*(arg1 + 0x30) = 1
int64_t* x8_1

if (x19_1 == 0)
    x19_1 = AssetPtrGetNull(2)
    x8_1 = *x19_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19_1, false, true)
        x8_1 = *x19_1
else
    x8_1 = *x19_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19_1, false, true)
        x8_1 = *x19_1

*(x19_1 + 0x24) += 1
int64_t* x8_2 = *x8_1
int32_t x8_3 = x8_2[2].d
*(x20_1 + 0x40) = x8_3
arg1 = XCallocAllowingZeroSize(x8_3 << 4)
int32_t x8_4 = *(x20_1 + 0x40)
Structure* x25_1 = arg1
*(x20_1 + 0x48) = arg1

if (x8_4 s< 1)
    *(x19_1 + 0x24) -= 1
    return 

int64_t x27_1 = 0

while (true)
    int64_t x24_1 = x8_2[3]
    int64_t* x19_2 = *(x24_1 + x27_1 * 0xe0 + 8)
    int64_t x26_1 = *(*x8_2 + 8)
    int64_t* x8_8
    
    if (x19_2 != 0)
    label_fd2ac8:
        x8_8 = *x19_2
        
        if (x8_8 == 0)
            AssetCatalogLoadAsset(x19_2, false, true)
            x8_8 = *x19_2
    else
        x19_2 = *(x26_1 + x27_1 * 0x150 + 0x58)
        
        if (x19_2 != 0)
            goto label_fd2ac8
        
        int64_t* x0_1 = AssetPtrFromPath("sys/defaultstructure.material", 5)
        x19_2 = x0_1
        
        if (x0_1 != 0)
            goto label_fd2ac8
        
        x19_2 = AssetPtrGetNull(5)
        x8_8 = *x19_2
        
        if (x8_8 == 0)
            AssetCatalogLoadAsset(x19_2, false, true)
            x8_8 = *x19_2
    
    void* fp_1 = x25_1 + (x27_1 << 4)
    *(x19_2 + 0x24) += 1
    int32_t* x28_1 = *x8_8
    arg1 = MaterialStateReallocate(*(fp_1 + 8), *fp_1, *x28_1)
    *(fp_1 + 8) = arg1
    int32_t x8_9 = *x28_1
    Structure* x25_2 = arg1
    *fp_1 = x8_9
    
    if (x8_9 s< 1)
        *(x19_2 + 0x24) -= 1
    else
        int64_t x28_2 = 0
        
        while (true)
            int64_t x8_13 = *(x28_1 + 8)
            int64_t var_98 = x24_1 + x27_1 * 0xe0 + 0x10
            DefMaterialPass* x26_2 = x8_13 + (x28_2 << 4)
            int64_t x0_5
            
            if ((zx.d(*(x20_1 + 0x84)) & 0x10) != 0)
                x0_5 = MaterialFindVariation(x26_2, 4)
            
            int32_t x27_2
            
            if ((zx.d(*(x20_1 + 0x84)) & 0x10) == 0 || x0_5 == 0)
                x27_2 = 1
                
                if ((zx.d(*(x20_1 + 0x84)) & 8) != 0)
                label_fd2ba8:
                    int64_t x0_7 = MaterialFindVariation(x26_2, 3)
                    
                    if (x0_7 != 0)
                        (&var_98)[zx.q(x27_2)] = x0_7 + 8
                        x27_2 += 1
            else
                x27_2 = 2
                int64_t var_90_1 = x0_5 + 8
                
                if ((zx.d(*(x20_1 + 0x84)) & 8) != 0)
                    goto label_fd2ba8
            
            if ((zx.d(*(x20_1 + 0x84)) & 4) != 0)
                int64_t x0_9 = MaterialFindVariation(x26_2, 2)
                
                if (x0_9 != 0)
                    (&var_98)[zx.q(x27_2)] = x0_9 + 8
                    x27_2 += 1
            
            if ((zx.d(*(x20_1 + 0x84)) & 2) != 0)
                int64_t x0_11 = MaterialFindVariation(x26_2, 1)
                
                if (x0_11 != 0)
                    (&var_98)[zx.q(x27_2)] = x0_11 + 8
                    x27_2 += 1
            
            if ((zx.d(*(x20_1 + 0x84)) & 1) != 0)
                int64_t x0_13 = MaterialFindVariation(x26_2, 0)
                
                if (x0_13 != 0)
                    (&var_98)[zx.q(x27_2)] = x0_13 + 8
                    x27_2 += 1
            
            uint64_t i_2 = zx.q(x27_2 + 1)
            int64_t* x24_2 = &var_98
            uint64_t i_1 = i_2
            (&var_98)[zx.q(x27_2)] = x26_1 + x27_1 * 0x150 + 0x60
            uint64_t i
            
            do
                int64_t* x0_15 = AttribMapGetAssetPtr(*gMaterialAttribTable, *x24_2, 0x53)
                
                if (x0_15 != 0)
                    int64_t* x8_25 = *x0_15
                    
                    if (x8_25 == 0)
                        if (x0_15[1].d == 0x15)
                            XString::GetString()
                            XTrace("Unpreloaded sound %s")
                        
                        AssetCatalogLoadAsset(x0_15, false, true)
                        
                        if (*(***x0_15 + 0x28) != 0)
                            XString::operator char const*()
                            XTrace("Atlas textures on structures not supported %s")
                    else if (*(**x8_25 + 0x28) != 0)
                        XString::operator char const*()
                        XTrace("Atlas textures on structures not supported %s")
                
                i = i_1
                i_1 -= 1
                x24_2 = &x24_2[1]
            while (i != 1)
            MaterialStateBind(x25_2 + x28_2 * 0x1a20, &var_98, i_2.d)
            x28_2 += 1
            
            if (x28_2 s>= sx.q(*fp_1))
                break
            
            x25_2 = *(fp_1 + 8)
        
        if (x19_2 != 0)
            *(x19_2 + 0x24) -= 1
    
    x27_1 += 1
    
    if (x27_1 s>= sx.q(*(x20_1 + 0x40)))
        break
    
    x25_1 = *(x20_1 + 0x48)

if (x19_1 != 0)
    *(x19_1 + 0x24) -= 1
