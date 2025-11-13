// 函数: _Z34DefinitionVariableArrayInsertItemsPvPK8DefFieldii
// 地址: 0x104d830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DefinitionGetFieldDataAux(arg1, arg2)
int64_t* x0_2 = DefinitionGetFieldData(arg1, arg2)
void* x22_1 = *x0_2
int32_t x0_4 = DefinitionGetSize(*(arg2 + 0x30))
int64_t result = XMalloc((*x0 + arg4) * x0_4)
*x0_2 = result
int64_t x27 = muls.dp.d(x0_4, arg3)
int32_t x26 = (*x0 - arg3) * x0_4

if (x27.d s>= 1)
    result = memcpy(result, x22_1, zx.q(x27.d))

int64_t x25_1 = sx.q(x0_4)

if (x26 s>= 1)
    result = memcpy(*x0_2 + x25_1 * sx.q(arg4 + arg3), x22_1 + x27, zx.q(x26))

if (arg4 s>= 1)
    uint64_t i_1 = zx.q(arg4)
    int64_t x26_1 = x25_1 * sx.q(arg3)
    uint64_t i
    
    do
        result = DefinitionFillArrayItemWithDefaults(*x0_2 + x26_1, arg2)
        i = i_1
        i_1 -= 1
        x26_1 += x25_1
    while (i != 1)

*x0 += arg4

if (x22_1 == 0)
    return result

return XFree(x22_1) __tailcall
