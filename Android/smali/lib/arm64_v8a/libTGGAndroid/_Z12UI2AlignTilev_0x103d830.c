// 函数: _Z12UI2AlignTilev
// 地址: 0x103d830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v15
int64_t var_80 = entry_v15.q
int128_t entry_v14
int64_t var_78 = entry_v14.q
int64_t v13
int64_t var_70 = v13
int128_t entry_v12
int64_t var_68 = entry_v12.q
int64_t v11
int64_t var_60 = v11
int128_t entry_v10
int64_t var_58 = entry_v10.q
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8

if (*(gUI2Editor + 0x704c) s>= 2)
    int64_t v0_1
    int128_t v2_1
    v0_1, v2_1 = GameGetTimeSimulation()
    uint64_t x8_1 = zx.q(*(gUI2Editor + 0x704c))
    v2_1.d = *RECT0
    int32_t x9_2
    
    if (x8_1.d s< 1)
        v8.d = *(RECT0 + 4)
        entry_v12.d = *(RECT0 + 8)
        entry_v14.d = *(RECT0 + 0xc)
        v13 = v2_1.q
        entry_v15 = entry_v12
        x9_2 = x8_1.d - 1
        
        if (x8_1.d s>= 1)
        label_103daac:
            v0_1.d = v2_1.d f- entry_v12.d
            v2_1.d = float.s(x9_2)
            v2_1.d = v0_1.d f* v2_1.d
            v11.d = (entry_v15.d f- v13.d f- v2_1.d) / float.s(x8_1.d)
            int64_t i = 0
            v9.d = entry_v14.d f- v8.d
            entry_v10.d = 0f
            entry_v12.d = v0_1.d f+ v11.d
            
            do
                UI2* x0_20 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
                float v0_23 = float.s(i.d)
                float v1_2 = v13.d f+ entry_v12.d f* v0_23
                v0_23 = v8.d f+ v0_23 f* entry_v10.d
                float var_90 = v1_2
                float var_8c_1 = v0_23
                float var_88_1 = v11.d f+ v1_2 f+ entry_v10.d
                float var_84_1 = v9.d f+ v0_23 f+ entry_v10.d
                *(x0_20 + 0x1370) = 0
                *(x0_20 + 0x1694) = 0
                AttribMap* x0_21 = GetEdittedMap(x0_20, 0x76)
                AttribMapSetDef(*gUI2AttribTable, x0_21, 0x76, &var_90)
                AttribMapGetDef(*gUI2AttribTable, x0_21, *macro_ptr_RectF, 0x76)
                i += 1
            while (i s< sx.q(*(gUI2Editor + 0x704c)))
    else
        v9 = v0_1
        int32_t var_94_1 = v2_1.d
        UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        int128_t v0_3 = UI2PropDynamic<float>::Eval(v9.d)
        v8 = UI2PropDynamic<float>::Eval(v9.d)
        int64_t v0_7 = UI2PropDynamic<float>::Eval(v9.d)
        v0_1, v2_1 = UI2PropDynamic<float>::Eval(v9.d)
        x8_1 = zx.q(*(gUI2Editor + 0x704c))
        entry_v12.d = v0_3.d f+ v0_7.d
        entry_v14.d = v8.d f+ v0_1.d
        
        if (x8_1.d s< 2)
            v2_1.d = var_94_1
            v13 = v0_3.q
            entry_v15 = entry_v12
            x9_2 = x8_1.d - 1
            
            if (x8_1.d s>= 1)
                goto label_103daac
        else
            UI2GetIndex(zx.q(*(gUI2Editor + 0x6050)))
            int64_t v0_10 = UI2PropDynamic<float>::Eval(v9.d)
            int128_t v0_12 = UI2PropDynamic<float>::Eval(v9.d)
            int64_t v0_14 = UI2PropDynamic<float>::Eval(v9.d)
            v0_1 = UI2PropDynamic<float>::Eval(v9.d)
            float v1_1 = v0_10.d f+ v0_14.d
            
            if (v0_3.d f< v0_10.d)
                v13.d = v0_3.d
            else
                v13.d = v0_10.d
            
            x8_1 = zx.q(*(gUI2Editor + 0x704c))
            v0_1.d = v0_12.d f+ v0_1.d
            
            if (entry_v12.d f> v1_1)
                entry_v15.d = entry_v12.d
            else
                entry_v15.d = v1_1
            
            if (v8.d f< v0_12.d)
                v8.d = v8.d
            else
                v8.d = v0_12.d
            
            if (entry_v14.d f> v0_1.d)
                entry_v14.d = entry_v14.d
            else
                entry_v14.d = v0_1.d
            
            v0_10.d f- v0_3.d
            
            if (v0_10.d f< v0_3.d)
                v2_1.d = v0_3.d
            else
                v2_1.d = v0_10.d
            
            if (v0_10.d f< v0_3.d)
                v0_1.d = v0_10.d
            else
                v0_1.d = v0_3.d
            
            if (v0_10.d f< v0_3.d)
                entry_v12.d = v1_1
            else
                entry_v12.d = entry_v12.d
            
            int32_t var_94_2 = entry_v14.d
            float var_9c_1 = entry_v12.d
            
            if (x8_1.d s>= 3)
                int64_t x21_1 = 0
                int32_t var_98_1 = v0_1.d
                int64_t x9_1
                
                do
                    entry_v14 = v2_1
                    UI2GetIndex(zx.q(*(gUI2Editor + (x21_1 << 2) + 0x6054)))
                    int128_t v0_17 = UI2PropDynamic<float>::Eval(v9.d)
                    int64_t v0_19 = UI2PropDynamic<float>::Eval(v9.d)
                    int128_t v0_21 = UI2PropDynamic<float>::Eval(v9.d)
                    v0_1, v2_1 = UI2PropDynamic<float>::Eval(v9.d)
                    v2_1.d = var_94_2
                    v1_1 = v0_17.d f+ v0_21.d
                    
                    if (v13.d f< v0_17.d)
                        v13.d = v13.d
                    else
                        v13.d = v0_17.d
                    
                    v0_1.d = v0_19.d f+ v0_1.d
                    
                    if (entry_v15.d f> v1_1)
                        entry_v15.d = entry_v15.d
                    else
                        entry_v15.d = v1_1
                    
                    if (v8.d f< v0_19.d)
                        v8.d = v8.d
                    else
                        v8.d = v0_19.d
                    
                    if (v2_1.d f> v0_1.d)
                        v2_1.d = v2_1.d
                    else
                        v2_1.d = v0_1.d
                    
                    var_94_2 = v2_1.d
                    v2_1.d = var_98_1
                    
                    if (v0_17.d f< v2_1.d)
                        var_9c_1 = v1_1
                        var_98_1 = v0_17.d
                    else if (v0_17.d f>= entry_v14.d)
                        v2_1 = entry_v14
                    else
                        v2_1 = v0_17
                    
                    x8_1 = sx.q(*(gUI2Editor + 0x704c))
                    x9_1 = x21_1 + 3
                    x21_1 += 1
                while (x9_1 s< x8_1)
            
            entry_v14.d = var_94_2
            entry_v12.d = var_9c_1
            x9_2 = x8_1.d - 1
            
            if (x8_1.d s>= 1)
                goto label_103daac
    UI2CreateUndoCheckpoint(true)

entry_v10.q = var_58
entry_v12.q = var_68
entry_v15.q = var_80
entry_v14.q = var_78
