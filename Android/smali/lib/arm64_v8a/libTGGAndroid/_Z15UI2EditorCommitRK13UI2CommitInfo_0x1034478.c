// 函数: _Z15UI2EditorCommitRK13UI2CommitInfo
// 地址: 0x1034478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
*gUI2 + zx.q(*arg1) * 0x19a8
char* x0_1 = XString::operator char const*()
int128_t var_1060
XString::XString(&var_1060)
int32_t x0_4 = operator==(&var_1060, x0_1)
AttribMap* result = XString::~XString()

if ((x0_4 & 1) == 0)
    XString::XString(&var_1060)
    int32_t x0_7 = operator==(&var_1060, x0_1)
    result = XString::~XString()
    
    if ((x0_7 & 1) != 0)
        UI2* x0_9 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
        int64_t x19_2 = sx.q(*(gUI2Editor + 0x7058))
        GetPropDefs(*gUI2 + zx.q(*(x0_9 + 0x19a0)) * 0x19a8, &var_1060, nullptr)
        uint32_t x20_1 = *(&(&var_1060)[x19_2 * 2] + 8)
        *(x0_9 + 0x1370) = 0
        result = GetEdittedMap(x0_9, zx.q(x20_1))
        uint64_t x8_4 = zx.q(x20_1 - 0x64)
        
        if (x8_4.d u<= 0xaf)
            AttribMap* result_1 = result
            AttribTable* x0_34
            uint32_t x2_11
            int128_t* x3_6
            AttribTable* x8_8
            
            switch (x8_4)
                case 0, 0x78, 0x96, 0x97, 0xa8, 0xae
                    XString::XString()
                    XString::operator char const*()
                    XString::operator=(&var_1060)
                    AttribMapSetString(*gUI2AttribTable, result_1, x20_1, 
                        XString::operator char const*())
                    UI2CreateUndoCheckpoint(true)
                    return XString::~XString()
                case 3
                    XString::XString()
                    XString::operator char const*()
                    char var_1068
                    XString::operator=(&var_1068)
                    MakeStyles(*(gUI2 + 0x60), zx.q(*(x0_9 + 0x167c)), &var_1060)
                    
                    for (int64_t i = 0; i != 0x400; i += 8)
                        char* x1_16 = *(&var_1060 + i)
                        
                        if (x1_16 == 0)
                            break
                        
                        if ((operator==(&var_1068, x1_16) & 1) != 0)
                            AttribMapSetString(*gUI2AttribTable, result_1, 0x67, 
                                XString::operator char const*())
                            UI2CreateUndoCheckpoint(true)
                            break
                    
                    return XString::~XString()
                case 9
                    x3_6 = &var_1060
                    x2_11 = 0x6d
                    var_1060.q = XString::operator char const*()
                    x8_8 = *gUI2AttribTable
                    var_1060:8.d = 0
                label_103496c:
                    AttribMapSetDef(x8_8, result_1, x2_11, x3_6)
                    return UI2CreateUndoCheckpoint(true)
                case 0xb
                    return UI2EditorTryRenameState(x0_9, arg1 + 0x10)
                case 0xe, 0xf, 0x10, 0x11
                    return UI2CommitAnimation(x0_9, result_1, zx.q(x20_1), *(gUI2Editor + 0x7058), 
                        XString::operator char const*())
                case 0x12, 0x1c, 0x82, 0x94
                    char* s
                    int128_t v0_2
                    s, v0_2 = XString::operator char const*()
                    v0_2 = *RECT0
                    var_1060 = v0_2
                    result = sscanf(s, " %f %f %f %f", &var_1060, &var_1060 | 4, &var_1060 | 8, 
                        &var_1060 | 0xc, v0_2)
                    
                    if (result.d == 4)
                        goto label_1034984
                    
                    int32_t v0_3
                    
                    if (result.d == 2)
                        v0_3 = var_1060:4.d
                        var_1060:8.d = var_1060.d
                    label_1034980:
                        var_1060:0xc.d = v0_3
                    label_1034984:
                        
                        if (x20_1 != 0x80)
                            goto label_1034a88
                        
                        int64_t v0_6 = GameGetTimeSimulation()
                        int64_t v0_7 = UI2PropDynamic<float>::Eval(v0_6.d)
                        int64_t v0_9 = UI2PropDynamic<float>::Eval(v0_6.d)
                        int64_t v0_11 = UI2PropDynamic<float>::Eval(v0_6.d)
                        float v0_13
                        result, v0_13 = UI2PropDynamic<float>::Eval(v0_6.d)
                        float v2_1 = var_1060.d
                        float v3_1 = var_1060:4.d
                        float v5_1 = var_1060:8.d
                        float v7_1 = var_1060:0xc.d
                        float v1_4 = v0_7.d f+ v0_11.d
                        v0_13 = v0_9.d f+ v0_13
                        
                        if (not(v2_1 f> v0_7.d))
                            v2_1 = v0_7.d
                        
                        if (not(v5_1 < v1_4))
                            v5_1 = v1_4
                        
                        if (not(v3_1 f> v0_9.d))
                            v3_1 = v0_9.d
                        
                        float v18_1
                        
                        v18_1 = v7_1 < v0_13 ? v7_1 : v0_13
                        
                        float v17_1 = *RECT0
                        float v16_1 = *(RECT0 + 4)
                        float v6_1 = *(RECT0 + 8)
                        float v4_1 = *(RECT0 + 0xc)
                        int32_t x8_10 = (v2_1 > v5_1 ? 1 : 0) | (v3_1 > v18_1 ? 1 : 0)
                        
                        v7_1 = x8_10 != 0 ? v17_1 : v2_1
                        
                        if (x8_10 != 0)
                            v3_1 = v16_1
                        
                        if (x8_10 != 0)
                            v5_1 = v6_1
                        
                        v2_1 = x8_10 != 0 ? v4_1 : v18_1
                        
                        if (v7_1 != v17_1 || v3_1 != v16_1 || v5_1 != v6_1 || not(v2_1 == v4_1))
                            v1_4 = v1_4 f- v0_7.d
                            v0_13 = v0_13 f- v0_9.d
                            var_1060.d = (v7_1 f- v0_7.d) / v1_4
                            var_1060:4.d = (v3_1 f- v0_9.d) / v0_13
                            var_1060:8.d = (v5_1 f- v0_7.d) / v1_4
                            var_1060:0xc.d = (v2_1 f- v0_9.d) / v0_13
                            x20_1 = 0x80
                            goto label_1034a88
                    else if (result.d == 1)
                        v0_3 = var_1060.d
                        var_1060:4.d = v0_3
                        var_1060:8.d = v0_3
                        goto label_1034980
                case 0x1a
                    result = sscanf(XString::operator char const*(), " %f", &var_1060)
                    
                    if (result.d == 1)
                        float v0_5 = var_1060.d
                        float temp0_1 = vmin_f32(v0_5, fconvert.s(1f))
                        
                        v0_5 = v0_5 < 0f ? 0f : temp0_1
                        
                        var_1060.d = v0_5
                        AttribMapSetFloat(*gUI2AttribTable, result_1, 0x7e, v0_5)
                        return UI2CreateUndoCheckpoint(true)
                case 0x21, 0x8b
                    char* s_2 = XString::operator char const*()
                    var_1060.d = 0
                    result = sscanf(s_2, " %d", &var_1060)
                    
                    if (result.d == 1)
                        AttribMapSetInt(*gUI2AttribTable, result_1, x20_1, var_1060.d)
                        return UI2CreateUndoCheckpoint(true)
                case 0x24, 0x2f, 0x34, 0x35, 0x36, 0x37, 0x39, 0x7a, 0x7d, 0x7f, 0x80
                    result = sscanf(XString::operator char const*(), " %f", &var_1060)
                    
                    if (result.d == 1)
                        AttribMapSetFloat(*gUI2AttribTable, result_1, x20_1, var_1060.d)
                        return UI2CreateUndoCheckpoint(true)
                case 0x28
                    var_1060.q = XString::operator char const*()
                    var_1060:8.d = 0
                    x3_6 = &var_1060
                    x8_8 = *gUI2AttribTable
                    x2_11 = 0x8c
                    goto label_103496c
                case 0x2a
                    var_1060.q = XString::operator char const*()
                    var_1060:8.d = 0
                    x3_6 = &var_1060
                    x8_8 = *gUI2AttribTable
                    x2_11 = 0x8e
                    goto label_103496c
                case 0x2b
                    var_1060.q = XString::operator char const*()
                    var_1060:8.d = 0
                    x3_6 = &var_1060
                    x8_8 = *gUI2AttribTable
                    x2_11 = 0x8f
                    goto label_103496c
                case 0x64, 0x72, 0x91, 0x92, 0xa7, 0xaf
                    char* x0_21 = XString::operator char const*()
                    result = AssetTypeFromPath(x0_21)
                    
                    if (result.d != 0)
                        XAsset* x0_23 = AssetPtrFromPath(x0_21, zx.q(result.d))
                        AttribMapSetAssetPtr(*gUI2AttribTable, result_1, x20_1, x0_23)
                        return UI2CreateUndoCheckpoint(true)
                case 0x65, 0x66, 0x68
                    var_1060.q = XString::operator char const*()
                    var_1060:8.d = 0
                    x3_6 = &var_1060
                    x0_34 = *gUI2AttribTable
                label_1034a90:
                    AttribMapSetDef(x0_34, result_1, x20_1, x3_6)
                    return UI2CreateUndoCheckpoint(true)
                case 0x6a, 0x6b, 0x7c, 0x95
                    char* s_1 = XString::operator char const*()
                    var_1060.q = *V20
                    int64_t v0_4
                    result, v0_4 = sscanf(s_1, " %f %f", &var_1060, &var_1060 | 4)
                    
                    if (result.d == 2)
                        goto label_1034a88
                    
                    if (result.d == 1)
                        v0_4.d = var_1060.d
                        uint64_t v1_2 = *V21
                        v0_4.d = v1_2.d f* v0_4.d
                        v0_4:4.d = v1_2:4.d f* v0_4.d
                        var_1060.q = v0_4
                    label_1034a88:
                        x3_6 = &var_1060
                        x0_34 = *gUI2AttribTable
                        goto label_1034a90
                case 0x71
                    var_1060.q = XString::operator char const*()
                    var_1060:8.d = 0
                    x3_6 = &var_1060
                    x8_8 = *gUI2AttribTable
                    x2_11 = 0xd5
                    goto label_103496c
                case 0x75, 0x76, 0x88, 0x8a
                    result = AsColor(XString::operator char const*(), &var_1060)
                    
                    if ((result.d & 1) != 0)
                        goto label_1034a88

return result
