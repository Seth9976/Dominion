// 函数: _Z33DefinitionVariableArrayDeleteItemPvPK8DefFieldiP11AttribTable
// 地址: 0x104d950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DefinitionGetFieldDataAux(arg1, arg2)
int64_t* x0_2 = DefinitionGetFieldData(arg1, arg2)
int32_t x0_4 = DefinitionGetSize(*(arg2 + 0x30))
void* x21_1 = *x0_2 + muls.dp.d(x0_4, arg3)
int64_t result = DefinitionDeleteVariableArrayField(x21_1, arg2, arg4)
int32_t x8_2 = *x0
int32_t x8_3

if (x8_2 != 1)
    int64_t x9_1 = sx.q(x0_4)
    int32_t x10_3 = (x8_2 + not.d(arg3)) * x9_1.d
    
    if (x10_3 s>= 1)
        result = memcpy(x21_1, x21_1 + x9_1, zx.q(x10_3))
        x8_2 = *x0
    
    x8_3 = x8_2 - 1
else
    result = XFree(*x0_2)
    x8_3 = 0
    *x0_2 = 0

*x0 = x8_3
return result
