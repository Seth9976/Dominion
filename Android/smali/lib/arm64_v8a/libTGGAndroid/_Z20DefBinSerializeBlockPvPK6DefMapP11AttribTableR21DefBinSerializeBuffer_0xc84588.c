// 函数: _Z20DefBinSerializeBlockPvPK6DefMapP11AttribTableR21DefBinSerializeBuffer
// 地址: 0xc84588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = DefTypeIsBuiltIn(arg2)

if ((result.d & 1) == 0)
    result = DefIterGetFirst(arg2)
    int32_t i = result.d
    
    if (result.d != 0xffffffff)
        do
            DefField* x0_4 = DefIterGetNext(arg2, &i)
            result = *(x0_4 + 0x18)
            int32_t x24_2 = *(result + 0x18)
            char* x23_1
            
            if (x24_2 != 0xf)
                DefField* x1_2
                AttribTable* x2_1
                DefBinSerializeBuffer* x3
                result, x1_2, x2_1, x3 = DefTypeIsDeepStructure(result)
                
                if ((result.d & 1) != 0)
                    uint64_t x8_9 = zx.q(x24_2 - 5)
                    
                    if (x8_9.d u> 0xc)
                    label_c84728:
                        DefTypeIsBuiltIn(*(x0_4 + 0x18))
                        void* x0_16 = DefinitionGetFieldData(arg1, x0_4)
                        int32_t x27_3 = *(arg4 + 8)
                        AttribTable* x2_4 = arg3
                        *(arg4 + 8) = *x0_4 + x27_3
                        
                        if (arg3 == 0)
                            if (x24_2 == 0x14 || x24_2 == 0x13)
                                x2_4 = *(x0_4 + 0x38)
                            else
                                x2_4 = nullptr
                        
                        result = DefBinSerializeBlock(x0_16, *(x0_4 + 0x18), x2_4, arg4)
                        *(arg4 + 8) = x27_3
                    else
                        switch (x8_9)
                            case 0
                                result = DefBinSerializeVariableArray(arg1, x0_4, arg3, 
                                    *DefinitionGetFieldDataAux(arg1, x0_4), arg4)
                            case 1
                                void* x0_13 = DefinitionGetFieldData(arg1, x0_4)
                                int32_t x24_4 = *(arg4 + 8)
                                *(arg4 + 8) = *x0_4 + x24_4
                                result =
                                    DefBinSerializeArray(x0_13, *(x0_4 + 0x38), x0_4, nullptr, arg4)
                                *(arg4 + 8) = x24_4
                            case 2, 5, 8, 9, 0xb
                                goto label_c84728
                            case 3
                                int64_t x8_1 = sx.q(*x0_4)
                                
                                if ((zx.d(*(x0_4 + 0x50)) & 0x10) == 0)
                                    x23_1 = *(arg1 + x8_1)
                                else
                                    x23_1 = &data_793a18
                                
                                if (zx.d(*(arg4 + 0x10)) != 0)
                                    goto label_c84604
                                
                                *(*arg4 + sx.q(*(arg4 + 8)) + x8_1) = *(arg4 + 0xc)
                                goto label_c84678
                            case 4
                                result = DefBinSerializeTagValue(arg1, x0_4, arg3, arg4)
                            case 6
                                result = DefBinSerializeVariableArray(arg1, x0_4, nullptr, 
                                    DefSubDefPtrGetCount(arg1, x0_4), arg4)
                            case 7
                                int64_t x8_14 = sx.q(*x0_4)
                                void* const x24_5
                                
                                if ((zx.d(*(x0_4 + 0x50)) & 0x10) == 0)
                                    x24_5 = *(arg1 + x8_14)
                                else
                                    x24_5 = &data_793a18
                                
                                int32_t x27_4
                                
                                if (zx.d(*(arg4 + 0x10)) == 0)
                                    *(*arg4 + sx.q(*(arg4 + 8)) + x8_14) = *(arg4 + 0xc)
                                    uint32_t x28_2 = zx.d(*(arg4 + 0x10))
                                    x27_4 = strlen(x24_5) + 1
                                    
                                    if (x28_2 == 0)
                                        memcpy(*arg4 + sx.q(*(arg4 + 0xc)), x24_5, sx.q(x27_4))
                                else
                                    x27_4 = strlen(x24_5) + 1
                                
                                *(arg4 + 0xc) += x27_4
                                char* x24_6 = *DefinitionGetFieldData(arg1, x0_4)
                                DefinitionGetFieldDataAux(arg1, x0_4)
                                result = strcrc32(x24_6, 0)
                            case 0xc
                                void* x0_29
                                DefField* x1_14
                                AttribTable* x2_7
                                DefBinSerializeBuffer* x3_4
                                x0_29, x1_14, x2_7, x3_4 =
                                    DefBinSerializeDataArray(result, x1_2, x2_1, x3)
                                return DefBinSerializeDataArray(x0_29, x1_14, x2_7, x3_4) __tailcall
            else
                int64_t x24_3 = sx.q(*x0_4)
                
                if (*(arg1 + x24_3) != 0)
                    void* x27_1 = *arg4
                    int64_t x28_1 = sx.q(*(arg4 + 8))
                    x23_1 = XString::operator char const*()
                    
                    if (zx.d(*(arg4 + 0x10)) != 0)
                    label_c84604:
                        result = strlen(x23_1)
                        *(arg4 + 0xc) += result.d + 1
                    else
                        *(x27_1 + x28_1 + x24_3) = *(arg4 + 0xc)
                    label_c84678:
                        uint32_t x27_2 = zx.d(*(arg4 + 0x10))
                        result = strlen(x23_1)
                        int32_t x24_1 = result.d + 1
                        
                        if (x27_2 == 0)
                            result = memcpy(*arg4 + sx.q(*(arg4 + 0xc)), x23_1, sx.q(x24_1))
                        
                        *(arg4 + 0xc) += x24_1
        while (i != 0xffffffff)

return result
