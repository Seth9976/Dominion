// 函数: _Z33DefinitionVariableArrayInitToSizePvPK8DefFieldi
// 地址: 0x104d6a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DefinitionGetFieldDataAux(arg1, arg2)
int64_t* result = DefinitionGetFieldData(arg1, arg2)

if (arg3 != 0)
    int64_t* result_1 = result
    int32_t x0_3 = DefinitionGetSize(*(arg2 + 0x30))
    result = XMalloc(x0_3 * arg3)
    *result_1 = result
    *x0 = arg3
    
    if (arg3 s>= 1)
        int64_t x22_1 = 0
        uint64_t i_1 = zx.q(arg3)
        uint64_t i
        
        do
            result = DefinitionFillArrayItemWithDefaults(*result_1 + x22_1, arg2)
            i = i_1
            i_1 -= 1
            x22_1 += sx.q(x0_3)
        while (i != 1)

return result
