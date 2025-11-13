// 函数: _Z13FabHitTestBox5FabIDRK3Ray
// 地址: 0xf616d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
int64_t* x21 = *(*gFabs + mulu.dp.d(arg1 & 0xffff, 0x4e8))
int64_t* x8_1 = *x21
int32_t x22
int32_t x8_2
int64_t* x23

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x23 = **x21
    x8_2 = x23[1].d
    
    if (x8_2 s>= 1)
        goto label_f6172c
    
    x22 = -1
else
    x23 = *x8_1
    x8_2 = x23[1].d
    
    if (x8_2 s< 1)
        x22 = -1
    else
    label_f6172c:
        int64_t i = 0
        x22 = -1
        v8.d = float.s(0x461c4000)
        int64_t x24_1 = 0x39
        
        do
            if (zx.d(*(*x23 + x24_1)) == 0)
                FabBox(zx.q(arg1), i.d)
                OBBox var_68
                
                if ((OBBoxContains(&var_68, arg2) & 1) == 0)
                    float var_6c
                    int32_t x0_4
                    int64_t v0_1
                    x0_4, v0_1 = IntersectRayOBBox(arg2, &var_68, &var_6c)
                    
                    if ((x0_4 & 1) != 0)
                        v0_1.d = var_6c
                        
                        if (not(v0_1.d f>= v8.d))
                            x22 = i.d
                            v8 = v0_1
                
                x8_2 = x23[1].d
            
            i += 1
            x24_1 += 0xe0
        while (i s< sx.q(x8_2))
return zx.q(x22)
