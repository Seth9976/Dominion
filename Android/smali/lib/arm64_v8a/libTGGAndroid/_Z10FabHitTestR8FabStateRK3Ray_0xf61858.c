// 函数: _Z10FabHitTestR8FabStateRK3Ray
// 地址: 0xf61858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t* x22 = *arg1
FabState& var_1e8 = arg1
int64_t* x9 = *x22
int128_t v0
int128_t v1

if (x9 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1 = AssetCatalogLoadAsset(x22, false, true)
    x9 = *x22

int64_t* x8_1 = *x9
int64_t* entry_x8
*entry_x8 = -0x100000000
entry_x8[0x15].d = 0x461c4000

if (x8_1[1].d s< 1)
    return 

int64_t i = 0
v9.d = fconvert.s(0.5f)

do
    int64_t x26_1 = *x8_1
    int32_t x9_2 = *(var_1e8 + (i << 2) + 0x88)
    FabState* x22_1
    int32_t x8_11
    uint64_t x23_1
    
    if (x9_2 == 0)
        x8_11 = *(gFabs + 8)
        x23_1 = zx.q(*(gFabs + 0x10))
        uint64_t x8_12
        int64_t x9_3
        int32_t x10_3
        
        if (x23_1.d == x8_11)
        label_f619e8:
            x9_3 = *gFabs
            x10_3 = x8_11 + 1
            *(gFabs + 8) = x10_3
            x8_12 = zx.q(x8_11)
        else
        label_f61a18:
            x9_3 = *gFabs
            x10_3 = *(x9_3 + x23_1 * 0x4e8 + 0x4e0)
            x8_12 = x23_1
        
        x22_1 = x9_3 + x8_12 * 0x4e8
        *(gFabs + 0x10) = x10_3
        arg1, v0, v1 = memset(x22_1, 0, 0x4e0)
        *(x22_1 + 0x4e0) = x23_1.d | *(gFabs + 0x18) << 0x10
        int32_t x8_16 = *(gFabs + 0x18)
        int32_t x8_17
        
        if (x8_16 == 0xffff)
            x8_17 = 1
        else
            x8_17 = x8_16 + 1
        
        *(gFabs + 0x14) += 1
        *(gFabs + 0x18) = x8_17
        *(var_1e8 + (i << 2) + 0x88) = *(x22_1 + 0x4e0)
    else
        uint64_t x10_1 = zx.q(x9_2.w)
        x8_11 = *(gFabs + 8)
        
        if (x10_1.d u< x8_11)
            x22_1 = *gFabs + x10_1 * 0x4e8
        
        if (x10_1.d u>= x8_11 || *(x22_1 + 0x4e0) != x9_2)
            x23_1 = zx.q(*(gFabs + 0x10))
            
            if (x23_1.d != x8_11)
                goto label_f61a18
            
            goto label_f619e8
    int32_t x9_6 = *(x22_1 + 0x60)
    v1 = *(var_1e8 + 0x50)
    int32_t x8_20 = *(x22_1 + 0x70)
    *(x22_1 + 0x40) = *(var_1e8 + 0x40)
    *(x22_1 + 0x50) = v1
    void* __offset(FabState, 0x74) x8_21
    
    if (x8_20 s> x9_6)
        x8_21 = x22_1 + 0x74
    else
        x8_21 = x26_1 + i * 0xe0 + 0x38
    
    if (zx.d(*x8_21) == 0)
        FabEl* x23_2 = x26_1 + i * 0xe0
        int32_t x8_23 = *x23_2
        
        if (x8_23 != 2)
            goto label_f61b34
        
        XAsset* x8_24 = *(x22_1 + 0x68)
        uint32_t x0_4 = *(x22_1 + 8)
        XAsset* x24_1
        
        if (x8_24 == 0)
            x24_1 = *(x26_1 + i * 0xe0 + 0x88)
        else
            x24_1 = x8_24
        
        if (x0_4 == 0)
            if (x24_1 != 0)
                goto label_f61b00
            
            arg1, v0, v1 = UIStateGetHidden(0)
            
            if ((arg1.d & 1) == 0)
            label_f61b30:
                x8_23 = *x23_2
            label_f61b34:
                int64_t var_1d0
                int32_t var_140
                int128_t var_130
                int128_t var_120
                int128_t var_110
                int128_t var_100
                int128_t var_f0
                int128_t var_e0
                int128_t var_d0
                int128_t var_c0
                int128_t var_b0
                
                if (x8_23 != 5)
                    int32_t x20_4 = (*(x22_1 + 0x4bc) s> *(x22_1 + 0x60) ? 1 : 0)
                        & (zx.d(*(x22_1 + 0x4c0)) != 0 ? 1 : 0)
                    
                    if (x20_4 == 1)
                        *entry_x8 = -0x100000000
                        entry_x8[0x15].d = 0x461c4000
                    
                    if (x8_23 == 2)
                        ElBox(x23_2, x22_1)
                        OBBoxTransform(&var_140, x22_1 + 0x40)
                        float var_16c
                        OBBox var_168
                        arg1, v0, v1 = IntersectRayOBBox(arg2, &var_168, &var_16c)
                        
                        if ((arg1.d & 1) != 0)
                            v0.d = var_16c
                            v1.d = entry_x8[0x15].d
                            
                            if (not(v0.d f>= v1.d) && *x23_2 == 2)
                                ElBox(x23_2, x22_1)
                                float var_124
                                float v0_1 = var_124 f* v9.d
                                float var_11c
                                float v1_1 = var_11c f* v9.d
                                float v2_3 = *V20
                                float v3_3 = *(V20 + 4)
                                float var_80 = v2_3 - v0_1
                                float var_7c_1 = v3_3 - v1_1
                                float var_78_1 = v0_1 + v2_3
                                float var_74_1 = v1_1 + v3_3
                                XAsset* x8_32 = *(x22_1 + 0x68)
                                XAsset* x0_16
                                
                                if (x8_32 == 0)
                                    x0_16 = *(x26_1 + i * 0xe0 + 0x88)
                                else
                                    x0_16 = x8_32
                                
                                int32_t v0_2
                                int32_t v1_2
                                int32_t v2_4
                                int32_t v3_4
                                v0_2, v1_2, v2_4, v3_4 = UILayoutExtentsBG(x0_16)
                                int32_t var_90 = v0_2
                                int32_t var_8c_1 = v1_2
                                int32_t var_88_1 = v2_4
                                int32_t var_84_1 = v3_4
                                UIScreenTransformRel(&var_80, &var_90)
                                float v0_3
                                int32_t v1_3
                                v0_3, v1_3 = FabUICursorPos(x23_2, x22_1, arg2)
                                var_80 = v0_3
                                int32_t var_7c_2 = v1_3
                                int128_t v2_1
                                int128_t v3_1
                                int128_t v4_1
                                int128_t v5_1
                                arg1, v0, v1, v2_1, v3_1, v4_1, v5_1 =
                                    UIStateHitTestNew(*(x22_1 + 8), &var_1d0, &var_80)
                                int32_t x8_33 = var_140
                                
                                if (x8_33 != 0)
                                    int32_t x8_5
                                    
                                    if (x8_33 == 1)
                                        x8_5 = 3
                                    else
                                        if (x8_33 != 2)
                                            pthread_kill(pthread_self(), 6)
                                            FabEl* x0_21
                                            FabState* x1_10
                                            x0_21, x1_10 = XNoReturn()
                                            return FabElIsModal(x0_21, x1_10) __tailcall
                                        
                                        x8_5 = 4
                                    
                                    *entry_x8 = x8_5
                                    *(entry_x8 + 4) = i.d
                                    *(entry_x8 + 8) = var_140.o
                                    *(entry_x8 + 0x18) = var_130
                                    *(entry_x8 + 0x48) = var_100
                                    *(entry_x8 + 0x58) = var_f0
                                    *(entry_x8 + 0x28) = var_120
                                    *(entry_x8 + 0x38) = var_110
                                    v2_1.d = var_16c
                                    *(entry_x8 + 0x68) = var_e0
                                    *(entry_x8 + 0x78) = var_d0
                                    *(entry_x8 + 0x88) = var_c0
                                    *(entry_x8 + 0x98) = var_b0
                                    entry_x8[0x15].d = v2_1.d
                                    v0.q = *(arg2 + 0xc)
                                    v1.d = *(arg2 + 0x14)
                                    v3_1.q = *arg2
                                    v4_1.d = *(arg2 + 8)
                                    v0.d = v0.d f* v2_1.d
                                    v0:4.d = v0:4.d f* v2_1.d
                                    v1.d = v2_1.d f* v1.d
                                    v1.d = v1.d f+ v4_1.d
                                    *gBestPos = vadd_f32(v0, v3_1).q
                                    *(gBestPos + 8) = v1.d
                        
                        if ((x20_4 & 1) != 0)
                            break
                else
                    int32_t x8_25 = *(x22_1 + 0x78)
                    int32_t x9_9 = *(x22_1 + 0x60)
                    void* x11_4 = x26_1 + i * 0xe0
                    void* x8_26
                    
                    if (x8_25 s> x9_9)
                        x8_26 = x22_1 + 0x7c
                    else
                        x8_26 = x11_4 + 0x94
                    
                    int64_t x8_27 = *x8_26
                    void* __offset(FabState, 0x84) x9_11
                    
                    if (x8_25 s> x9_9)
                        x9_11 = x22_1 + 0x84
                    else
                        x9_11 = x11_4 + 0x9c
                    
                    if (x8_27.d s>= 1)
                        uint64_t x24_2 = x8_27 u>> 0x20
                        
                        if (x24_2.d s>= 1)
                            int32_t x20_3 = *x9_11
                            int64_t j = 0
                            
                            do
                                if (x20_3 s>= 1)
                                    int64_t x25_1 = 0
                                    
                                    do
                                        int32_t fp_1 = 0
                                        
                                        do
                                            var_1d0 = j | x25_1 << 0x20
                                            int32_t var_1c8_1 = fp_1
                                            int128_t v2_2
                                            int128_t v3_2
                                            int128_t v4_2
                                            int128_t v5_2
                                            arg1, v0, v1, v2_2, v3_2, v4_2, v5_2 = FabHitTest(
                                                FabSubstateTable(x23_2, x22_1, &var_1d0), arg2)
                                            
                                            if (var_140 != 0)
                                                int32_t var_98
                                                v0.d = var_98
                                                v1.d = entry_x8[0x15].d
                                                
                                                if (not(v0.d f>= v1.d))
                                                    *entry_x8 = var_140.o
                                                    *(entry_x8 + 0x10) = var_130
                                                    *(entry_x8 + 0x40) = var_100
                                                    *(entry_x8 + 0x50) = var_f0
                                                    *(entry_x8 + 0x20) = var_120
                                                    *(entry_x8 + 0x30) = var_110
                                                    *(entry_x8 + 0x90) = var_b0
                                                    int128_t var_a0
                                                    *(entry_x8 + 0xa0) = var_a0
                                                    *(entry_x8 + 0x70) = var_d0
                                                    *(entry_x8 + 0x80) = var_c0
                                                    *(entry_x8 + 0x60) = var_e0
                                            
                                            fp_1 += 1
                                        while (x20_3 != fp_1)
                                        
                                        x25_1 += 1
                                    while (x25_1 != x24_2)
                                
                                j += 1
                            while (j != (x8_27 & 0xffffffff))
        else if (UIStateAsset(x0_4) == x24_1)
            arg1, v0, v1 = UIStateGetHidden(*(x22_1 + 8))
            
            if ((arg1.d & 1) == 0)
                goto label_f61b30
        else
            UIStateDestroy(*(x22_1 + 8))
        label_f61b00:
            uint32_t x0_8 = UIStateLoad(x24_1)
            *(x22_1 + 8) = x0_8
            arg1, v0, v1 = UIStateGetHidden(x0_8)
            
            if ((arg1.d & 1) == 0)
                goto label_f61b30
    
    i += 1
while (i s< sx.q(x8_1[1].d))
