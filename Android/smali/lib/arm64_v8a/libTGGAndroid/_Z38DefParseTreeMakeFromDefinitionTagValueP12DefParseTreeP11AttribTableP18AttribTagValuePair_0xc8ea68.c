// 函数: _Z38DefParseTreeMakeFromDefinitionTagValueP12DefParseTreeP11AttribTableP18AttribTagValuePair
// 地址: 0xc8ea68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x1 = *arg3

if (x1 == 0xffffffff)
    return 

char* x0_1 = AttribTagGetTagName(arg2, x1)
DefMap* x0_3 = AttribTagGetDefMap(arg2, *arg3)

if ((DefTypeIsBuiltIn(x0_3) & 1) != 0)
    return DefParseTreeMakeFromDefinitionArrayableField(arg1, arg3 + 8, x0_3, x0_1, 
        AttribTagGetFlags(arg2, *arg3), AttribTagGetSymbolTable(arg2, *arg3)) __tailcall

DefParseTree* x0_9
void* __offset(AttribTagValuePair, 0x8) x1_4
DefMap* x2

if ((DefTypeCanBeInArray(x0_3) & 1) != 0)
    x1_4 = *(arg3 + 8)
    x0_9 = arg1
    x2 = x0_3
label_c8eba4:
    return DefParseTreeMakeFromDefinitionArrayableField(x0_9, x1_4, x2, x0_1, 0, 0) __tailcall

if ((AttribTagGetFlags(arg2, *arg3) & 0x40) != 0)
    x1_4 = *(arg3 + 8)
    x0_9 = arg1
    x2 = *(*(x0_3 + 8) + 0x18)
    goto label_c8eba4

void* x22_3 = *(arg3 + 8)
char* x20_2 = *(DefParseTreeSetItemSubTree(arg1, x0_1) + 0x18)
*x0_3
XString::operator=(x20_2)
arg1 = DefIterGetFirst(x0_3)
int32_t i = arg1.d

if (arg1.d == 0xffffffff)
    return 

do
    DefField* x0_19 = DefIterGetNext(x0_3, &i)
    DefParseTreeMakeFromDefinitionSubField(x20_2, x22_3, *(x0_19 + 0x18), x0_19, nullptr)
while (i != 0xffffffff)
