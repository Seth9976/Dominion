// 函数: _Z17DefParseReadArrayPK8DefFieldPviPiP12DefParseTree
// 地址: 0xc8bb00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = arg2
int32_t x0_1 = DefinitionGetSize(*(arg1 + 0x30))
*(arg5 + 0x20) = 0
*arg4 = 0
DefParseItem** i = *(arg5 + 8)

while (i != 0)
    DefParseItem* x24_1 = *i
    i = i[1]
    
    if (strcasecmp(XString::operator char const*(), "E") == 0)
        int32_t x0_8 = DefTypeCanBeInArray(*(arg1 + 0x30))
        DefMap* x1_1 = *(arg1 + 0x30)
        
        if ((x0_8 & 1) == 0)
            DefTypeIsBuiltIn(x1_1)
            DefParseReadBlock(x22, *(arg1 + 0x30), *(x24_1 + 0x18), false)
        else
            DefParseReadSimpleField(x22, x1_1, arg1, x24_1)
        
        int32_t x8_2 = *arg4 + 1
        *arg4 = x8_2
        
        if (x8_2 == arg3)
            break
        
        x22 += sx.q(x0_1)

return 1
