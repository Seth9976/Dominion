// 函数: _Z18GLBindVertexStreamj12VertexFormati
// 地址: 0xf8d04c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(*gOpenGLInterface + 0x4248)
DefMap* x0_1 = VertexFormatGetDefMap(zx.q(arg2))
int32_t* result = DefIterGetFirst(x0_1)
int32_t i = result.d

if (result.d != 0xffffffff)
    void* x8_2 = x22 + zx.q(arg1.w) * 0x158
    int32_t var_9c_1 = 0
    int32_t var_84_1 = 0
    
    do
        result = DefIterGetNext(x0_1, &i)
        int64_t x8_7 = *(result + 0x18)
        int32_t x22_3
        
        if (x8_7 == *macro_ptr_DefWorldMat4)
            x22_3 = *(x8_2 + 0x130)
            
            if (x22_3 != 0xffffffff)
            label_f8d2cc:
                glVertexAttribPointer(zx.q(x22_3), 4, 0x1406, 0, zx.q(*(x0_1 + 0x14)), 
                    zx.q(*result))
                uint64_t x8_11 = *gOpenGLInterface
                uint32_t x9_22
                
                if (*(x8_11 + (sx.q(x22_3 + 0x65) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                    glEnableVertexAttribArray(zx.q(x22_3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x65) << 2) + 0x4020) = 1
                    x8_11 = *gOpenGLInterface
                    x9_22 = zx.d(*gGLHasVAO)
                else
                    x9_22 = 0
                
                if (*(x8_11 + (sx.q(x22_3 + 0x75) << 2) + 0x4020) != arg3 || x9_22 != 0)
                    glVertexAttribDivisor(zx.q(x22_3), zx.q(arg3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x75) << 2) + 0x4020) = arg3
                
                glVertexAttribPointer(zx.q(x22_3 + 1), 4, 0x1406, 0, zx.q(*(x0_1 + 0x14)), 
                    zx.q(*result) + 0x10)
                uint64_t x8_19 = *gOpenGLInterface
                uint32_t x9_24
                
                if (*(x8_19 + (sx.q(x22_3 + 0x66) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                    glEnableVertexAttribArray(zx.q(x22_3 + 1))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x66) << 2) + 0x4020) = 1
                    x8_19 = *gOpenGLInterface
                    x9_24 = zx.d(*gGLHasVAO)
                else
                    x9_24 = 0
                
                if (*(x8_19 + (sx.q(x22_3 + 0x76) << 2) + 0x4020) != arg3 || x9_24 != 0)
                    glVertexAttribDivisor(zx.q(x22_3 + 1), zx.q(arg3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x76) << 2) + 0x4020) = arg3
                
                glVertexAttribPointer(zx.q(x22_3 + 2), 4, 0x1406, 0, zx.q(*(x0_1 + 0x14)), 
                    zx.q(*result) + 0x20)
                uint64_t x8_27 = *gOpenGLInterface
                uint32_t x9_26
                
                if (*(x8_27 + (sx.q(x22_3 + 0x67) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                    glEnableVertexAttribArray(zx.q(x22_3 + 2))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x67) << 2) + 0x4020) = 1
                    x8_27 = *gOpenGLInterface
                    x9_26 = zx.d(*gGLHasVAO)
                else
                    x9_26 = 0
                
                if (*(x8_27 + (sx.q(x22_3 + 0x77) << 2) + 0x4020) != arg3 || x9_26 != 0)
                    glVertexAttribDivisor(zx.q(x22_3 + 2), zx.q(arg3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x77) << 2) + 0x4020) = arg3
                
                result = glVertexAttribPointer(zx.q(x22_3 + 3), 4, 0x1406, 0, zx.q(*(x0_1 + 0x14)), 
                    zx.q(*result) + 0x30)
                uint64_t x8_35 = *gOpenGLInterface
                uint32_t x9_28
                
                if (*(x8_35 + (sx.q(x22_3 + 0x68) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                    result = glEnableVertexAttribArray(zx.q(x22_3 + 3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x68) << 2) + 0x4020) = 1
                    x8_35 = *gOpenGLInterface
                    x9_28 = zx.d(*gGLHasVAO)
                else
                    x9_28 = 0
                
                if (*(x8_35 + (sx.q(x22_3 + 0x78) << 2) + 0x4020) != arg3 || x9_28 != 0)
                    result = glVertexAttribDivisor(zx.q(x22_3 + 3), zx.q(arg3))
                    *(*gOpenGLInterface + (sx.q(x22_3 + 0x78) << 2) + 0x4020) = arg3
        else if (x8_7 == *macro_ptr_DefWVPMat4)
            x22_3 = *(x8_2 + 0x134)
            
            if (x22_3 != 0xffffffff)
                goto label_f8d2cc
        else
            uint64_t x0_4
            int64_t x1_2
            int64_t x2
            int64_t x3_1
            uint64_t x4_1
            uint64_t x5_1
            int32_t x22_2
            
            if (x8_7 == *macro_ptr_DefVertPos)
                x22_2 = *(x8_2 + 0x108)
                
                if (x22_2 != 0xffffffff)
                label_f8d524:
                    x4_1 = zx.q(*(x0_1 + 0x14))
                    x5_1 = zx.q(*result)
                    x1_2 = 3
                label_f8d550:
                    x2 = 0x1406
                label_f8d554:
                    x0_4 = zx.q(x22_2)
                    x3_1 = 0
                label_f8d55c:
                    result = glVertexAttribPointer(x0_4, x1_2, x2, x3_1, x4_1, x5_1)
                label_f8d560:
                    uint64_t x8_44 = *gOpenGLInterface
                    uint32_t x9_30
                    
                    if (*(x8_44 + (sx.q(x22_2 + 0x65) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                        result = glEnableVertexAttribArray(zx.q(x22_2))
                        *(*gOpenGLInterface + (sx.q(x22_2 + 0x65) << 2) + 0x4020) = 1
                        x8_44 = *gOpenGLInterface
                        x9_30 = zx.d(*gGLHasVAO)
                    else
                        x9_30 = 0
                    
                    if (*(x8_44 + (sx.q(x22_2 + 0x75) << 2) + 0x4020) != arg3 || x9_30 != 0)
                        result = glVertexAttribDivisor(zx.q(x22_2), zx.q(arg3))
                        *(*gOpenGLInterface + (sx.q(x22_2 + 0x75) << 2) + 0x4020) = arg3
            else if (x8_7 == *macro_ptr_DefVertPosXY)
                x22_2 = *(x8_2 + 0x108)
                
                if (x22_2 != 0xffffffff)
                    x4_1 = zx.q(*(x0_1 + 0x14))
                    x5_1 = zx.q(*result)
                    x1_2 = 2
                    goto label_f8d550
            else if (x8_7 == *macro_ptr_DefVertShortPosXY)
                x22_2 = *(x8_2 + 0x108)
                
                if (x22_2 != 0xffffffff)
                    x4_1 = zx.q(*(x0_1 + 0x14))
                    x5_1 = zx.q(*result)
                    x1_2 = 2
                    x2 = 0x1403
                    goto label_f8d554
            else if (x8_7 == *macro_ptr_DefVertNorm)
                x22_2 = *(x8_2 + 0x10c)
                
                if (x22_2 != 0xffffffff)
                    goto label_f8d524
            else if (x8_7 == *macro_ptr_DefVertTangent)
                x22_2 = *(x8_2 + 0x110)
                
                if (x22_2 != 0xffffffff)
                    goto label_f8d524
            else if (x8_7 == *macro_ptr_DefVertBinormal)
                x22_2 = *(x8_2 + 0x114)
                
                if (x22_2 != 0xffffffff)
                    goto label_f8d524
            else
                uint64_t x8_54
                int32_t x9_32
                int32_t x22_4
                
                if (x8_7 == *macro_ptr_DefVertColF)
                    void* x8_52 = x8_2 + 0x118
                    
                    if (var_84_1 != 0)
                        x8_52 = x8_2 + 0x11c
                    
                    if (var_84_1 != 0 && var_84_1 != 1)
                    label_f8d900:
                        pthread_kill(pthread_self(), 6)
                        int32_t x0_28
                        uint32_t x1_9
                        uint32_t x2_1
                        int64_t x3_3
                        int32_t x4_11
                        int32_t x5_10
                        uint32_t x6
                        int32_t x7
                        x0_28, x1_9, x2_1, x3_3, x4_11, x5_10, x6, x7 = XNoReturn()
                        return OpenGLInterface::DrawPrimitive(x0_28, x1_9, x2_1, x3_3, x4_11, 
                            x5_10, x6, x7) __tailcall
                    
                    x22_4 = *x8_52
                    
                    if (x22_4 == 0xffffffff)
                        var_84_1 += 1
                    else
                        result = glVertexAttribPointer(zx.q(x22_4), 4, 0x1406, 1, 
                            zx.q(*(x0_1 + 0x14)), zx.q(*result))
                        x8_54 = *gOpenGLInterface
                        x9_32 = x22_4 + 0x65
                        uint32_t x9_34
                        
                        if (*(x8_54 + (sx.q(x9_32) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                        label_f8d718:
                            result = glEnableVertexAttribArray(zx.q(x22_4))
                            *(*gOpenGLInterface + (sx.q(x9_32) << 2) + 0x4020) = 1
                            x8_54 = *gOpenGLInterface
                            x9_34 = zx.d(*gGLHasVAO)
                        else
                        label_f8d708:
                            x9_34 = 0
                        
                        if (*(x8_54 + (sx.q(x22_4 + 0x75) << 2) + 0x4020) != arg3 || x9_34 != 0)
                            result = glVertexAttribDivisor(zx.q(x22_4), zx.q(arg3))
                            *(*gOpenGLInterface + (sx.q(x22_4 + 0x75) << 2) + 0x4020) = arg3
                            var_84_1 += 1
                        else
                            var_84_1 += 1
                else if (x8_7 == *macro_ptr_DefVertCol)
                    void* x8_55 = x8_2 + 0x118
                    
                    if (var_84_1 != 0)
                        x8_55 = x8_2 + 0x11c
                    
                    if (var_84_1 != 0 && var_84_1 != 1)
                        goto label_f8d900
                    
                    x22_4 = *x8_55
                    
                    if (x22_4 != 0xffffffff)
                        result = glVertexAttribPointer(zx.q(x22_4), 4, 0x1401, 1, 
                            zx.q(*(x0_1 + 0x14)), zx.q(*result))
                        x8_54 = *gOpenGLInterface
                        x9_32 = x22_4 + 0x65
                        
                        if (*(x8_54 + (sx.q(x9_32) << 2) + 0x4020) != 1 || zx.d(*gGLHasVAO) != 0)
                            goto label_f8d718
                        
                        goto label_f8d708
                    
                    var_84_1 += 1
                else
                    uint64_t x8_67
                    int32_t x9_36
                    int32_t x22_5
                    
                    if (x8_7 == *macro_ptr_DefVertTex)
                        void* x8_65 = x8_2 + 0x120
                        
                        if (var_9c_1 != 0)
                            x8_65 = x8_2 + 0x124
                        
                        if (var_9c_1 != 0 && var_9c_1 != 1)
                            goto label_f8d900
                        
                        x22_5 = *x8_65
                        
                        if (x22_5 == 0xffffffff)
                            var_9c_1 += 1
                        else
                            result = glVertexAttribPointer(zx.q(x22_5), 4, 0x1406, 0, 
                                zx.q(*(x0_1 + 0x14)), zx.q(*result))
                            x8_67 = *gOpenGLInterface
                            x9_36 = x22_5 + 0x65
                            uint32_t x9_38
                            
                            if (*(x8_67 + (sx.q(x9_36) << 2) + 0x4020) != 1
                                || zx.d(*gGLHasVAO) != 0)
                            label_f8d850:
                                result = glEnableVertexAttribArray(zx.q(x22_5))
                                *(*gOpenGLInterface + (sx.q(x9_36) << 2) + 0x4020) = 1
                                x8_67 = *gOpenGLInterface
                                x9_38 = zx.d(*gGLHasVAO)
                            else
                            label_f8d840:
                                x9_38 = 0
                            
                            if (*(x8_67 + (sx.q(x22_5 + 0x75) << 2) + 0x4020) != arg3 || x9_38 != 0)
                                result = glVertexAttribDivisor(zx.q(x22_5), zx.q(arg3))
                                *(*gOpenGLInterface + (sx.q(x22_5 + 0x75) << 2) + 0x4020) = arg3
                                var_9c_1 += 1
                            else
                                var_9c_1 += 1
                    else if (x8_7 == *macro_ptr_DefVertShortTex)
                        void* x8_68 = x8_2 + 0x120
                        
                        if (var_9c_1 != 0)
                            x8_68 = x8_2 + 0x124
                        
                        if (var_9c_1 != 0 && var_9c_1 != 1)
                            goto label_f8d900
                        
                        x22_5 = *x8_68
                        
                        if (x22_5 != 0xffffffff)
                            result = glVertexAttribPointer(zx.q(x22_5), 2, 0x1403, 1, 
                                zx.q(*(x0_1 + 0x14)), zx.q(*result))
                            x8_67 = *gOpenGLInterface
                            x9_36 = x22_5 + 0x65
                            
                            if (*(x8_67 + (sx.q(x9_36) << 2) + 0x4020) != 1
                                    || zx.d(*gGLHasVAO) != 0)
                                goto label_f8d850
                            
                            goto label_f8d840
                        
                        var_9c_1 += 1
                    else if (x8_7 == *macro_ptr_DefVertBoneIndices)
                        x22_2 = *(x8_2 + 0x128)
                        
                        if (x22_2 != 0xffffffff)
                            result = glVertexAttribIPointer(zx.q(x22_2), 4, 0x1401, 
                                zx.q(*(x0_1 + 0x14)), zx.q(*result))
                            goto label_f8d560
                    else
                        if (x8_7 != *macro_ptr_DefVertBoneWeights)
                            goto label_f8d900
                        
                        x22_2 = *(x8_2 + 0x12c)
                        
                        if (x22_2 != 0xffffffff)
                            x4_1 = zx.q(*(x0_1 + 0x14))
                            x5_1 = zx.q(*result)
                            x1_2 = 4
                            x2 = 0x1401
                            x3_1 = 1
                            x0_4 = zx.q(x22_2)
                            goto label_f8d55c
    while (i != 0xffffffff)

return result
