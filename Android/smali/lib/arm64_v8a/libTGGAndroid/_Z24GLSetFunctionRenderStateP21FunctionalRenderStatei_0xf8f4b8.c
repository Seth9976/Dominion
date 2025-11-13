// 函数: _Z24GLSetFunctionRenderStateP21FunctionalRenderStatei
// 地址: 0xf8f4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

uint64_t i_1 = zx.q(arg2)
void* __offset(FunctionalRenderState, 0x10) x20_1 = arg1 + 0x10
uint64_t i

do
    int32_t x8_1 = *(x20_1 - 0x10)
    int128_t v0
    
    if (x8_1 - 0x1c u>= 0x31)
        switch (x8_1)
            case 0
                int32_t x22_1 = *(x20_1 - 8)
                
                if (*(*gOpenGLInterface + 0x4024) != x22_1)
                    if (x22_1 == 0)
                        arg1, v0 = glDisable(0xb71)
                    else
                        arg1, v0 = glEnable(0xb71)
                    
                    *(*gOpenGLInterface + 0x4024) = x22_1
            case 1
                int32_t x8_5 = *(x20_1 - 8)
                int32_t* x9_4 = *gOpenGLInterface + 0x4054
                
                if (*x9_4 != x8_5)
                    *x9_4 = x8_5
                    arg1, v0 = glDepthMask(zx.q(*(x20_1 - 8)))
            case 2
                if (*(*gAppInterface + 0x30) != 0)
                    int32_t x22_2 = *(x20_1 - 8)
                    
                    if (*(*gOpenGLInterface + 0x402c) != x22_2)
                        if (x22_2 == 0)
                            arg1, v0 = glDisable(0x809e)
                        else
                            arg1, v0 = glEnable(0x809e)
                        
                        *(*gOpenGLInterface + 0x402c) = x22_2
            case 3
                int32_t x8_10 = *(x20_1 - 8)
                int32_t* x9_6 = *gOpenGLInterface + 0x4058
                int32_t x10_3 = *x20_1
                
                if (*x9_6 != x8_10 || x9_6[1] != x10_3)
                    *x9_6 = x8_10
                    x9_6[1] = x10_3
                    arg1, v0 = glBlendFunc(zx.q(*(x20_1 - 8)), zx.q(*x20_1))
            case 5
                if (*(x20_1 - 8) != 1)
                    arg1, v0 = IsCullingReversed()
                    
                    if ((arg1.d & 1) != 0 || *(x20_1 - 8) != 2)
                        arg1, v0 = IsCullingReversed()
                        
                        if ((arg1.d & 1) != 0 && *(x20_1 - 8) == 3)
                            goto label_f8f970
                        
                        uint64_t x8_33 = *gOpenGLInterface
                        
                        if (*(x8_33 + 0x4030) != 1)
                            arg1, v0 = glEnable(0xb44)
                            x8_33 = *gOpenGLInterface
                            *(x8_33 + 0x4030) = 1
                        
                        if (*(x8_33 + 0x4060) != 0x405)
                            *(x8_33 + 0x4060) = 0x405
                            arg1, v0 = glCullFace(0x405)
                    else
                    label_f8f970:
                        uint64_t x8_30 = *gOpenGLInterface
                        
                        if (*(x8_30 + 0x4030) != 1)
                            arg1, v0 = glEnable(0xb44)
                            x8_30 = *gOpenGLInterface
                            *(x8_30 + 0x4030) = 1
                        
                        if (*(x8_30 + 0x4060) != 0x404)
                            *(x8_30 + 0x4060) = 0x404
                            arg1, v0 = glCullFace(0x404)
                else if (*(*gOpenGLInterface + 0x4030) != 0)
                    arg1, v0 = glDisable(0xb44)
                    *(*gOpenGLInterface + 0x4030) = 0
            case 6
                int32_t x8_15 = *(x20_1 - 8)
                int32_t* x9_8 = *gOpenGLInterface + 0x4064
                
                if (*x9_8 != x8_15)
                    *x9_8 = x8_15
                    arg1, v0 = glDepthFunc(zx.q(*(x20_1 - 8)))
            case 8
                nop
            case 9
                int32_t x22_3 = *(x20_1 - 8)
                
                if (*(*gOpenGLInterface + 0x4034) != x22_3)
                    if (x22_3 == 0)
                        arg1, v0 = glDisable(0xbe2)
                    else
                        arg1, v0 = glEnable(0xbe2)
                    
                    *(*gOpenGLInterface + 0x4034) = x22_3
            case 0xa
                int32_t x22_4 = *(x20_1 - 8)
                
                if (*(*gOpenGLInterface + 0x4044) != x22_4)
                    if (x22_4 == 0)
                        arg1, v0 = glDisable(0xb90)
                    else
                        arg1, v0 = glEnable(0xb90)
                    
                    *(*gOpenGLInterface + 0x4044) = x22_4
            case 0xe
                int32_t x11_3 = *x20_1
                int32_t x8_20 = *(x20_1 - 8)
                int32_t* x9_10 = *gOpenGLInterface + 0x4070
                int32_t x10_5 = *(x20_1 + 8)
                
                if (*x9_10 != x8_20 || x9_10[1] != x11_3 || x9_10[2] != x10_5)
                    *x9_10 = x8_20
                    x9_10[1] = x11_3
                    x9_10[2] = x10_5
                    arg1, v0 = glStencilFuncSeparate(0x404, zx.q(*(x20_1 - 8)), zx.q(*x20_1), 
                        zx.q(*(x20_1 + 8)))
            case 0x15
                int32_t x11_4 = *x20_1
                int32_t x8_21 = *(x20_1 - 8)
                int32_t* x9_12 = *gOpenGLInterface + 0x407c
                int32_t x10_6 = *(x20_1 + 8)
                
                if (*x9_12 != x8_21 || x9_12[1] != x11_4 || x9_12[2] != x10_6)
                    *x9_12 = x8_21
                    x9_12[1] = x11_4
                    x9_12[2] = x10_6
                    arg1, v0 = glStencilFuncSeparate(0x405, zx.q(*(x20_1 - 8)), zx.q(*x20_1), 
                        zx.q(*(x20_1 + 8)))
            case 0x16
                int32_t x8_22 = *(x20_1 - 8)
                int32_t* x9_14 = *gOpenGLInterface + 0x4048
                
                if (*x9_14 != x8_22)
                    *x9_14 = x8_22
                    uint32_t x8_23 = zx.d(*(x20_1 - 8))
                    arg1, v0 = glColorMask(zx.q(x8_23) & 1, zx.q(x8_23 u>> 1) & 1, 
                        zx.q(x8_23 u>> 2) & 1, zx.q(x8_23 u>> 3) & 1)
            case 0x17
                int32_t x8_24 = *(x20_1 - 8)
                int32_t* x9_16 = *gOpenGLInterface + 0x4038
                
                if (*x9_16 != x8_24)
                    *x9_16 = x8_24
                    arg1, v0 = glBlendEquation(zx.q(*(x20_1 - 8)))
            case 0x18
                int64_t x8_25 = *(x20_1 - 8)
                uint64_t x9_17 = *gOpenGLInterface
                int32_t x10_9 = *(x9_17 + 0x404c)
                
                if (x8_25 != 0)
                    if (x10_9 != 1)
                        arg1, v0 = glEnable(0x8037)
                        x9_17 = *gOpenGLInterface
                        *(x9_17 + 0x404c) = 1
                        x8_25 = *(x20_1 - 8)
                    
                    if (*(x9_17 + 0x408c) != x8_25.d)
                        *(x9_17 + 0x408c) = x8_25.d
                        v0.d = *(x20_1 - 8)
                        arg1, v0 = glPolygonOffset(v0, v0)
                else if (x10_9 != 0)
                    arg1, v0 = glDisable(0x8037)
                    *(*gOpenGLInterface + 0x404c) = 0
            case 0x4e
                int32_t x10_11 = *(x20_1 - 8)
                int32_t x12_7 = *(x20_1 + 8)
                int32_t x8_26 = *x20_1
                int32_t* x9_20 = *gOpenGLInterface + 0x4058
                int32_t x11_5 = *(x20_1 + 0x10)
                
                if (*x9_20 != x10_11 || x9_20[1] != x8_26 || x9_20[2] != x12_7 || x9_20[3] != x11_5)
                    *x9_20 = x10_11
                    x9_20[1] = x8_26
                    x9_20[2] = x12_7
                    x9_20[3] = x11_5
                    arg1, v0 = glBlendFuncSeparate(zx.q(*(x20_1 - 8)), zx.q(*x20_1), 
                        zx.q(*(x20_1 + 8)), zx.q(*(x20_1 + 0x10)))
            case 0x50
                int32_t x8_27 = *(x20_1 - 8)
                int32_t* x9_22 = *gOpenGLInterface + 0x403c
                int32_t x10_12 = *x20_1
                
                if (*x9_22 != x8_27 || x9_22[1] != x10_12)
                    *x9_22 = x8_27
                    x9_22[1] = x10_12
                    arg1, v0 = glBlendEquationSeparate(zx.q(*(x20_1 - 8)), zx.q(*x20_1))
            default
                pthread_kill(pthread_self(), 6)
                return OpenGLInterface::GraphicsMaterialSetup(XNoReturn()) __tailcall
    i = i_1
    i_1 -= 1
    x20_1 += 0x28
while (i != 1)
