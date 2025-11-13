// 函数: _Z30DefinitionVariableArrayAddItemPvPK8DefFieldi
// 地址: 0x104d734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DefinitionGetFieldDataAux(arg1, arg2)
int64_t* x0_2 = DefinitionGetFieldData(arg1, arg2)
void* x21_1 = *x0_2
int32_t x0_4 = DefinitionGetSize(*(arg2 + 0x30))
int64_t x0_6 = XMalloc((*x0 + 1) * x0_4)
*x0_2 = x0_6
int64_t x25 = muls.dp.d(x0_4, arg3)
int32_t x26 = (*x0 - arg3) * x0_4

if (x25.d s>= 1)
    memcpy(x0_6, x21_1, zx.q(x25.d))

if (x26 s>= 1)
    memcpy(*x0_2 + sx.q(x0_4) * (sx.q(arg3) + 1), x21_1 + x25, zx.q(x26))

int64_t result = DefinitionFillArrayItemWithDefaults(*x0_2 + x25, arg2)
*x0 += 1

if (x21_1 == 0)
    return result

return XFree(x21_1) __tailcall
