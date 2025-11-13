// 函数: _Z23AttribMapCoerceToStringRK3UI29UI2Attribi
// 地址: 0x1030ee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8

if (arg2.d != 0x71)
    uint32_t x20_1 = arg2.d
    AttribMap* x0_2 = UI2GetContribMap(arg1, arg2)
    uint64_t x24_1 = zx.q(x20_1 - 0x72)
    int32_t var_1044
    int32_t var_1040[0x3fc]
    
    if (x24_1.d u<= 3)
        GetPropDefs(arg1, &var_1040, &var_1044)
        int64_t x20_2 = sx.q(var_1040[sx.q(arg3) * 8 + 7])
        void* x0_5 = AttribMapGetDef(*gUI2AttribTable, x0_2, *macro_ptr_UI2Transition, 0x71)
        
        if (x0_5 != 0)
            int32_t* x8_3 = *(x0_5 + 8)
            
            if (x8_3 != 0)
                if (x24_1.d u> 3)
                    pthread_kill(pthread_self(), 6)
                    return IsInActiveSet(XNoReturn()) __tailcall
                
                int64_t (* const x0_6)()
                int32_t x1_4
                
                switch (x24_1)
                    case 0
                        x1_4 = x8_3[x20_2 * 4]
                        x0_6 = &data_11805c8
                    case 1
                        x8_3[x20_2 * 4 + 1]
                        return XFormatString("%g")
                    case 2
                        x8_3[x20_2 * 4 + 2]
                        return XFormatString("%g")
                    case 3
                        x1_4 = x8_3[x20_2 * 4 + 3]
                        x0_6 = gAnimCurve
                
                SymbolMapLookupName(x0_6, x1_4)
        
        return XString::XString(entry_x8)
    
    AttribTable* x0_7 = *gUI2AttribTable
    
    if (x20_1 == 0x111)
        int64_t* x0_8 = AttribMapGetDef(x0_7, x0_2, *macro_ptr_SpineSlotMappings, 0x110)
        GetPropDefs(arg1, &var_1040, &var_1044)
        
        if (x0_8 != 0)
            int64_t x8_6 = sx.q(var_1040[sx.q(arg3) * 8 + 7])
            
            if (x8_6.d s< x0_8[1].d)
                *(*x0_8 + (x8_6 << 4) + 8)
        
        return XString::XString(entry_x8)
    
    DefMap* x0_12 = AttribTagGetDefMap(x0_7, x20_1)
    uint64_t x8_9 = zx.q(*(x0_12 + 0x18) - 1)
    
    if (x8_9.d u> 0x28)
    label_103112c:
        
        if (x0_12 == *macro_ptr_UI2ExprTreeDef)
            *AttribMapGetDef(*gUI2AttribTable, x0_2, x0_12, x20_1)
    else
        switch (x8_9)
            case 0
                int32_t x0_14 = AttribMapGetInt(*gUI2AttribTable, x0_2, x20_1)
                SymbolMap* x0_16 = AttribTagGetSymbolTable(*gUI2AttribTable, x20_1)
                
                if (x0_16 == 0)
                    return XFormatString("%d") __tailcall
                
                SymbolMapLookupName(x0_16, x0_14)
            case 1, 2, 4, 5, 6, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x17, 
                    0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                    0x25, 0x26, 0x27
                goto label_103112c
            case 3
                AttribMapGetFloat(*gUI2AttribTable, x0_2, x20_1)
                return XFormatString("%g") __tailcall
            case 7
                AttribMapGetString(*gUI2AttribTable, x0_2, x20_1)
            case 0xe
                if (AttribMapGetAssetPtr(*gUI2AttribTable, x0_2, x20_1) != 0)
                    return XString::XString(entry_x8) __tailcall
            case 0x15
                int32_t* x0_28 = AttribMapGetDef(*gUI2AttribTable, x0_2, *macro_ptr_RectF, x20_1)
                
                if (x20_1 != 0x80)
                    *x0_28
                    x0_28[1]
                    x0_28[2]
                    x0_28[3]
                else
                    AttribMap* x0_30 = UI2GetContribMap(arg1, 0x76)
                    int32_t* x0_32 =
                        AttribMapGetDef(*gUI2AttribTable, x0_30, *macro_ptr_RectF, 0x76)
                    float v0_7 = *x0_32
                    float v1_4 = x0_32[1]
                    float v2_4 = x0_32[2] f- v0_7
                    int32_t v3_4 = x0_32[3] f- v1_4
                    float v4_4 = v0_7 + v2_4 * *x0_28
                    v0_7 = v0_7 + v2_4 f* x0_28[2]
                    v2_4 = v1_4 + v3_4 f* x0_28[1]
                    v1_4 = v1_4 f+ v3_4 f* x0_28[3]
                    v4_4 - v0_7
                    
                    if (v4_4 < v0_7)
                        v0_7 = v4_4
                    
                    v2_4 - v1_4
                    float v6_4 = fconvert.s(0.5f)
                    float v7_4 = fconvert.s(-0.5f)
                    
                    v4_4 = v2_4 < v1_4 ? v2_4 : v1_4
                    
                    if (not(v2_4 < v1_4))
                        v1_4 = v2_4
                    
                    v3_4 = v0_7 < 0f ? v7_4 : v6_4
                    
                    v1_4 = v1_4 - v4_4
                    v0_7 = v0_7 f+ v3_4
                    
                    v3_4 = v4_4 < 0f ? v7_4 : v6_4
                    
                    vcvts_s32_f32(v0_7)
                    v0_7 = v4_4 f+ v3_4
                    
                    v3_4 = v1_4 < 0f ? v7_4 : v6_4
                    
                    vcvts_s32_f32(v0_7)
                    vcvts_s32_f32(v1_4 f+ v3_4)
                
                return XFormatString("%g %g %g %g") __tailcall
            case 0x16
                int32_t* x0_34 = AttribMapGetDef(*gUI2AttribTable, x0_2, *macro_ptr_Vec2, x20_1)
                *x0_34
                x0_34[1]
                return XFormatString("%g %g") __tailcall
            case 0x28
                char* x0_37 = AttribMapGetDef(*gUI2AttribTable, x0_2, *macro_ptr_ColorRgbaI, x20_1)
                *x0_37
                x0_37[1]
                x0_37[2]
                x0_37[3]
                return XFormatString("%d %d %d %d") __tailcall

return XString::XString(entry_x8) __tailcall
