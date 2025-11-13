// 函数: _Z16UI2SaveUndoStateR12UI2UndoState
// 地址: 0x102b1d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memcpy(arg1, gUI2Editor + 0x6048, 0x1018)
int64_t* result = DefinitionNewDeepCopy(**(gUI2Editor + 0x6008), *macro_ptr_UI2Def)
*(arg1 + 0x1018) = result
int64_t* x19_1 = *result

if (x19_1[1].d s>= 1)
    int64_t x20_1 = 0
    int64_t i = 0
    
    do
        result = ClearBindings(*x19_1 + x20_1)
        i += 1
        x20_1 += 0x18
    while (i s< sx.q(x19_1[1].d))

return result
