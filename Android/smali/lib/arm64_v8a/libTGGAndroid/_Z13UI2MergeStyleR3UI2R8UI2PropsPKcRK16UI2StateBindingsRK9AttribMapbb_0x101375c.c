// 函数: _Z13UI2MergeStyleR3UI2R8UI2PropsPKcRK16UI2StateBindingsRK9AttribMapbb
// 地址: 0x101375c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg7.d
int32_t x23 = arg6.d

if (arg3 == 0 || zx.d(*arg3) == 0)
    if ((x25 & 1) != 0)
        return nullptr
    
    int32_t x8_2 = *(arg1 + 0x167c)
    
    if (x8_2 == 3)
        arg3 = "Text"
    else
        if (x8_2 != 5)
            return nullptr
        
        arg3 = "Button"
    
    x25 = 1

AttribMap* result = UI2TryGetAttribsByName(*(gUI2 + 0x60), arg3)

if (result != 0)
    UI2MergeStyle(arg1, arg2, AttribMapGetString(*gUI2AttribTable, result, 0x67), arg4, arg5, 
        x23.b & 1, x25.b & 1)
    UI2& x0_4
    UI2Props& x2_1
    UI2PropsStatic* x3_1
    AttribMap* result_1
    UI2StateBindings const& x5_1
    
    if ((x23 & 1) == 0)
        x3_1 = arg1 + 0x1438
        x0_4 = arg1
        x2_1 = arg2
        result_1 = result
        x5_1 = arg4
    else
        int32_t var_50_1 = 0
        x3_1 = arg1 + 0x1438
        UI2StateBindings var_58
        x5_1 = &var_58
        x0_4 = arg1
        x2_1 = arg2
        result_1 = result
    
    UI2MergeAttribMap(x0_4, nullptr, x2_1, x3_1, result_1, x5_1, true, arg5)

return result
