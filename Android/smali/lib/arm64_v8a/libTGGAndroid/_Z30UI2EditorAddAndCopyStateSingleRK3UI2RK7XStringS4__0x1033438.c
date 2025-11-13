// 函数: _Z30UI2EditorAddAndCopyStateSingleRK3UI2RK7XStringS4_
// 地址: 0x1033438
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = operator==(arg3, &data_793a18)

if ((result.d & 1) != 0)
    return result

if (UI2FindOverride(arg1, arg2) == 0)
    return UI2EditorAddStateSingle(arg1, arg3) __tailcall

int64_t* x22_1 = *(arg1 + 0x1688)
int64_t* x8_1 = *x22_1

if (x8_1 == 0)
    if (x22_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22_1, false, true)
    x8_1 = *x22_1

AttribMap* x23_1 = **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18
char*** x0_7 = AttribMapGetDef(*gUI2AttribTable, x23_1, *macro_ptr_UI2StateOverrides, 0x69)
char*** x22_2

if (x0_7 == 0)
    AttribTable* x0_11 = *gUI2AttribTable
    int64_t var_60 = 0
    int64_t var_58_1 = 0
    AttribMapSetDef(x0_11, x23_1, 0x69, &var_60)
    x22_2 = AttribMapGetDef(*gUI2AttribTable, x23_1, *macro_ptr_UI2StateOverrides, 0x69)
else
    x22_2 = x0_7
    
    if (x0_7[1].d s>= 1)
        int64_t x23_2 = 0
        int64_t i = 0
        
        do
            result = operator==(*(*x22_2 + x23_2), arg3)
            
            if ((result.d & 1) != 0)
                return result
            
            i += 1
            x23_2 += 0x30
        while (i s< sx.q(x22_2[1].d))

DefinitionVariableArrayAddItem(x22_2, DefFindField(*macro_ptr_UI2StateOverrides, 0), x22_2[1].d)
void* x0_18 = UI2FindOverride(arg1, arg2)
int64_t x9_4 = *x22_2 + sx.q(x22_2[1].d) * 0x30
AttribMapCopy(*gUI2AttribTable, x0_18 + 0x18, x9_4 - 0x18)
return DefDeepCopyString(x9_4 - 0x30, XString::operator char const*())
