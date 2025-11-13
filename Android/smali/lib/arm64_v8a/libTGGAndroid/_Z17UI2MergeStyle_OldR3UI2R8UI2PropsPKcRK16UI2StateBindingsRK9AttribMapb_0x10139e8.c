// 函数: _Z17UI2MergeStyle_OldR3UI2R8UI2PropsPKcRK16UI2StateBindingsRK9AttribMapb
// 地址: 0x10139e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribMap* result = UI2TryGetAttribsByName(*(gUI2 + 0x60), arg3)

if (result != 0)
    UI2& x0_1
    UI2Props& x2
    UI2PropsStatic* x3
    AttribMap* result_1
    UI2StateBindings const& x5
    
    if ((arg6.d & 1) == 0)
        x3 = arg1 + 0x1438
        x0_1 = arg1
        x2 = arg2
        result_1 = result
        x5 = arg4
    else
        int32_t var_50_1 = 0
        x3 = arg1 + 0x1438
        UI2StateBindings var_58
        x5 = &var_58
        x0_1 = arg1
        x2 = arg2
        result_1 = result
    
    UI2MergeAttribMap(x0_1, nullptr, x2, x3, result_1, x5, true, arg5)

return result
