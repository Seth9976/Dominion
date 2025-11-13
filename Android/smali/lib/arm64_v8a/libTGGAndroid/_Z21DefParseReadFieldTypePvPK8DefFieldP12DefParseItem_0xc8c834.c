// 函数: _Z21DefParseReadFieldTypePvPK8DefFieldP12DefParseItem
// 地址: 0xc8c834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg3 + 0x20) = arg2
DefMap* x8 = *(arg2 + 0x18)
int32_t x22 = *(x8 + 0x18)

if ((DefTypeCanBeInArray(x8) & 1) != 0)
    return DefParseReadSimpleField(DefinitionGetFieldData(arg1, arg2), *(arg2 + 0x18), arg2, arg3)
        __tailcall

uint64_t x8_2 = zx.q(x22 - 5)

if (x8_2.d u> 0xf)
label_c8c8d0:
    DefTypeIsBuiltIn(*(arg2 + 0x18))
    return DefParseReadBlock(DefinitionGetFieldData(arg1, arg2), *(arg2 + 0x18), *(arg3 + 0x18), 
        false) __tailcall

switch (x8_2)
    case 0
        return DefParseReadVariableArray(arg1, arg2, arg3) __tailcall
    case 1, 2, 3, 4, 5, 8, 9, 0xa, 0xb, 0xd
        goto label_c8c8d0
    case 6
        int64_t* x0_11 = DefinitionGetFieldData(arg1, arg2)
        
        if (*(arg3 + 0x18) == 0)
            *x0_11 = 0
            return x0_11
        
        void* x0_9 = XMalloc(DefinitionGetSize(*(arg2 + 0x30)))
        *x0_11 = x0_9
        return DefParseReadBlock(x0_9, *(arg2 + 0x30), *(arg3 + 0x18), false) __tailcall
    case 7
        int64_t* x0_16 = DefinitionGetFieldData(arg1, arg2)
        int64_t x0_20 = XMalloc(XString::Length() + 1)
        *x0_16 = x0_20
        strcpy(x0_20, XString::operator char const*())
        return DefinitionSetHashFromName(arg1, arg2) __tailcall
    case 0xc
        return DefParseReadDataArray(arg1, arg2, arg3) __tailcall
    case 0xe
        int32_t* x0_29 = DefinitionGetFieldData(arg1, arg2)
        void* x21_2 = *(arg3 + 0x18)
        int32_t* x20_2 = x0_29
        int32_t x8_8
        
        if (x21_2 != 0)
            x8_8 = *(x21_2 + 0x18)
            *(x21_2 + 0x20) = 0
        
        if (x21_2 == 0 || x8_8 == 0)
            *x20_2 = 0
            *(x20_2 + 8) = 0
        else
            AttribTable* x19_1 = *(arg2 + 0x38)
            AttribTagValuePair* x0_31
            uint32_t x2_9
            x0_31, x2_9 = XCalloc(x8_8 << 4)
            *(x20_2 + 8) = x0_31
            int64_t* x8_9 = *(x21_2 + 8)
            
            if (x8_9 == 0)
                *x20_2 = 0
            label_c8ca84:
                int64_t x0_39 = XFree(*(x20_2 + 8))
                *(x20_2 + 8) = 0
                return x0_39
            
            DefParseItem** i_1 = x8_9[1]
            uint32_t x2_10
            x0_29, x2_10 = DefParseReadTagValue(x19_1, x0_31, x2_9, *x8_9)
            int32_t x21_3 = x0_29.d & 1
            
            if (i_1 != 0)
                DefParseItem** i
                
                do
                    i = i_1[1]
                    x0_29, x2_10 =
                        DefParseReadTagValue(x19_1, *(x20_2 + 8) + (zx.q(x21_3) << 4), x2_10, *i_1)
                    x21_3 += x0_29.d & 1
                    i_1 = i
                while (i != 0)
            
            *x20_2 = x21_3
            
            if (x21_3 == 0)
                goto label_c8ca84
        
        return x0_29
    case 0xf
        return DefParseReadAttribTree(arg1, DefinitionGetFieldData(arg1, arg2), arg2, 
            *(arg3 + 0x18)) __tailcall
