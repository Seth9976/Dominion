// 函数: _Z15UI2UpdateTaptipR3UI2bRK16UI2StateBindingsf
// 地址: 0x101e6ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t x10 = *(arg1 + 0x1978)
uint64_t x9 = zx.q(x10.w)
int64_t x8 = *gUI2
UI2* x20

if (x10 == 0)
    x20 = nullptr
else
    x20 = x8 + x9 * 0x19a8

if ((arg2.d & 1) != 0)
    v8 = arg4.q
    int128_t var_160
    int128_t v1
    int128_t v2
    int128_t v3
    
    if (x20 == 0)
        if (x10 == 0)
            void* x0_1 = UI2Alloc(arg1)
            *(x0_1 + 0x198c) = 1
            int32_t x9_1 = *(x0_1 + 0x19a0)
            *(arg1 + 0x1978) = x9_1
            x8 = *gUI2
            x9 = zx.q(x9_1.w)
        
        int64_t x11_1 = *(arg1 + 0x15f8)
        x20 = x8 + x9 * 0x19a8
        *(x20 + 0x1690) = 0
        *(x20 + 0x1378) = 2
        *(x20 + 0x1688) = x11_1
        *(x20 + 0x17d8) = 1
        *(x20 + 0x1740) = 0
        var_160.d = 0
        int128_t v4
        int128_t v5
        int128_t v6
        v1, v2, v3, v4, v5, v6 =
            UI2MergeRecFromSublayout(*(arg1 + 0x1790), x20, *(arg1 + 0x15f8), arg3, &var_160, 0)
    
    v2 = *(arg1 + 0x1740)
    v3 = *(arg1 + 0x1750)
    int128_t var_f0_1 = (*(arg1 + 0x1720)).d.o
    int128_t var_e0_1 = *(arg1 + 0x1730)
    int128_t var_150_1 = *(arg1 + 0x16c0)
    int128_t var_140_1 = (*(arg1 + 0x16d0)).d.o
    var_160 = *(arg1 + 0x16b0)
    int128_t var_d0_1 = v2
    int128_t var_c0_1 = v3
    int128_t var_130_1 = (*(arg1 + 0x16e0)).d.o
    int128_t var_120_1 = *(arg1 + 0x16f0)
    int128_t var_110_1 = *(arg1 + 0x1700)
    int128_t var_100_1 = *(arg1 + 0x1710)
    int64_t var_80_1 = *(arg1 + 0x1790)
    var_f0_1:4.d = 0x4e20
    int32_t var_a0_1 = (*(arg1 + 0x1770)).d
    int128_t var_90_1 = (*(arg1 + 0x1780)).d.o
    int128_t var_b0_1 = *(arg1 + 0x1760)
    int64_t* x21_2 = *(arg1 + 0x15f8)
    int64_t* x8_1 = *x21_2
    int64_t* x8_2
    
    if (x8_1 == 0)
        if (x21_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v1, v2, v3 = AssetCatalogLoadAsset(x21_2, false, true)
        x8_2 = **x21_2
        
        if (x8_2[1].d == 0)
            goto label_101e87c
        
        arg4, v1, v2, v3 = UI2SubBoundaryItem(*x8_2, nullptr, 0)
    else
        x8_2 = *x8_1
        
        if (x8_2[1].d == 0)
        label_101e87c:
            arg4 = *RECT1
            v1.d = *(RECT1 + 4)
            v2.d = *(RECT1 + 8)
            v3.d = *(RECT1 + 0xc)
        else
            arg4, v1, v2, v3 = UI2SubBoundaryItem(*x8_2, nullptr, 0)
    float var_170 = arg4
    int32_t var_16c_1 = v1.d
    int32_t var_168_1 = v2.d
    int32_t var_164_1 = v3.d
    float v0
    float v1_1
    int32_t v2_1
    int32_t v3_1
    v0, v1_1, v2_1, v3_1 = UI2WorldRectCropped(arg1)
    float var_180 = v0
    float var_17c_1 = v1_1
    int32_t var_178_1 = v2_1
    int32_t var_174_1 = v3_1
    
    if (zx.d(*(x20 + 0x1440)) == 0)
        v0 = var_160.d
    else
        UI2& i = arg1
        UI2& i_3
        
        do
            i_3 = i
            i = *(i + 0x17d0)
        while (i != 0)
        
        uint64_t x11_2 = zx.q(*(i_3 + 0x1970))
        int64_t x8_6
        uint64_t i_1
        
        if (x11_2.d s<= 0)
            x8_6 = *gUI2
            i_1 = 0
        else
            i_1 = zx.q(*(i_3 + 0x1870))
            x8_6 = *gUI2
            
            if (*(x8_6 + i_1 * 0x19a8 + 0x1658) != 0)
                i_1 = x11_2 - 1
                void* __offset(UI2, 0x1874) x9_5 = i_3 + 0x1874
                
                while (i_1 != 0)
                    uint64_t x12_3 = zx.q(*x9_5)
                    x9_5 += 4
                    i_1 -= 1
                    
                    if (*(x8_6 + x12_3 * 0x19a8 + 0x1658) == 0)
                        i_1 = zx.q(x12_3.d)
                        break
        
        v0 = *(x8_6 + mulu.dp.d(i_1.d, 0x19a8) + 0x16b0)
    
    ComputeTaptipTransform(&var_180, zx.q(*(arg1 + 0x1608)), &var_170, RECT0, v0, *(arg1 + 0x1610))
    
    if (zx.d(*(arg1 + 0x1614)) == 0)
        int32_t x25_1 = var_a0_1
        
        if (x25_1 s>= 1)
            int64_t x26_1 = 0
            int64_t i_2 = 0
            
            do
                int64_t* fp_1 = var_b0_1:8.q
                char* s1 = *(*(fp_1 + x26_1) + 0x10)
                
                if (strcasecmp(s1, "mouse_over") == 0)
                    *(fp_1 + x26_1 + 0xc) = 0xffffffff
                    x25_1 = var_a0_1
                else if (strcasecmp(s1, "mouse_down") == 0)
                    *(fp_1 + x26_1 + 0xc) = 0xffffffff
                    x25_1 = var_a0_1
                else if (strcasecmp(s1, "mouse_clicked") == 0)
                    *(fp_1 + x26_1 + 0xc) = 0xffffffff
                    x25_1 = var_a0_1
                
                i_2 += 1
                x26_1 += 0x30
            while (i_2 s< sx.q(x25_1))
    else
        var_a0_1 = 0
    
    char* x1_3 = *(arg1 + 0x1600)
    
    if (x1_3 != 0)
        UI2SetStateByName(x20, x1_3)
    
    UI2Update(x20, arg1, &var_160, false, v8.d)
else if (x20 != 0)
    UI2Free(arg1 + 0x1978)
    *(arg1 + 0x1978) = 0
