// 函数: _ZN15OpenGLInterface35RenderStateSpecialValueFromConstantE14MaterialAttribRK9AttribMapP21FunctionalRenderState
// 地址: 0xf8ed6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x3
uint32_t x2 = *entry_x3
uint64_t x9 = zx.q(x2 - 0x1c)

if (x9.d u> 0x2d)
    goto label_f8ef20

if ((1 << x9 & 0x1c71c71c71c7) != 0)
    int32_t x8_2 = AttribMapGetInt(*gMaterialAttribTable, arg3, arg2.d) - 1
    
    if (x8_2 u< 3)
        *(entry_x3 + 8) = *(&data_865fb8 + (sx.q(x8_2) << 3))
        return 1
    
label_f8f4b0:
    pthread_kill(pthread_self(), 6)
    FunctionalRenderState* x0_68
    int32_t x1_24
    x0_68, x1_24 = XNoReturn()
    return GLSetFunctionRenderState(x0_68, x1_24) __tailcall

if ((1 << x9 & 0x208208208208) == 0)
    if (x9 != 5)
        goto label_f8ef20
    
    if ((AttribMapTagExists(arg3, 0x1f) & 1) != 0)
        return 0
    
    XTrace("opengl material param issue: mip filter is ignored when min filter is missing")
    return 0

int32_t x0_4 = AttribMapGetInt(*gMaterialAttribTable, arg3, x2)
uint64_t x8_6 = zx.q(*entry_x3 - 0x1f)

if (x8_6.d u> 0x2a)
    goto label_f8f4b0

uint32_t x2_2 = 0x21

switch (x8_6)
    case 0
        goto label_f8eeb8
    case 1, 2, 3, 4, 5, 7, 8, 9, 0xa, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 0x13, 0x14, 0x15, 0x16, 0x17, 
            0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 0x29
        goto label_f8f4b0
    case 6
        x2_2 = 0x27
    label_f8eeb8:
        int32_t x0_9
        int128_t v0_1
        x0_9, v0_1 = AttribMapGetInt(*gMaterialAttribTable, arg3, x2_2)
        *(entry_x3 + 0x10) = 0
        
        if (x0_9 != 0 && zx.d(*(*gAppInterface + 0x35)) == 0)
            XTrace("Material Mipmap ignored because it's not enabled in the app")
        label_f8eefc:
            
            if (x0_4 == 2)
                *(entry_x3 + 8) = 0x2601
            else
                if (x0_4 != 1)
                label_f8f1e4:
                    XTrace("opengl material param issue: invalid min filter")
                    return 0
                
                *(entry_x3 + 8) = 0x2600
        else if (x0_9 != 2)
            if (x0_9 != 1)
                if (x0_9 == 0)
                    goto label_f8eefc
                
                XTrace("opengl material param issue: invalid mip filter")
                return 0
            
            if (x0_4 == 2)
                *(entry_x3 + 8) = 0x2701
            else
                if (x0_4 != 1)
                    goto label_f8f1e4
                
                *(entry_x3 + 8) = 0x2700
        else if (x0_4 == 3)
            *(entry_x3 + 8) = data_71aaf0
        else if (x0_4 == 2)
            *(entry_x3 + 8) = 0x2703
        else
            if (x0_4 != 1)
                goto label_f8f1e4
            
            *(entry_x3 + 8) = 0x2702
        
        x2 = *entry_x3
    label_f8ef20:
        uint64_t x8_10 = zx.q(x2 - 0x20)
        
        if (x8_10.d u<= 0x2a && (1 << x8_10 & 0x41041041041) != 0)
            int32_t x0_11 = AttribMapGetInt(*gMaterialAttribTable, arg3, x2)
            int64_t x8_12
            
            if (x0_11 == 1)
                x8_12 = 0x2600
            else
                if (x0_11 != 2)
                    return 0
                
                x8_12 = 0x2601
            
            *(entry_x3 + 8) = x8_12
        
        uint32_t x2_3 = *entry_x3
        
        if (x2_3 == 3)
            if ((AttribMapGetBool(*gMaterialAttribTable, arg3, 0x4d) & 1) != 0)
                return 0
            
            int32_t x0_15 = AttribMapGetInt(*gMaterialAttribTable, arg3, 3)
            int32_t x0_17 = AttribMapGetInt(*gMaterialAttribTable, arg3, 4)
            
            if (x0_15 - 1 u>= 0xf || (0x67ff u>> (x0_15 - 1) & 1) == 0)
                goto label_f8f4b0
            
            *(entry_x3 + 8) = *(&data_865fd0 + (sx.q(x0_15 - 1) << 3))
            
            if (x0_17 - 1 u>= 0xf || (0x67ff u>> (x0_17 - 1) & 1) == 0)
                goto label_f8f4b0
            
            x2_3 = *entry_x3
            *(entry_x3 + 0x10) = *(&data_865fd0 + (sx.q(x0_17 - 1) << 3))
        
        if (x2_3 == 0x4e)
            if ((AttribMapGetBool(*gMaterialAttribTable, arg3, 0x4d) & 1) == 0)
                return 0
            
            int32_t x0_23 = AttribMapGetInt(*gMaterialAttribTable, arg3, 3)
            int32_t x0_25 = AttribMapGetInt(*gMaterialAttribTable, arg3, 4)
            int32_t x0_27 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x4e)
            int32_t x0_29 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x4f)
            
            if (x0_23 - 1 u>= 0xf || (0x67ff u>> (x0_23 - 1) & 1) == 0)
                goto label_f8f4b0
            
            *(entry_x3 + 8) = *(&data_865fd0 + (sx.q(x0_23 - 1) << 3))
            
            if (x0_25 - 1 u>= 0xf || (0x67ff u>> (x0_25 - 1) & 1) == 0)
                goto label_f8f4b0
            
            *(entry_x3 + 0x10) = *(&data_865fd0 + (sx.q(x0_25 - 1) << 3))
            
            if (x0_27 - 1 u>= 0xf || (0x67ff u>> (x0_27 - 1) & 1) == 0)
                goto label_f8f4b0
            
            *(entry_x3 + 0x18) = *(&data_865fd0 + (sx.q(x0_27 - 1) << 3))
            
            if (x0_29 - 1 u>= 0xf || (0x67ff u>> (x0_29 - 1) & 1) == 0)
                goto label_f8f4b0
            
            x2_3 = *entry_x3
            *(entry_x3 + 0x20) = *(&data_865fd0 + (sx.q(x0_29 - 1) << 3))
        else if (x2_3 == 4)
            if ((AttribMapTagExists(arg3, 3) & 1) != 0)
                return 0
            
            XTrace("opengl material param issue: dest blend is ignored when src blend is missing")
            return 0
        
        if (x2_3 == 0x4d)
            return 0
        
        if (x2_3 == 0x4f)
            if ((AttribMapTagExists(arg3, 0x4e) & 1) != 0)
                return 0
            
            XTrace("opengl material param issue: dest blend alpha is ignored when src blend alpha is missing")
            return 0
        
        if (x2_3 == 6)
            int32_t x8_26 = AttribMapGetInt(*gMaterialAttribTable, arg3, x2_3) - 1
            
            if (x8_26 u>= 8)
                goto label_f8f4b0
            
            *(entry_x3 + 8) = zx.q(x8_26) + 0x200
            return 1
        
        if (x2_3 == 0x17)
            if ((AttribMapTagExists(arg3, 0x50) & 1) != 0)
                return 0
            
            int32_t x8_21 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x17) - 1
            
            if (x8_21 u>= 5)
                goto label_f8f4b0
            
            x2_3 = *entry_x3
            *(entry_x3 + 8) = *(&data_866048 + (sx.q(x8_21) << 3))
        
        if (x2_3 == 0x50)
            int32_t x0_38 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x17)
            int32_t x0_40 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x50)
            
            if (x0_38 - 1 u>= 5)
                goto label_f8f4b0
            
            *(entry_x3 + 8) = *(&data_866048 + (sx.q(x0_38 - 1) << 3))
            
            if (x0_40 - 1 u>= 5)
                goto label_f8f4b0
            
            x2_3 = *entry_x3
            *(entry_x3 + 0x10) = *(&data_866048 + (sx.q(x0_40 - 1) << 3))
        
        uint64_t x8_25 = zx.q(x2_3 - 7)
        
        if (x8_25.d u> 0x11)
            return 1
        
        int64_t x8_32
        int64_t x9_9
        
        switch (x8_25)
            case 0
                if ((AttribMapTagExists(arg3, 8) & 1) != 0)
                    return 0
                
                XTrace("
                    opengl material param issue: alpha ref is ignored when alpha func is missing")
                return 0
            case 1
                int32_t x0_55 = AttribMapGetInt(*gMaterialAttribTable, arg3, 8)
                char x0_57 = AttribMapGetInt(*gMaterialAttribTable, arg3, 7)
                
                if (x0_55 - 1 u>= 8)
                    goto label_f8f4b0
                
                x8_32 = zx.q(x0_55 - 1) + 0x200
                x9_9 = sx.q(float.s(zx.d(x0_57)) / float.s(0x437f0000))
            case 2, 3, 0xf, 0x10
                return 1
            case 4, 5, 6, 0xa, 0xb, 0xc, 0xd
                AttribTagGetTagName(*gMaterialAttribTable, x2_3)
                XTrace("opengl material param issue: we don't support %s in opengl")
                return 0
            case 7, 0xe
                int32_t x0_47 = AttribMapGetInt(*gMaterialAttribTable, arg3, x2_3)
                int32_t x0_49 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0xf)
                int32_t x0_51 = AttribMapGetInt(*gMaterialAttribTable, arg3, 0x10)
                
                if (x0_47 - 1 u>= 8)
                    goto label_f8f4b0
                
                x9_9 = sx.q(x0_49)
                x8_32 = zx.q(x0_47 - 1) + 0x200
                *(entry_x3 + 0x18) = sx.q(x0_51)
            case 8
                if ((AttribMapTagExists(arg3, 0xe) & 1) != 0)
                    return 0
                
                if ((AttribMapTagExists(arg3, 0x15) & 1) != 0)
                    return 0
                
                XTrace("opengl material param issue: stencil ref is ignored when stencil func is missing")
                return 0
            case 9
                if ((AttribMapTagExists(arg3, 0xe) & 1) != 0)
                    return 0
                
                if ((AttribMapTagExists(arg3, 0x15) & 1) != 0)
                    return 0
                
                XTrace("opengl material param issue: stencil mask is ignored when stencil func is missing")
                return 0
            case 0x11
                *(entry_x3 + 8) = sx.q(AttribMapGetFloat(*gMaterialAttribTable, arg3, 0x18))
                return 1
        
        *(entry_x3 + 8) = x8_32
        *(entry_x3 + 0x10) = x9_9
        return 1
    case 0xc
        x2_2 = 0x2d
        goto label_f8eeb8
    case 0x12
        x2_2 = 0x33
        goto label_f8eeb8
    case 0x18
        x2_2 = 0x39
        goto label_f8eeb8
    case 0x1e
        x2_2 = 0x3f
        goto label_f8eeb8
    case 0x24
        x2_2 = 0x45
        goto label_f8eeb8
    case 0x2a
        x2_2 = 0x4b
        goto label_f8eeb8
