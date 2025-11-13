// 函数: _Z23UI2EditorAddStateSingleRK3UI2RK7XString
// 地址: 0x10332bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = operator==(arg2, &data_793a18)

if ((result.d & 1) != 0)
    return result

int64_t* x21_1 = *(arg1 + 0x1688)
int64_t* x8_1 = *x21_1

if (x8_1 == 0)
    if (x21_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21_1, false, true)
    x8_1 = *x21_1

AttribMap* x21_2 = **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18
char*** x0_5 = AttribMapGetDef(*gUI2AttribTable, x21_2, *macro_ptr_UI2StateOverrides, 0x69)
char*** x20_1

if (x0_5 == 0)
    AttribTable* x0_7 = *gUI2AttribTable
    int64_t var_40 = 0
    int64_t var_38_1 = 0
    AttribMapSetDef(x0_7, x21_2, 0x69, &var_40)
    x20_1 = AttribMapGetDef(*gUI2AttribTable, x21_2, *macro_ptr_UI2StateOverrides, 0x69)
else
    x20_1 = x0_5
    
    if (x0_5[1].d s>= 1)
        int64_t x21_3 = 0
        int64_t i = 0
        
        do
            result = operator==(*(*x20_1 + x21_3), arg2)
            
            if ((result.d & 1) != 0)
                return result
            
            i += 1
            x21_3 += 0x30
        while (i s< sx.q(x20_1[1].d))

DefinitionVariableArrayAddItem(x20_1, DefFindField(*macro_ptr_UI2StateOverrides, 0), x20_1[1].d)
return DefDeepCopyString(*x20_1 + sx.q(x20_1[1].d) * 0x30 - 0x30, XString::operator char const*())
