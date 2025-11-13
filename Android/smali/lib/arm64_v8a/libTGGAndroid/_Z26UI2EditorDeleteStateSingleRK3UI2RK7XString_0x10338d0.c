// 函数: _Z26UI2EditorDeleteStateSingleRK3UI2RK7XString
// 地址: 0x10338d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char*** result = operator==(arg2, &data_793a18)

if ((result.d & 1) == 0)
    int64_t* x22_1 = *(arg1 + 0x1688)
    int64_t* x8_1 = *x22_1
    AttribTable* x21_1 = *gUI2AttribTable
    
    if (x8_1 == 0)
        if (x22_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x22_1, false, true)
        x8_1 = *x22_1
    
    result = AttribMapGetDef(x21_1, **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18, 
        *macro_ptr_UI2StateOverrides, 0x69)
    
    if (result != 0)
        char*** result_1 = result
        
        if (result[1].d s>= 1)
            int64_t x23_1 = 0
            int64_t i = 0
            
            do
                result = operator==(*(*result_1 + x23_1), arg2)
                
                if ((result.d & 1) != 0)
                    return DefinitionVariableArrayDeleteItem(result_1, 
                        DefFindField(*macro_ptr_UI2StateOverrides, 0), i.d, nullptr) __tailcall
                
                i += 1
                x23_1 += 0x30
            while (i s< sx.q(result_1[1].d))

return result
