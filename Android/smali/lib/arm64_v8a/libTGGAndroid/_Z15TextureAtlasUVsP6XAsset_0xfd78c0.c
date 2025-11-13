// 函数: _Z15TextureAtlasUVsP6XAsset
// 地址: 0xfd78c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (arg1 == 0)
    v0.q = *RECT1
    v2.q = *(RECT1 + 8)
else
    int64_t* x8_1 = *arg1
    XAsset* x19_1 = arg1
    int64_t* x20_1
    
    if (x8_1 == 0)
        if (*(x19_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19_1, false, true)
        x20_1 = ***x19_1
        
        if (x20_1 != 0)
            goto label_fd792c
        
        v0.q = *RECT1
        v2.q = *(RECT1 + 8)
    else
        x20_1 = **x8_1
        
        if (x20_1 != 0)
        label_fd792c:
            int64_t* x19_2 = x20_1[5]
            
            if (x19_2 == 0)
                v0.q = *RECT1
                v2.q = *(RECT1 + 8)
            else
                int64_t* x8_6 = *x19_2
                
                if (x8_6 == 0)
                    if (x19_2[1].d == 0x15)
                        XString::GetString()
                        XTrace("Unpreloaded sound %s")
                    
                    arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19_2, false, true)
                    x8_6 = *x19_2
                
                v0.q = *(x20_1 + 0x34)
                v1.q = *x20_1
                int64_t* x8_9 = **x8_6
                int128_t v0_1 = vcvt_f32_s32(v0)
                v1 = vadd_f32(v0_1, vcvt_f32_u32(v1))
                v2.q = *x8_9
                int128_t v2_1 = vcvt_f32_u32(v2)
                v0 = vdiv_f32(v0_1, v2_1)
                v2 = vdiv_f32(v1, v2_1)
        else
            v0.q = *RECT1
            v2.q = *(RECT1 + 8)

v1.d = v0:4.d
v3.d = v2:4.d
