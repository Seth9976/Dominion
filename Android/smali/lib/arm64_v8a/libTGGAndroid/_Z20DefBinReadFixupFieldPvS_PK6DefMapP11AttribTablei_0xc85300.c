// 函数: _Z20DefBinReadFixupFieldPvS_PK6DefMapP11AttribTablei
// 地址: 0xc85300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = DefIterGetFirst(arg3)
int32_t i = i_1

if (i_1 != 0xffffffff)
    do
        DefField* x0_2 = DefIterGetNext(arg3, &i)
        DefMap* x25_1 = *(x0_2 + 0x18)
        int32_t x20_1 = *(x25_1 + 0x18)
        
        if (x20_1 != 0xf)
            void* x0_10
            void* x1_3
            DefField* x2
            AttribTable* x3
            int32_t x4
            x0_10, x1_3, x2, x3, x4 = DefTypeIsDeepStructure(x25_1)
            
            if ((x0_10.d & 1) == 0)
                DefinitionGetFieldData(arg2, x0_2)
                int32_t x8_10 = *(*(x0_2 + 0x18) + 0x18)
                
                if (x8_10 u> 0x10 || (1 << x8_10 & 0x1441e) == 0)
                    goto label_c856bc
            else
                int64_t x20_4
                void** x26_2
                
                if (x20_1 == 5)
                    int32_t x25_3 = *DefinitionGetFieldDataAux(arg2, x0_2)
                    
                    if (x25_3 u> 0x5f5e100)
                        return 0
                    
                    x26_2 = DefinitionGetFieldData(arg2, x0_2)
                    
                    if (x25_3 == 0)
                        *x26_2 = nullptr
                    else
                        int32_t x8_12 = *(x0_2 + 0x50)
                        
                        if ((x8_12 & 0x10) == 0)
                            x20_4 = sx.q(*x26_2)
                            
                            if (x20_4.d s< arg5 || (x8_12 & 0x100) == 0)
                                void* x27_3 = arg1 + x20_4
                                *x26_2 = x27_3
                                
                                if (x20_4.d + DefinitionGetSize(*(x0_2 + 0x30)) * x25_3 s> arg5
                                        || x27_3 s<= arg2)
                                    return 0
                                
                                if ((DefBinReadFixupArray(arg1, *x26_2, x25_3, x0_2, arg4, arg5)
                                        & 1) == 0)
                                    return 0
                            else
                                *x26_2 = x20_4
                else
                    void* x0_22
                    void* x1_9
                    int32_t x2_1
                    
                    if (x20_1 == 6)
                        void* x0_21 = DefinitionGetFieldData(arg2, x0_2)
                        x2_1 = *(x0_2 + 0x38)
                        x1_9 = x0_21
                        x0_22 = arg1
                    label_c854ec:
                        
                        if ((DefBinReadFixupArray(x0_22, x1_9, x2_1, x0_2, nullptr, arg5) & 1) == 0)
                            return 0
                    else
                        if (x20_1 == 0x11)
                            DefBinReadFixupDataArray(x0_10, x1_3, x2, x3, x4)
                        label_c856bc:
                            pthread_kill(pthread_self(), 6)
                            DefBinAssetEntry* x0_47
                            XAsset* x1_16
                            int32_t x2_5
                            x0_47, x1_16, x2_5 = XNoReturn()
                            return DefBinWriteMakeAssetEntry(x0_47, x1_16, x2_5) __tailcall
                        
                        if ((x20_1 & 0xfffffffb) == 8)
                            int32_t* x0_12 = DefinitionGetFieldData(arg2, x0_2)
                            int64_t x20_3 = sx.q(*x0_12)
                            
                            if (x20_3.d == 0)
                                return 0
                            
                            void* x8_6 = arg1 + x20_3
                            *x0_12 = x8_6
                            
                            if (x20_3.d + strlen(x8_6) + 1 s> arg5)
                                return 0
                        else if (x20_1 == 9)
                            if ((DefBinReadFixupTagValue(arg1, arg2, x0_2, arg4, arg5) & 1) == 0)
                                return 0
                        else if (x20_1 != 0xb)
                            DefTypeIsBuiltIn(x25_1)
                            void* x0_34 = DefinitionGetFieldData(arg2, x0_2)
                            AttribTable* x27_2 = arg4
                            
                            if (arg4 != 0)
                                goto label_c855ec
                            
                            if (x20_1 == 0x14 || x20_1 == 0x13)
                                x27_2 = *(x0_2 + 0x38)
                            label_c855ec:
                                
                                if ((DefTypeIsBuiltIn(x25_1) & 1) == 0)
                                label_c85600:
                                    
                                    if (x0_34 + sx.q(*(x25_1 + 0x14)) u> arg1 + sx.q(arg5))
                                        return 0
                                    
                                    if ((DefBinReadFixupField(arg1, x0_34, x25_1, x27_2, arg5) & 1)
                                            == 0)
                                        return 0
                            else
                                x27_2 = nullptr
                                
                                if ((DefTypeIsBuiltIn(x25_1) & 1) == 0)
                                    goto label_c85600
                        else
                            int32_t x0_25 = DefSubDefPtrGetCount(arg2, x0_2)
                            
                            if (x0_25 u> 0x5f5e100)
                                return 0
                            
                            x26_2 = DefinitionGetFieldData(arg2, x0_2)
                            
                            if (x0_25 == 0)
                                *x26_2 = nullptr
                            else
                                int32_t x8_13 = *(x0_2 + 0x50)
                                
                                if ((x8_13 & 0x10) == 0)
                                    x20_4 = sx.q(*x26_2)
                                    
                                    if (x20_4.d s< arg5 || (x8_13 & 0x100) == 0)
                                        void* x27_1 = arg1 + x20_4
                                        *x26_2 = x27_1
                                        
                                        if (x20_4.d + DefinitionGetSize(*(x0_2 + 0x30)) * x0_25
                                                s> arg5 || x27_1 s<= arg2)
                                            return 0
                                        
                                        x1_9 = *x26_2
                                        x0_22 = arg1
                                        x2_1 = x0_25
                                        goto label_c854ec
                                    
                                    *x26_2 = x20_4
        else
            int64_t* x0_4 = DefinitionGetFieldData(arg2, x0_2)
            int32_t x20_2 = (*x0_4).d
            
            if (x20_2 == 0)
                *x0_4 = 0
            else
                if (x20_2 == 0)
                    return 0
                
                int32_t x24_2 = *(x0_2 + 0x40)
                void* x26_1 = arg1 + sx.q(x20_2)
                *x0_4 = x26_1
                
                if (x20_2 + strlen(x26_1) + 1 s> arg5)
                    return 0
                
                *x0_4 = DefAssetPtrFromPath(x26_1, zx.q(x24_2))
    while (i != 0xffffffff)

return 1
