// 函数: _Z26DefParseReadBlockNoVersionPvPK6DefMapP12DefParseTree
// 地址: 0xc8cb90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefField* result = DefIterGetFirst(arg2)
int32_t i = result.d

if (result.d != 0xffffffff)
    if (arg3 != 0)
        do
            result = DefIterGetNext(arg2, &i)
            int32_t x9_1 = *(result + 0x50)
            
            if ((x9_1 & 8) == 0)
                DefField* result_3 = result
                result = *(result + 0x18)
                int32_t x8_2 = *(result + 0x18)
                
                if (x8_2 == 6)
                    result = DefParseReadFixedArray(arg1, result_3, arg3)
                else if ((x9_1 & 0x40) != 0)
                    if (x8_2 == 0x14)
                        result = DefParseReadAttribTree(arg1, 
                            DefinitionGetFieldData(arg1, result_3), result_3, arg3)
                    else if (x8_2 != 0x13)
                        DefTypeIsBuiltIn(result)
                        result = DefParseReadBlock(DefinitionGetFieldData(arg1, result_3), 
                            *(result_3 + 0x18), arg3, false)
                    else
                        result = DefinitionGetFieldData(arg1, result_3)
                        int32_t x8_3 = *(arg3 + 0x18)
                        DefField* result_1 = result
                        *(arg3 + 0x20) = 0
                        
                        if (x8_3 == 0)
                            *result_1 = 0
                            *(result_1 + 8) = 0
                        else
                            AttribTable* x23_1 = *(result_3 + 0x38)
                            AttribTagValuePair* x0_5
                            uint32_t x2_1
                            x0_5, x2_1 = XCalloc(x8_3 << 4)
                            *(result_1 + 8) = x0_5
                            int64_t* x8_4 = *(arg3 + 8)
                            
                            if (x8_4 == 0)
                                *result_1 = 0
                                result = XFree(*(result_1 + 8))
                                *(result_1 + 8) = 0
                            else
                                DefParseItem** j_1 = x8_4[1]
                                uint32_t x2_2
                                result, x2_2 = DefParseReadTagValue(x23_1, x0_5, x2_1, *x8_4)
                                int32_t x24_1 = result.d & 1
                                
                                if (j_1 != 0)
                                    DefParseItem** j
                                    
                                    do
                                        j = j_1[1]
                                        result, x2_2 = DefParseReadTagValue(x23_1, 
                                            *(result_1 + 8) + (zx.q(x24_1) << 4), x2_2, *j_1)
                                        x24_1 += result.d & 1
                                        j_1 = j
                                    while (j != 0)
                                
                                *result_1 = x24_1
                                
                                if (x24_1 == 0)
                                    result = XFree(*(result_1 + 8))
                                    *(result_1 + 8) = 0
        while (i != 0xffffffff)
    else
        do
            result = DefIterGetNext(arg2, &i)
            int32_t x9_2 = *(result + 0x50)
            
            if ((x9_2 & 8) == 0)
                DefField* result_2 = result
                result = *(result + 0x18)
                int32_t x8_8 = *(result + 0x18)
                
                if (x8_8 == 6)
                    result = DefParseReadFixedArray(arg1, result_2, nullptr)
                else if ((x9_2 & 0x40) != 0)
                    if (x8_8 == 0x13)
                        result = DefinitionGetFieldData(arg1, result_2)
                        *result = 0
                        *(result + 8) = 0
                    else if (x8_8 != 0x14)
                        DefTypeIsBuiltIn(result)
                        result = DefParseReadBlock(DefinitionGetFieldData(arg1, result_2), 
                            *(result_2 + 0x18), nullptr, false)
                    else
                        result = DefParseReadAttribTree(arg1, 
                            DefinitionGetFieldData(arg1, result_2), result_2, nullptr)
        while (i != 0xffffffff)

DefParseItem** i_2 = *(arg3 + 8)

if (i_2 != 0)
    DefParseItem** i_1
    
    do
        i_1 = i_2[1]
        result = DefParseReadField(arg1, arg2, *i_2)
        i_2 = i_1
    while (i_1 != 0)

return result
