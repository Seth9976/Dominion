// 函数: stbtt_GetGlyphKernAdvance
// 地址: 0x10064f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x30))

if (x8.d == 0)
    int64_t x8_6 = sx.q(*(arg1 + 0x2c))
    
    if (x8_6.d != 0)
        void* x8_7 = *(arg1 + 8) + x8_6
        
        if ((zx.d(*(x8_7 + 3)) | zx.d(*(x8_7 + 2))) != 0
                && _byteswap(zx.d(*(x8_7 + 8))) u>> 0x10 == 1)
            int32_t temp0_3 = _byteswap(zx.d(*(x8_7 + 0xa)) << 0x10)
            
            if (temp0_3 != 0)
                int32_t x12_1 = 0
                int32_t x9_18 = arg3 | arg2 << 0x10
                int32_t x10_4 = temp0_3 - 1
                int64_t x15_1
                
                while (true)
                    int32_t x14_2 = (x12_1 + x10_4) s>> 1
                    x15_1 = muls.dp.d(x14_2, 6)
                    int32_t temp0_4 = _byteswap(*(x8_7 + 0x12 + x15_1))
                    
                    if (x9_18 u< temp0_4)
                        x10_4 = x14_2 - 1
                        
                        if (x12_1 s> x10_4)
                            return 0
                    else
                        if (x9_18 u<= temp0_4)
                            break
                        
                        x12_1 = x14_2 + 1
                        
                        if (x12_1 s> x10_4)
                            return 0
                
                void* x8_44 = x8_7 + x15_1
                return zx.q(sx.d((zx.d(*(x8_44 + 0x16)) << 8).w)) | zx.q(*(x8_44 + 0x17))
else
    int16_t* x8_1 = *(arg1 + 8) + x8
    
    if (_byteswap(zx.d(*x8_1)) u>> 0x10 == 1 && (zx.d(*(x8_1 + 3)) | zx.d(x8_1[1].b)) == 0)
        void* x28_1 = x8_1 + _byteswap(zx.q(x8_1[4]) << 0x30)
        uint64_t x8_4 = _byteswap(zx.q(*x28_1) << 0x30)
        
        if (x8_4.d != 0)
            int64_t x16_1 = 0
            uint64_t x17_1
            void* x27_1
            
            while (true)
                x27_1 = x28_1 + _byteswap(zx.q(*(x28_1 + 2 + (x16_1 << 1))) << 0x30)
                
                if (_byteswap(zx.d(*x27_1)) u>> 0x10 == 2)
                    x17_1 = _byteswap(zx.q(*(x27_1 + 4)) << 0x30)
                    
                    if (x17_1.d != 0)
                        break
                
            label_100664c:
                x16_1 += 1
                
                if (x16_1 == x8_4)
                    return 0
            
            int64_t fp_1 = 0
            void* x1 = x27_1 + 6
            uint64_t var_80_1 = x17_1
            int64_t var_78_1 = x16_1
            void* var_88_1 = x1
            void* x8_39
            
            while (true)
                void* x23_1 = x27_1 + _byteswap(zx.q(*(x1 + (fp_1 << 1))) << 0x30)
                void* x9_19 = x23_1 + _byteswap(zx.q(*(x23_1 + 2)) << 0x30)
                uint32_t x8_24 = zx.d(*x23_1)
                int32_t temp0_6 = _byteswap(zx.d(*x9_19) << 0x10)
                void* x0_4
                int64_t x1_3
                int32_t x2
                int32_t x9_21
                
                if (temp0_6 == 2)
                    int32_t temp0_9 = _byteswap(zx.d(*(x9_19 + 2)) << 0x10)
                    
                    if (temp0_9 != 0)
                        int32_t x11_3 = 0
                        int32_t x10_15 = temp0_9 - 1
                        
                        while (true)
                            int32_t x12_4 = (x10_15 + x11_3) s>> 1
                            void* x13_6 = x9_19 + 4 + muls.dp.d(x12_4, 6)
                            int32_t temp0_10 = _byteswap(zx.d(*x13_6) << 0x10)
                            
                            if (temp0_10 s> arg2)
                                x10_15 = x12_4 - 1
                                
                                if (x11_3 s> x10_15)
                                    goto label_10066a8
                            else
                                if (_byteswap(zx.d(*(x13_6 + 2)) << 0x10) s>= arg2)
                                    x9_21 = arg2 - temp0_10 + _byteswap(zx.d(*(x13_6 + 4)) << 0x10)
                                    break
                                
                                x11_3 = x12_4 + 1
                                
                                if (x11_3 s> x10_15)
                                    goto label_10066a8
                        
                    label_10067dc:
                        
                        if (x9_21 != 0xffffffff)
                            int32_t temp0_13 = _byteswap(x8_24 << 0x10)
                            uint64_t result
                            
                            if (temp0_13 == 2)
                                uint64_t x9_29 = zx.q(*(x23_1 + 0xa))
                                uint32_t x24_1 = zx.d(*(x23_1 + 4))
                                uint32_t x22_1 = zx.d(*(x23_1 + 6))
                                void* x0 = x23_1 + _byteswap(zx.q(*(x23_1 + 8)) << 0x30)
                                uint64_t x19_1 = _byteswap(x9_29 << 0x30)
                                int32_t x0_1 = sub_100dbcc(x0, arg2)
                                int32_t x0_3 = sub_100dbcc(x23_1 + x19_1, arg3)
                                
                                if (x0_1 s>= _byteswap(zx.d(*(x23_1 + 0xc)) << 0x10))
                                    goto label_10069ec
                                
                                int32_t temp0_20 = _byteswap(zx.d(*(x23_1 + 0xe)) << 0x10)
                                
                                if (x0_3 s>= temp0_20)
                                    goto label_1006a0c
                                
                                result = 0
                                
                                if (_byteswap(x24_1) u>> 0x10 != 4)
                                    return result
                                
                                x17_1 = var_80_1
                                x16_1 = var_78_1
                                x1 = var_88_1
                                
                                if (_byteswap(x22_1) u>> 0x10 != 0)
                                    return result
                                
                                if (((x0_3 | x0_1) & 0x80000000) == 0)
                                    x8_39 = x23_1 + sx.q((x0_1 * temp0_20) << 1) + (sx.q(x0_3) << 1)
                                    break
                            else
                                if (temp0_13 != 1)
                                    goto label_10069cc
                                
                                uint64_t x10_18 = zx.q(*(x23_1 + (sx.q(x9_21) << 1) + 0xa))
                                uint32_t x11_7 = zx.d(*(x23_1 + 6))
                                result = 0
                                int32_t temp0_14 = _byteswap(zx.d(*(x23_1 + 4)))
                                void* x8_30 = x23_1 + _byteswap(x10_18 << 0x30)
                                uint32_t x10_19 = zx.d(*x8_30)
                                
                                if (temp0_14 u>> 0x10 != 4)
                                    return result
                                
                                if (_byteswap(x11_7) u>> 0x10 != 0)
                                    return result
                                
                                if (x9_21 s>= _byteswap(zx.d(*(x23_1 + 8)) << 0x10))
                                    x0_4, x1_3, x2 = __assert2(
                                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                                    "ExternalCode/stb/stb_truetype.h", 
                                        0x9f6, 
                                        "stbtt_int32 stbtt__GetGlyphGPOSInfoAdvance(const stbtt_fontinfo "
                                    "*, int, int)", 
                                        "coverageIndex < pairSetCount")
                                    return stbtt_GetCodepointKernAdvance(x0_4, x1_3, x2) __tailcall
                                
                                int32_t temp0_17 = _byteswap(x10_19 << 0x10)
                                
                                if (temp0_17 != 0)
                                    int32_t x10_20 = 0
                                    int32_t x9_28 = temp0_17 - 1
                                    
                                    while (true)
                                        int32_t x12_7 = (x9_28 + x10_20) s>> 1
                                        void* x11_14 = x8_30 + 2 + (sx.q(x12_7) << 2)
                                        int32_t temp0_18 = _byteswap(zx.d(*x11_14) << 0x10)
                                        
                                        if (temp0_18 s> arg3)
                                            x9_28 = x12_7 - 1
                                            
                                            if (x10_20 s> x9_28)
                                                break
                                        else
                                            if (temp0_18 s>= arg3)
                                                return zx.q(sx.d((zx.d(*(x11_14 + 2)) << 8).w))
                                                    | zx.q(*(x11_14 + 3))
                                            
                                            x10_20 = x12_7 + 1
                                            
                                            if (x10_20 s> x9_28)
                                                break
                else
                    if (temp0_6 != 1)
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0x984, "stbtt_int32 stbtt__GetCoverageIndex(stbtt_uint8 *, int)", 
                            &data_75c628)
                    label_10069cc:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0xa2e, 
                            "stbtt_int32 stbtt__GetGlyphGPOSInfoAdvance(const stbtt_fontinfo *, int, int)", 
                            &data_75c628)
                    label_10069ec:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0xa1b, 
                            "stbtt_int32 stbtt__GetGlyphGPOSInfoAdvance(const stbtt_fontinfo *, int, int)", 
                            "glyph1class < class1Count")
                    label_1006a0c:
                        __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0xa1c, 
                            "stbtt_int32 stbtt__GetGlyphGPOSInfoAdvance(const stbtt_fontinfo *, int, int)", 
                            "glyph2class < class2Count")
                        x0_4, x1_3, x2 = __assert2(
                            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/"
                        "ExternalCode/stb/stb_truetype.h", 
                            0x9f6, 
                            "stbtt_int32 stbtt__GetGlyphGPOSInfoAdvance(const stbtt_fontinfo *, int, int)", 
                            "coverageIndex < pairSetCount")
                        return stbtt_GetCodepointKernAdvance(x0_4, x1_3, x2) __tailcall
                    
                    int32_t temp0_7 = _byteswap(zx.d(*(x9_19 + 2)) << 0x10)
                    
                    if (temp0_7 != 0)
                        int32_t x12_2 = 0
                        int32_t x10_11 = temp0_7 - 1
                        
                        while (true)
                            int32_t x9_20 = x10_11 + x12_2
                            x9_21 = x9_20 s>> 1
                            int32_t temp0_8 = _byteswap(
                                zx.d(*(x9_19 + 4 + (sx.q(x9_20) & 0xfffffffffffffffe))) << 0x10)
                            
                            if (temp0_8 s> arg2)
                                x10_11 = x9_21 - 1
                                
                                if (x12_2 s> x10_11)
                                    goto label_10066a8
                            else
                                if (temp0_8 s>= arg2)
                                    break
                                
                                x12_2 = x9_21 + 1
                                
                                if (x12_2 s> x10_11)
                                    goto label_10066a8
                        
                        goto label_10067dc
            label_10066a8:
                fp_1 += 1
                
                if (fp_1 == x17_1)
                    goto label_100664c
            
            return zx.q(sx.d((zx.d(*(x8_39 + 0x10)) << 8).w)) | zx.q(*(x8_39 + 0x11))

return 0
