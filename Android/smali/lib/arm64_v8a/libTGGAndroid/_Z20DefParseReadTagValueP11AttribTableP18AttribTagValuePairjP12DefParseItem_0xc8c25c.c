// 函数: _Z20DefParseReadTagValueP11AttribTableP18AttribTagValuePairjP12DefParseItem
// 地址: 0xc8c25c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0_3 = AttribTagFindByTagName(arg1, XString::operator char const*())
*arg2 = x0_3

if (x0_3 != 0xffffffff)
    DefMap* x0_5 = AttribTagGetDefMap(arg1, x0_3)
    
    if (*(x0_5 + 0x18) == 5)
        pthread_kill(pthread_self(), 6)
        return CountAttribTreeItems(XNoReturn()) __tailcall
    
    if ((DefTypeIsBuiltIn(x0_5) & 1) == 0)
        *(arg2 + 8) = XMalloc(DefinitionGetSize(x0_5))
        int32_t x0_16 = DefTypeCanBeInArray(x0_5)
        uint32_t x1_4 = *arg2
        
        if ((x0_16 & 1) == 0)
            void* x0_22
            DefMap* x1_6
            DefParseTree* x2_2
            bool x3_2
            
            if ((AttribTagGetFlags(arg1, x1_4) & 0x40) != 0)
                DefField* x23_1 = *(x0_5 + 8)
                DefinitionFillBlockWithDefaults(*(arg2 + 8), x0_5)
                DefParseReadSimpleField(*(arg2 + 8), *(x23_1 + 0x18), x23_1, arg4)
                x0_22 = *(arg2 + 8)
                x2_2 = *(arg4 + 0x18)
                x3_2 = true
                x1_6 = x0_5
            else
                x0_22 = *(arg2 + 8)
                x2_2 = *(arg4 + 0x18)
                x1_6 = x0_5
                x3_2 = false
            
            DefParseReadBlock(x0_22, x1_6, x2_2, x3_2)
        else
            DefField* x0_18 = AttribTagGetField(arg1, x1_4)
            DefParseReadSimpleField(*(arg2 + 8), x0_5, x0_18, arg4)
    else
        DefParseReadSimpleField(arg2 + 8, x0_5, AttribTagGetField(arg1, *arg2), arg4)
        int32_t x0_11 = DefinitionGetSize(x0_5)
        
        if (x0_11 == 4)
            *(arg2 + 8) = zx.q(*(arg2 + 8))
        else if (x0_11 == 2)
            *(arg2 + 8) = zx.q(*(arg2 + 8))
        else if (x0_11 == 1)
            *(arg2 + 8) = zx.q(*(arg2 + 8))

return zx.q(x0_3 != 0xffffffff ? 1 : 0)
