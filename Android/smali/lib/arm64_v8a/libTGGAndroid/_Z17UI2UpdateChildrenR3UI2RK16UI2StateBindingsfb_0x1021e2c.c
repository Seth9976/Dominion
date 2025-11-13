// 函数: _Z17UI2UpdateChildrenR3UI2RK16UI2StateBindingsfb
// 地址: 0x1021e2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_60 = v10
int64_t result
float v0
int64_t v1
int128_t v18
result, v0, v1, v18 = GameGetTimeSimulation()
float v9 = v0

if (*(arg1 + 0x15f8) != 0)
    result, v1, v18 = UI2UpdateTaptip(arg1, *(arg1 + 0x13f1), arg2, arg3)

int32_t x8_2 = *(arg1 + 0x167c)

if (x8_2 != 3)
    if (x8_2 != 2)
    label_1022144:
        int32_t x21_2 = *(arg1 + 0x1970)
        
        if (x21_2 != 0)
            uint64_t x24_1 = 0
            bool cond:0_1
            
            do
                uint64_t x8_14 = zx.q(*(arg1 + (x24_1 << 0x20 s>> 0x1e) + 0x1870))
                int64_t x9_3 = *gUI2
                
                if (*(arg1 + 0x1710) != 0f || *(x9_3 + x8_14 * 0x19a8 + 0x1710) != 0f
                        || *(x9_3 + x8_14 * 0x19a8 + 0x1378) != 0)
                    UI2* x20_2 = x9_3 + x8_14 * 0x19a8
                    void var_148
                    GetInheritedData(arg1, x20_2, &var_148)
                    result = UI2Update(x20_2, arg1, &var_148, false, arg3)
                
                cond:0_1 = x21_2 == x24_1.d + 1
                x24_1 = zx.q(x24_1.d + 1)
            while (not(cond:0_1))
        
        if (*(arg1 + 0x1528) != 0)
            return UI2TextUpdateScrollbar(arg1, arg3)
    else
        v1.d = *V20
        
        if (*(arg1 + 0x175c) f!= v1.d)
            return UI2TableUpdate(arg1, arg2, arg4 & 1, arg3) __tailcall
        
        v1.d = *(V20 + 4)
        
        if (not(*(arg1 + 0x1760) f== v1.d))
            return UI2TableUpdate(arg1, arg2, arg4 & 1, arg3) __tailcall
    
    return result

if (zx.d(*(arg1 + 0x15b4)) != 0)
    float v3_1 = *(arg1 + 0x16c0)
    float v4_1 = *(arg1 + 0x16b4)
    float v6_1 = *(arg1 + 0x16b8)
    v1.d = *(arg1 + 0x175c)
    float v2_1 = *(arg1 + 0x1760)
    v0 = *(arg1 + 0x16b0)
    float v7_1 = *(arg1 + 0x16bc)
    v18 = *(arg1 + 0x1548)
    float v20_1 = *V20
    float v21_1 = *(V20 + 4)
    float v22_1 = v3_1 * v3_1
    float v23_1 = v4_1 * v4_1
    float v24_1 = v6_1 * v6_1
    *(arg1 + 0x1830) = *(arg1 + 0x1558)
    float v5_1 = v0 * 0f
    float v25_1 = v7_1 * v7_1
    float v26_1 = v4_1 * v6_1
    float v27_1 = v3_1 * v7_1
    float v28_1 = v3_1 * v6_1
    v6_1 = v6_1 * v7_1
    v7_1 = v4_1 * v7_1
    v3_1 = v3_1 * v4_1
    v1.d = v1.d f* v0
    v2_1 = v2_1 * v0
    *(arg1 + 0x1820) = v18
    v4_1 = v20_1 * v0
    v18.d = v21_1 * v0
    float v16_1 = *(arg1 + 0x16c4)
    float v17_1 = *(arg1 + 0x16c8)
    v20_1 = v26_1 - v27_1
    v5_1 = v5_1 + v5_1
    v21_1 = v26_1 + v27_1
    float v19_1 = v22_1 + v23_1 - v24_1 - v25_1
    v22_1 = v22_1 - v23_1 + v24_1 - v25_1
    v7_1 = v5_1 * (v28_1 + v7_1)
    v3_1 = v5_1 * (v6_1 - v3_1)
    v5_1 = (v2_1 + v2_1) * v20_1
    v6_1 = (v1.d f+ v1.d) * v21_1
    v20_1 = (v18.d f+ v18.d) * v20_1
    v18.d = v18.d f* v22_1
    v1.d = v1.d f* v19_1
    int32_t x8_5 = *(arg1 + 0x15c4)
    v18.d = (v4_1 + v4_1) * v21_1 f+ v18.d
    v1.d = v1.d f+ v5_1
    v5_1 = v3_1 f+ v18.d
    v1.d = v7_1 f+ v1.d
    v2_1 = v3_1 + v6_1 + v2_1 * v22_1
    v3_1 = v16_1 + v7_1 + v4_1 * v19_1 + v20_1
    v4_1 = v17_1 + v5_1
    v1.d = v16_1 f+ v1.d
    v1.d = v1.d f- v3_1
    *(arg1 + 0x185c) = *(arg1 + 0x1444)
    *(arg1 + 0x1850) = x8_5
    *(arg1 + 0x17f4) = v3_1
    *(arg1 + 0x17f8) = v4_1
    *(arg1 + 0x17fc) = v1.d
    *(arg1 + 0x1800) = v17_1 + v2_1 - v4_1
    v1 = *(arg1 + 0x155c)
    v10.d = v1.d f* v0
    v10:4.d = v1:4.d f* v0
    int64_t v0_5
    v0_5.d = v10.d f* UI2PropDynamic<float>::Eval(v9).d
    v0_5:4.d = v10:4.d f* v0_5.d
    *(arg1 + 0x1804) = v0_5
    v10.d = *(arg1 + 0x16b0)
    float v0_7 = UI2PropDynamic<float>::Eval(v9)
    float v2_3 = *(arg1 + 0xa54)
    float v3_3 = *(arg1 + 0xa50)
    float v1_2 = v9 - *(arg1 + 0xa64)
    *(arg1 + 0x1838) = v10.d f* v0_7
    int32_t x0_6
    
    if (v1_2 < v2_3 + v3_3 || *(arg1 + 0xa44) s> 1)
        x0_6 = PropEval<ColorRgbaI>(arg1 + 0x9d8, arg1 + 0xa14, arg1 + 0xa50, v9 - *(arg1 + 0xa60), 
            v1_2, v1_2)
    else
        x0_6 = *(arg1 + 0xa14)
    
    v0_7 = *(arg1 + 0xaf4)
    v2_3 = *(arg1 + 0xae4)
    v3_3 = *(arg1 + 0xae0)
    *(arg1 + 0x1834) = x0_6
    v1_2 = v9 - v0_7
    int32_t x0_8
    
    if (v1_2 < v2_3 + v3_3 || *(arg1 + 0xad4) s> 1)
        x0_8 = PropEval<ColorRgbaI>(arg1 + 0xa68, arg1 + 0xaa4, arg1 + 0xae0, v9 - *(arg1 + 0xaf0), 
            v1_2, v1_2)
    else
        x0_8 = *(arg1 + 0xaa4)
    
    *(arg1 + 0x1844) = x0_8
    *(arg1 + 0x184c) = *(arg1 + 0x15b7)
    *(arg1 + 0x1848) = *(arg1 + 0x15bf)
    result = UITextBox::Update(arg1.b - 0x20, nullptr)

goto label_1022144
