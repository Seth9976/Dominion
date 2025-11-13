// 函数: _Z17VRBindEyeTexturesv
// 地址: 0x105fdd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0

if (*(*gAppInterface + 0x30) != 0 && zx.d(*gUsingMultisampleExt) == 0)
    x0 = GameIsDebugDrawFlagSet(0x2000)

int32_t x8_3

if (*(*gAppInterface + 0x30) != 0 && (zx.d(*gUsingMultisampleExt) != 0 || (x0.d & 1) == 0))
    x8_3 = 1
else
    x8_3 = 0

int32_t x21 = zx.d(*gUsingMultisampleExt) & x8_3
void* x23_1 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x38
int64_t* x19 = *x23_1

if ((x21 & 1) != 0 || x19 != 0)
label_105ff18:
    
    if (*(*gAppInterface + 0x30) != 0)
    label_105ff24:
        void* x19_3 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 8
        
        if (*x19_3 == 0)
            *x19_3 = TextureCreateForRendering(*(gVR + 0xb8), *(gVR + 0xbc), 1, 5, nullptr)
            void* x22_2 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x20
            int64_t* x19_4 = *x22_2
            int64_t* x19_5
            void* x22_4
            
            if (x19_4 != 0)
                int64_t* x8_18 = *x19_4
                
                if (x8_18 == 0)
                    if (x19_4[1].d == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    AssetCatalogLoadAsset(x19_4, false, true)
                    x8_18 = *x19_4
                
                int64_t* x8_20 = *x8_18
                **x8_20 = *(gVR + 0xc0)
                *(*x8_20 + 4) = *(gVR + 0xc4)
                x22_4 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x78
                x19_5 = *x22_4
                
                if (x19_5 == 0)
                    goto label_1060118
                
                goto label_105ffc0
            
            *x22_2 = TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 1, 5, nullptr)
            x22_4 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x78
            x19_5 = *x22_4
            int64_t* x19_6
            void* x22_6
            
            if (x19_5 != 0)
            label_105ffc0:
                int64_t* x8_24 = *x19_5
                
                if (x8_24 == 0)
                    if (x19_5[1].d == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    AssetCatalogLoadAsset(x19_5, false, true)
                    x8_24 = *x19_5
                
                int64_t* x8_25 = *x8_24
                **x8_25 = *(gVR + 0xb8)
                *(*x8_25 + 4) = *(gVR + 0xbc)
                x22_6 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x90
                x19_6 = *x22_6
                
                if (x19_6 != 0)
                    goto label_106002c
                
                *x22_6 = TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 0x50, 6, nullptr)
            else
            label_1060118:
                *x22_4 = TextureCreateForRendering(*(gVR + 0xb8), *(gVR + 0xbc), 0x50, 6, nullptr)
                x22_6 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x90
                x19_6 = *x22_6
                
                if (x19_6 != 0)
                label_106002c:
                    int64_t* x8_29 = *x19_6
                    
                    if (x8_29 == 0)
                        if (x19_6[1].d == 0x15)
                            XString::GetString()
                            XTrace("Unpreloaded sound %s")
                        
                        AssetCatalogLoadAsset(x19_6, false, true)
                        x8_29 = *x19_6
                    
                    int64_t* x8_30 = *x8_29
                    **x8_30 = *(gVR + 0xc0)
                    *(*x8_30 + 4) = *(gVR + 0xc4)
                else
                    *x22_6 =
                        TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 0x50, 6, nullptr)
else
    int64_t* x19_1
    void* x23_3
    
    if (x19 != 0)
        int64_t* x8_4 = *x19
        
        if (x8_4 == 0)
            if (x19[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x19, false, true)
            x8_4 = *x19
        
        int64_t* x8_6 = *x8_4
        **x8_6 = *(gVR + 0xb8)
        *(*x8_6 + 4) = *(gVR + 0xbc)
        x23_3 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x50
        x19_1 = *x23_3
        
        if (x19_1 == 0)
            goto label_10600c8
        
        goto label_105feb4
    
    *x23_1 = TextureCreateForRendering(*(gVR + 0xb8), *(gVR + 0xbc), 1, 3, nullptr)
    x23_3 = gVR + (sx.q(*(gVR + 0xa8)) << 3) + 0x50
    x19_1 = *x23_3
    
    if (x19_1 != 0)
    label_105feb4:
        int64_t* x8_10 = *x19_1
        
        if (x8_10 == 0)
            if (x19_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x19_1, false, true)
            x8_10 = *x19_1
        
        int64_t* x8_11 = *x8_10
        **x8_11 = *(gVR + 0xc0)
        *(*x8_11 + 4) = *(gVR + 0xc4)
        goto label_105ff18
    
label_10600c8:
    *x23_3 = TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 1, 3, nullptr)
    
    if (*(*gAppInterface + 0x30) != 0)
        goto label_105ff24

int64_t* x19_7 = *(gVR + 0x68)

if (((x21 | (x19_7 != 0 ? 1 : 0)) & 1) != 0)
    return 

int64_t* x19_8

if (x19_7 == 0)
    *(gVR + 0x68) = TextureCreateForRendering(*(gVR + 0xb8), *(gVR + 0xbc), 0x50, 4, nullptr)
    x19_8 = *(gVR + 0x70)
    
    if (x19_8 == 0)
        *(gVR + 0x70) = TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 0x50, 4, nullptr)
        return 
else
    int64_t* x8_39 = *x19_7
    
    if (x8_39 == 0)
        if (x19_7[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x19_7, false, true)
        x8_39 = *x19_7
    
    int64_t* x8_41 = *x8_39
    **x8_41 = *(gVR + 0xb8)
    *(*x8_41 + 4) = *(gVR + 0xbc)
    x19_8 = *(gVR + 0x70)
    
    if (x19_8 == 0)
        *(gVR + 0x70) = TextureCreateForRendering(*(gVR + 0xc0), *(gVR + 0xc4), 0x50, 4, nullptr)
        return 

int64_t* x8_44 = *x19_8

if (x8_44 == 0)
    if (x19_8[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19_8, false, true)
    x8_44 = *x19_8

int64_t* x8_45 = *x8_44
**x8_45 = *(gVR + 0xc0)
*(*x8_45 + 4) = *(gVR + 0xc4)
