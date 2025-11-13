// 函数: _Z17MaterialStateBindP13MaterialStatePPK14MaterialParamsi
// 地址: 0xf7c4d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t var_480 = 0
void var_470
void* var_478 = &var_470

if (arg3 s>= 1)
    uint64_t x23_1 = zx.q(arg3)
    bool cond:0_1
    
    do
        int32_t* x25_1 = arg2[x23_1 - 1]
        
        if (*x25_1 s>= 1)
            int64_t x26_1 = 0
            int64_t i = 0
            
            do
                uint32_t* x28_2 = *(x25_1 + 8)
                void* x0_3 = AttribMapFindTag(&var_480, *(x28_2 + x26_1))
                void* x21_1 = x0_3
                
                if (x0_3 == 0)
                    int64_t x8_5 = sx.q(var_480)
                    x21_1 = var_478 + (x8_5 << 4)
                    var_480 = x8_5.d + 1
                
                void* x28_1 = x28_2 + x26_1
                DefTypeIsDeepStructure(AttribTagGetDefMap(*gMaterialAttribTable, *x28_1))
                i += 1
                x26_1 += 0x10
                *x21_1 = *x28_1
                *(x21_1 + 8) = *(x28_1 + 8)
            while (i s< sx.q(*x25_1))
        
        cond:0_1 = x23_1 s<= 1
        x23_1 -= 1
    while (not(cond:0_1))

int64_t result = AttribMapGetBool(*gMaterialAttribTable, &var_480, 0x6b)

if ((result.d & 1) == 0)
    *(arg1 + 0xca8) = 0
else
    *(arg1 + 0xca8) = 1
    int64_t* x0_5 = *gGraphicsInterface
    *(arg1 + 0x1958) = (*(*x0_5 + 0xa0))(x0_5, &var_480)
    sub_f7c944(AttribMapGetAssetPtr(*gMaterialAttribTable, &var_480, 0x5b), arg1, &var_480, 0)
    sub_f7c944(AttribMapGetAssetPtr(*gMaterialAttribTable, &var_480, 0x5c), arg1 + 0x650, &var_480, 
        1)
    uint32_t i_1 = 0
    v8.d = fconvert.s(0.5f)
    *(arg1 + 0xca4) = AttribMapGetInt(*gMaterialAttribTable, &var_480, 0x6a)
    
    do
        result = AttribMapTagExists(&var_480, i_1)
        
        if ((result.d & 1) != 0)
            int64_t fp_1 = sx.q(*(arg1 + 0xca0))
            void* x25_2 = arg1 + fp_1 * 0x28
            *(x25_2 + 0xcb0) = i_1
            void* x0_15 = AttribTagGetDefMap(*gMaterialAttribTable, i_1)
            *(x25_2 + 0xcc8) = 0
            *(x25_2 + 0xcc0) = 0
            uint64_t x8_10 = zx.q(*(x0_15 + 0x18) - 1)
            
            if (x8_10.d u> 0x28)
            label_f7c93c:
                pthread_kill(pthread_self(), 6)
                int64_t* x0_29
                int64_t* x1_18
                AttribMap* x2_9
                int32_t x3_4
                x0_29, x1_18, x2_9, x3_4 = XNoReturn()
                return sub_f7c944(x0_29, x1_18, x2_9, x3_4) __tailcall
            
            switch (x8_10)
                case 0
                    *(arg1 + fp_1 * 0x28 + 0xcb8) =
                        sx.q(AttribMapGetInt(*gMaterialAttribTable, &var_480, i_1))
                case 1, 2, 4, 5, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                        0x21, 0x22, 0x23, 0x24, 0x25, 0x26
                    goto label_f7c93c
                case 3
                    *(arg1 + fp_1 * 0x28 + 0xcb8) =
                        sx.q(AttribMapGetFloat(*gMaterialAttribTable, &var_480, i_1))
                case 9
                    *(arg1 + fp_1 * 0x28 + 0xcb8) =
                        AttribMapGetBool(*gMaterialAttribTable, &var_480, i_1) & 1
                case 0xe
                    *(arg1 + fp_1 * 0x28 + 0xcb8) =
                        AttribMapGetAssetPtr(*gMaterialAttribTable, &var_480, i_1)
                case 0x27
                    int32_t* x0_24 =
                        AttribMapGetDef(*gMaterialAttribTable, &var_480, *macro_ptr_ColorRgba, i_1)
                    float v0_2 = *x0_24
                    uint64_t x8_12
                    
                    if (not(v0_2 <= float.s(0x3f7fbe77)))
                        x8_12 = 0xff
                    else if (v0_2 >= float.s(0x3a83126f))
                        x8_12 = zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v8.d))
                    else
                        x8_12 = 0
                    
                    float v2_1 = x0_24[1]
                    float v1_1 = x0_24[2]
                    v0_2 = x0_24[3]
                    uint64_t x9_5
                    
                    if (v2_1 <= float.s(0x3f7fbe77))
                        if (v2_1 >= float.s(0x3a83126f))
                            x9_5 = zx.q(vcvts_s32_f32(v2_1 * float.s(0x437f0000) f+ v8.d)) << 8
                            
                            if (v1_1 > float.s(0x3f7fbe77))
                                goto label_f7c7e8
                            
                            goto label_f7c848
                        
                        x9_5 = 0
                        
                        if (v1_1 > float.s(0x3f7fbe77))
                            goto label_f7c7e8
                        
                        goto label_f7c848
                    
                    x9_5 = 0xff00
                    uint64_t x10_3
                    uint64_t x11_1
                    
                    if (v1_1 <= float.s(0x3f7fbe77))
                    label_f7c848:
                        
                        if (v1_1 >= float.s(0x3a83126f))
                            x10_3 = zx.q(vcvts_s32_f32(v1_1 * float.s(0x437f0000) f+ v8.d)) << 0x10
                            
                            if (not(v0_2 > float.s(0x3f7fbe77)))
                                goto label_f7c88c
                            
                            x11_1 = 0xff000000
                        else
                            x10_3 = 0
                            
                            if (not(v0_2 > float.s(0x3f7fbe77)))
                                goto label_f7c88c
                            
                            x11_1 = 0xff000000
                    else
                    label_f7c7e8:
                        x10_3 = 0xff0000
                        
                        if (v0_2 <= float.s(0x3f7fbe77))
                        label_f7c88c:
                            
                            if (v0_2 >= float.s(0x3a83126f))
                                x11_1 =
                                    zx.q(vcvts_s32_f32(v0_2 * float.s(0x437f0000) f+ v8.d)) << 0x18
                            else
                                x11_1 = 0
                        else
                            x11_1 = 0xff000000
                    
                    uint64_t x8_18 = x9_5 | x8_12 | x10_3
                    uint64_t x9_8 = x11_1 | x8_18
                    *(arg1 + fp_1 * 0x28 + 0xcb8) = (x9_8 & 0xff00ff00ff00ff00) | x8_18 u>> 0x10
                        | (zx.q(x9_8.d << 0x10) & 0xff0000)
                case 0x28
                    int32_t* x0_26 =
                        AttribMapGetDef(*gMaterialAttribTable, &var_480, *macro_ptr_ColorRgbaI, i_1)
                    
                    if (x0_26 != 0)
                        uint64_t x8_13 = zx.q(*x0_26)
                        *(arg1 + fp_1 * 0x28 + 0xcb8) = (zx.q(x8_13.d << 0x10) & 0xff0000)
                            | (x8_13 & 0xff00ff00ff00ff00) | (x8_13 u>> 0x10 & 0xff)
            
            int64_t* x0_27 = *gGraphicsInterface
            result = (*(*x0_27 + 0xf8))(x0_27, zx.q(i_1), &var_480, x25_2 + 0xcb0)
            
            if ((result.d & 1) != 0)
                *(arg1 + 0xca0) += 1
        
        i_1 += 1
    while (i_1 != 0x51)

return result
