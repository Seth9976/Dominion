// 函数: _Z25DefParseReadVariableArrayPvPK8DefFieldP12DefParseItem
// 地址: 0xc8c068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DefinitionGetFieldData(arg1, arg2)
int32_t* x0_2 = DefinitionGetFieldDataAux(arg1, arg2)
int32_t x26 = *x0_2
int32_t x0_4 = DefinitionGetSize(*(arg2 + 0x30))
void* x0_6 = XMalloc(x0_4 * (x26 + 1))
int64_t x24_1

if (x26 s<= 0)
    x24_1 = sx.q(x0_4 * x26)
else
    x24_1 = sx.q(x0_4 * x26)
    memcpy(x0_6, *x0, x24_1)
    XFree(*x0)

*x0 = x0_6
*x0_2 = x26 + 1
void* x21_1 = x0_6 + x24_1
int32_t x0_10 = DefTypeCanBeInArray(*(arg2 + 0x30))
DefMap* x1_2 = *(arg2 + 0x30)

if ((x0_10 & 1) != 0)
    return DefParseReadSimpleField(x21_1, x1_2, arg2, arg3) __tailcall

DefTypeIsBuiltIn(x1_2)
return DefParseReadBlock(x21_1, *(arg2 + 0x30), *(arg3 + 0x18), false) __tailcall
