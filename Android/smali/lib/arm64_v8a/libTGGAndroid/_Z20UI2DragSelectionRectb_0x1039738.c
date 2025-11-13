// 函数: _Z20UI2DragSelectionRectb
// 地址: 0x1039738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v10
int64_t var_68 = v10
int64_t result
float v0
result, v0 = GameGetTimeSimulation()
int32_t x8 = *(gUI2Editor + 0x8806c)
int128_t v8
int128_t v9
int128_t v11
int128_t v12

if (x8 == 2)
    int64_t* x19_2 = *(gUI2Editor + 0x6008)
    int64_t* x8_4 = *x19_2
    
    if (x8_4 == 0)
        if (x19_2[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        result = AssetCatalogLoadAsset(x19_2, false, true)
        x8_4 = *x19_2
    
    void* x8_6 = *x8_4
    v9.d = *(x8_6 + 0x10)
    v8.d = *(x8_6 + 0x14)
    v11.d = *V20
    v12.d = *(V20 + 4)
else
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        return UI2DragActiveStart(XNoReturn()) __tailcall
    
    void* x0_1 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    int128_t v0_1 = GameGetTimeSimulation()
    int128_t v0_2 = UI2PropDynamic<float>::Eval(v0_1.d)
    int128_t v0_4 = UI2PropDynamic<float>::Eval(v0_1.d)
    int128_t v0_6 = UI2PropDynamic<float>::Eval(v0_1.d)
    float v0_8
    result, v0_8 = UI2PropDynamic<float>::Eval(v0_1.d)
    v9.d = v0_2.d f+ v0_6.d
    v8.d = v0_4.d f+ v0_8
    
    if ((arg1.d & 1) == 0)
        float v1_1 = v0 - *(x0_1 + 0x674)
        float v2_1
        float v3_1
        
        if (v1_1 < *(x0_1 + 0x664) + *(x0_1 + 0x660) || *(x0_1 + 0x654) s> 1)
            result, v0_8, v1_1, v2_1, v3_1 = PropEval<RectF>(x0_1 + 0x558, x0_1 + 0x5dc, 
                x0_1 + 0x660, v0 - *(x0_1 + 0x670), v1_1, v1_1)
        else
            v0_8 = *(x0_1 + 0x5dc)
            v1_1 = *(x0_1 + 0x5e0)
            v2_1 = *(x0_1 + 0x5e4)
            v3_1 = *(x0_1 + 0x5e8)
        
        float v4_1 = v9.d f- v0_2.d
        float v5_1 = v8.d f- v0_4.d
        v11.d = v0_2.d f+ v4_1 * v0_8
        v9.d = v0_2.d f+ v4_1 * v2_1
        v12.d = v0_4.d f+ v5_1 * v1_1
        v8.d = v0_4.d f+ v5_1 * v3_1
        
        if (*(gUI2Editor + 0x704c) s>= 2)
            int64_t x25_1 = 0
            int64_t i
            
            do
                void* x0_17 = UI2GetIndex(zx.q(*(gUI2Editor + (x25_1 << 2) + 0x6050)))
                float v0_15 = GameGetTimeSimulation()
                int128_t v0_16 = UI2PropDynamic<float>::Eval(v0_15)
                int64_t v0_18 = UI2PropDynamic<float>::Eval(v0_15)
                int64_t v0_20 = UI2PropDynamic<float>::Eval(v0_15)
                int64_t v0_14
                result, v0_14 = UI2PropDynamic<float>::Eval(v0_15)
                v10 = v0_14
                float v1_3 = v0 - *(x0_17 + 0x674)
                float v2_4
                float v3_3
                
                if (v1_3 < *(x0_17 + 0x664) + *(x0_17 + 0x660) || *(x0_17 + 0x654) s> 1)
                    v0_14.d = *(x0_17 + 0x670)
                    v0_14.d = v0 f- v0_14.d
                    result, v0_14, v1_3, v2_4, v3_3 = PropEval<RectF>(x0_17 + 0x558, x0_17 + 0x5dc, 
                        x0_17 + 0x660, v0_14.d, v1_3, v1_3)
                else
                    v0_14.d = *(x0_17 + 0x5dc)
                    v1_3 = *(x0_17 + 0x5e0)
                    v2_4 = *(x0_17 + 0x5e4)
                    v3_3 = *(x0_17 + 0x5e8)
                
                float v4_2 = v0_16.d f+ v0_20.d f- v0_16.d
                v0_14.d = v4_2 f* v0_14.d
                float v5_2 = v0_18.d f+ v10.d f- v0_18.d
                v0_14.d = v0_16.d f+ v0_14.d
                v2_4 = v0_16.d f+ v4_2 * v2_4
                v1_3 = v0_18.d f+ v5_2 * v1_3
                
                if (v11.d f< v0_14.d)
                    v11.d = v11.d
                else
                    v11.d = v0_14.d
                
                v3_3 = v0_18.d f+ v5_2 * v3_3
                
                if (v9.d f> v2_4)
                    v9.d = v9.d
                else
                    v9.d = v2_4
                
                i = x25_1 + 2
                
                if (v12.d f< v1_3)
                    v12.d = v12.d
                else
                    v12.d = v1_3
                
                x25_1 += 1
                
                if (v8.d f> v3_3)
                    v8.d = v8.d
                else
                    v8.d = v3_3
            while (i s< sx.q(*(gUI2Editor + 0x704c)))
    else if (*(gUI2Editor + 0x704c) s> 1)
        int64_t x23_1 = 0
        int64_t i_1
        
        do
            UI2GetIndex(zx.q(*(gUI2Editor + (x23_1 << 2) + 0x6050)))
            int64_t v0_9 = GameGetTimeSimulation()
            UI2PropDynamic<float>::Eval(v0_9.d)
            UI2PropDynamic<float>::Eval(v0_9.d)
            UI2PropDynamic<float>::Eval(v0_9.d)
            result = UI2PropDynamic<float>::Eval(v0_9.d)
            i_1 = x23_1 + 2
            x23_1 += 1
        while (i_1 s< sx.q(*(gUI2Editor + 0x704c)))
int128_t entry_v13
entry_v13.q = entry_v13.q
return result
