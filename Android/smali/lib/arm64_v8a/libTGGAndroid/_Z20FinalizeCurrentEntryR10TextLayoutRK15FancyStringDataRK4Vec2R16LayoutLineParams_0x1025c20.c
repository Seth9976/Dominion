// 函数: _Z20FinalizeCurrentEntryR10TextLayoutRK15FancyStringDataRK4Vec2R16LayoutLineParams
// 地址: 0x1025c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t x24

if (*(arg4 + 8) == 0xffffffff)
    x24 = 0
else
    while (true)
        int64_t x9_1 = sx.q(*(arg4 + 4))
        int32_t* x8_1 = *(arg1 + 0x20)
        v9.d = 0f
        v8.d = 0f
        int128_t v0
        int128_t v1
        
        if (x9_1.d != 0xffffffff)
            void* x9_2 = &x8_1[x9_1 * 0x10]
            v0.d = *(x9_2 + 0x10)
            v1.d = *(x9_2 + 0x18)
            v8.d = v0.d f+ v1.d
        
        int64_t x9_3 = sx.q(*(arg4 + 8))
        int32_t x10_2 = x8_1[x9_3 * 0x10]
        int128_t var_160
        int32_t x8_7
        int128_t v2
        int128_t v3
        
        if (x10_2 == 3 || x10_2 == 2)
            v0, v1, v2, v3 = FancyIconWidth(*(x8_1 + (x9_3 << 6) + 0x30))
            v1.d = *(arg2 + 0x2c)
            v9.d = v0.d f* v1.d
        label_1025d28:
            x8_7 = *(arg2 + 0x70)
            
            if (x8_7 == 2)
            label_1026428:
                x24 = 0
                *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x18) = v9.d
                break
        else
            if (x10_2 != 0)
                goto label_1025d28
            
            XString::XString()
            void* x8_3 = *(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6)
            *(x8_3 + 0x30)
            XString::AppendUTF8_size(&var_160, (*(x8_3 + 0x28)).d)
            char* x0_1 = XString::operator char const*()
            int64_t* x8_5 = *(arg2 + 0x78)
            XAsset* x0_2
            
            if (x8_5 != 0)
                x0_2 = *x8_5
            
            int32_t v0_2
            
            if (x8_5 == 0 || x0_2 == 0)
                v0_2 = FontStringWidth(**(arg2 + 8), x0_1, *(arg2 + 0x54), *(arg2 + 0x58))
            else
                v0_2 = TTFontStringWidth(x0_2, x0_1, *(arg2 + 0x80), *(arg2 + 0x54), *(arg2 + 0x58))
            
            v9.d = v0_2 f* *(arg2 + 0x2c)
            v0, v1, v2, v3 = XString::~XString()
            x8_7 = *(arg2 + 0x70)
            
            if (x8_7 == 2)
                goto label_1026428
        
        v0.d = *arg3
        v1.d = v8.d f+ v9.d
        void* x8_48
        
        if (v1.d f<= v0.d)
            x24 = 0
            x8_48 = *(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6)
        label_10268a0:
            *(x8_48 + 0x18) = v9.d
            *(arg4 + 0xc) = *(arg4 + 8)
            break
        
        uint64_t x8_8 = zx.q(x8_7 - 1)
        
        if (x8_8.d u> 4)
        label_10268e8:
            pthread_kill(pthread_self(), 6)
            int64_t* x0_48 = XNoReturn()
            XString::~XString()
            sub_1101e04(x0_48)
            noreturn
        
        int128_t var_c0
        
        switch (x8_8)
            case 0, 4
                int32_t i_6 = *(arg4 + 8)
                x24 = 0
                
                while (true)
                    int32_t* x9_39 = *(arg1 + 0x20)
                    int32_t i_8
                    
                    if (*(x9_39 + (zx.q(i_6) << 0x20 s>> 0x1a)) == 0)
                        x9_39[sx.q(i_6) * 0x10 + 0xe] = *(arg2 + 0x70) == 5 ? 1 : 0
                        void* x8_56 = *(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6)
                        char* x25_1 = *(x8_56 + 0x28)
                        int64_t x26_1 = *(x8_56 + 0x30)
                        *(x8_56 + 0x30) = x25_1
                        
                        while (x25_1 u< x26_1)
                            XString::XString()
                            XString::AppendLength(&var_160, 
                                (*(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x28)).d)
                            XString::XString(&var_c0)
                            
                            if (*(arg2 + 0x70) == 5)
                                XString::operator+=(&var_c0)
                            
                            char* x0_36 = XString::operator char const*()
                            int64_t* x8_60 = *(arg2 + 0x78)
                            XAsset* x0_37
                            
                            if (x8_60 != 0)
                                x0_37 = *x8_60
                            
                            float v0_6
                            
                            if (x8_60 == 0 || x0_37 == 0)
                                v0_6 = FontStringWidth(**(arg2 + 8), x0_36, *(arg2 + 0x54), 
                                    *(arg2 + 0x58))
                            else
                                v0_6 = TTFontStringWidth(x0_37, x0_36, *(arg2 + 0x80), 
                                    *(arg2 + 0x54), *(arg2 + 0x58))
                            
                            v9.d = *arg3
                            v0_6 = v0_6 * *(arg2 + 0x2c)
                            v10.d = v8.d f+ v0_6
                            
                            if (v10.d f> v9.d)
                                x24 = 1
                            else
                                *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x18) = v0_6
                                *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x30) = x25_1
                                int32_t x9_46 = sx.d(*x25_1)
                                
                                if ((x9_46 & 0x80000000) != 0)
                                    int32_t x8_66 = x9_46 & 0xff
                                    
                                    if ((x8_66 & 0xe0) == 0xc0)
                                        x25_1 = &x25_1[1]
                                    else if ((x9_46 & 0xf0) == 0xe0)
                                        x25_1 = &x25_1[2]
                                    else if ((x8_66 & 0xf8) == 0xf0)
                                        x25_1 = &x25_1[3]
                                
                                x25_1 = &x25_1[1]
                            
                            XString::~XString()
                            v0, v1, v2 = XString::~XString()
                            
                            if (v10.d f> v9.d)
                                break
                        
                        int64_t x10_20 = sx.q(*(arg4 + 8))
                        int64_t x9_49 = *(arg1 + 0x20)
                        void* x8_68 = x9_49 + (x10_20 << 6)
                        
                        if (*(x8_68 + 0x28) != *(x8_68 + 0x30))
                            break
                        
                        i_8 = *arg4
                        
                        if (i_8 s>= x10_20.d)
                            *(arg1 + 0x28) = i_8
                        else
                            int32_t* x12_10 = x9_49 + (sx.q(i_8) << 6)
                            i_6 = -1
                            int32_t i = i_8
                            
                            do
                                int32_t x14_4 = *x12_10
                                x12_10 = &x12_10[0x10]
                                
                                if (x14_4 != 1)
                                    i_6 = i
                                
                                i += 1
                            while (x10_20.d != i)
                            
                            if (i_6 == 0xffffffff)
                                *(arg1 + 0x28) = i_8
                            else
                                if (i_6 s< 1)
                                    v8.d = 0f
                                else
                                    void* x10_23 = x9_49 + (sx.q(i_6) << 6)
                                    v0.d = *(x10_23 - 0x30)
                                    v1.d = *(x10_23 - 0x28)
                                    v8.d = v0.d f+ v1.d
                                
                                *(arg1 + 0x28) = i_6 + 1
                                *(arg4 + 0x14) = *(x9_49 + (sx.q(i_6) << 6) + 0xc) + 1
                            label_1026484:
                                *(arg4 + 4) = i_6
                                *(arg4 + 8) = i_6
                                continue
                    else
                        int64_t* x8_49 = *(arg2 + 0x78)
                        XAsset* x0_31
                        
                        if (x8_49 != 0)
                            x0_31 = *x8_49
                        
                        if (x8_49 == 0 || x0_31 == 0)
                            v0.d = *(arg2 + 0x54)
                            v1.d = *(arg2 + 0x58)
                            v0, v1, v2 = FontStringWidth(**(arg2 + 8), "...", v0.d, v1.d)
                        else
                            v0.d = *(arg2 + 0x80)
                            v1.d = *(arg2 + 0x54)
                            v2.d = *(arg2 + 0x58)
                            v0, v1, v2 = TTFontStringWidth(x0_31, "...", v0.d, v1.d, v2.d)
                        
                        int64_t x10_17 = sx.q(*(arg4 + 8))
                        int64_t x9_40 = *(arg1 + 0x20)
                        v2.d = *arg3
                        void* x8_51 = x9_40 + (x10_17 << 6)
                        v1.d = *(x8_51 + 0x10)
                        v8.d = v0.d f* *(arg2 + 0x2c)
                        v0.d = v1.d f+ *(x8_51 + 0x18)
                        v0.d = v8.d f+ v0.d
                        
                        if (v0.d f<= v2.d)
                            *(arg1 + 0x28) = x10_17.d + 1
                            *(arg4 + 4) = x10_17.d
                        label_10267c0:
                            int32_t x8_75 = *(*(arg1 + 0x20) + (sx.q(*(arg1 + 0x28)) << 6) - 0x34)
                            *(arg4 + 8) = 0xffffffff
                            *(arg4 + 0x14) = x8_75 + 1
                            void* x0_42 = TextEntryAlloc(arg1, 0, arg2, arg4)
                            *(x0_42 + 0x28) = 0
                            *(x0_42 + 0x30) = 0
                            *(x0_42 + 0x38) = *(arg2 + 0x70) == 5 ? 1 : 0
                            int64_t* x8_79 = *(arg2 + 0x78)
                            XAsset* x0_43
                            
                            if (x8_79 != 0)
                                x0_43 = *x8_79
                            
                            float v0_7
                            float v2_5
                            
                            if (x8_79 == 0 || x0_43 == 0)
                                XAsset* x22_2 = **(arg2 + 8)
                                
                                if (x22_2 == 0)
                                    x22_2 = AssetPtrGetNull(0x12)
                                
                                void** x8_81 = *x22_2
                                
                                if (x8_81 == 0)
                                    AssetCatalogLoadAsset(x22_2, false, true)
                                    x8_81 = *x22_2
                                
                                int32_t x9_54 = *(x22_2 + 0x24)
                                *(x22_2 + 0x24) = x9_54 + 1
                                v2_5 = *(arg2 + 0x2c)
                                float v1_7 = *(*x8_81 + 4)
                                v0_7 = float.s(*(arg2 + 0x18))
                                *(x22_2 + 0x24) = x9_54
                                v0_7 = float.s(v1_7) - v0_7
                            else
                                v0_7 = TTFontAscent(x0_43, *(arg2 + 0x80))
                                v2_5 = *(arg2 + 0x2c)
                                v0_7 = v0_7 - float.s(*(arg2 + 0x18))
                            
                            *(x0_42 + 0x20) = v2_5 * v0_7
                            *(x0_42 + 0x18) = v8.d
                        else
                            v0.d = v8.d f+ v1.d
                            
                            if (v0.d f<= v2.d)
                                *(arg1 + 0x28) = x10_17.d
                                *(arg4 + 4) = x10_17.d - 1
                                goto label_10267c0
                            
                            i_8 = *arg4
                            
                            if (i_8 s>= x10_17.d)
                                *(arg1 + 0x28) = i_8
                            else
                                int32_t* x12_9 = x9_40 + (sx.q(i_8) << 6)
                                i_6 = -1
                                int32_t i_1 = i_8
                                
                                do
                                    int32_t x14_3 = *x12_9
                                    x12_9 = &x12_9[0x10]
                                    
                                    if (x14_3 != 1)
                                        i_6 = i_1
                                    
                                    i_1 += 1
                                while (x10_17.d != i_1)
                                
                                if (i_6 != 0xffffffff)
                                    if (i_6 s>= 1)
                                        void* x9_37 = x9_40 + (sx.q(i_6) << 6)
                                        v0.d = *(x9_37 - 0x30)
                                        v1.d = *(x9_37 - 0x28)
                                        v8.d = v0.d f+ v1.d
                                    else
                                        v8.d = 0f
                                    
                                    *(arg1 + 0x28) = i_6 + 1
                                    x24 = 1
                                    goto label_1026484
                                
                                *(arg1 + 0x28) = i_8
                    x24 = 1
                    break
                
                *(arg4 + 0xc) = *(arg4 + 8)
                break
                break
            case 1
                goto label_10268e8
            case 2
                int64_t x3 = sx.q(*(arg4 + 8))
                int32_t* x8_9 = *(arg1 + 0x20)
                
                if (x8_9[x3 * 0x10] == 0)
                    void* x8_10 = &x8_9[x3 * 0x10]
                    
                    if (zx.d(*(x8_10 + 0x3c)) != 0)
                        goto label_1025da0
                    
                    char* x27_1 = *(x8_10 + 0x28)
                    int64_t x28_2 = *(x8_10 + 0x30)
                    
                    if (x27_1 == x28_2)
                    label_1026228:
                        char* x8_31 = *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x28)
                        int32_t x9_26 = sx.d(*x8_31)
                        int32_t x0_22 = x9_26 & 0xff
                        
                        if ((x9_26 & 0x80000000) != 0)
                            if ((x0_22 & 0xe0) == 0xc0)
                                x0_22 = (zx.d(x8_31[1]) & 0x3f) | (0x1f & x0_22) << 6
                            else if ((x9_26 & 0xf0) == 0xe0)
                                x0_22 = (((0xfffff03f & (x0_22 & 0xf) << 0xc)
                                    | (0x3f & zx.d(x8_31[1])) << 6) & 0xffffffc0)
                                    | (zx.d(x8_31[2]) & 0x3f)
                            else if ((x0_22 & 0xf8) == 0xf0)
                                x0_22 = (((0xfffff03f & ((0xfffc0fff & (x0_22 & 7) << 0x12)
                                    | (0x3f & zx.d(x8_31[1])) << 0xc)) | (0x3f & zx.d(x8_31[2])) << 6)
                                    & 0xffffffc0) | (zx.d(x8_31[3]) & 0x3f)
                        
                        int32_t x0_27
                        x0_27, v0, v1, v2, v3 = CanBreak(x0_22)
                        
                        if ((x0_27 & 1) == 0)
                            int32_t x8_36 = *arg4
                            int32_t x12_3 = *(arg4 + 8)
                            
                            if (x8_36 s< x12_3)
                                int32_t* x10_10 = *(arg1 + 0x20)
                                int64_t x11_3 = sx.q(x8_36)
                                int32_t x9_31 = -1
                                int32_t x14_2 = x8_36
                                int32_t* x13_1 = &x10_10[x11_3 * 0x10]
                                
                                do
                                    int32_t x15_2 = *x13_1
                                    x13_1 = &x13_1[0x10]
                                    
                                    if (x15_2 != 1)
                                        x9_31 = x14_2
                                    
                                    x14_2 += 1
                                while (x12_3 != x14_2)
                                
                                if (x9_31 != 0xffffffff)
                                    int32_t x12_5 = *(x10_10 + (zx.q(x9_31) << 0x20 s>> 0x1a))
                                    
                                    if (x12_5 - 2 u>= 2 && x12_5 != 0)
                                        goto label_10268e8
                                    
                                    int32_t x12_8 = x9_31
                                    
                                    if ((zx.d(x10_10[sx.q(x9_31) * 0x10 + 1].b) & 1) != 0)
                                        if (x8_36 s>= x9_31)
                                            x12_8 = -1
                                        else
                                            void* x10_12 = &x10_10[x11_3 * 0x10 + 1]
                                            x12_8 = -1
                                            
                                            do
                                                int32_t x11_4 = *(x10_12 - 4)
                                                uint32_t x13_4 = zx.d(*x10_12)
                                                x10_12 += 0x40
                                                int32_t x11_5
                                                
                                                x11_5 = x11_4 == 1 ? x12_8 : x8_36
                                                
                                                x8_36 += 1
                                                
                                                if ((x13_4 & 1) == 0)
                                                    x12_8 = x11_5
                                            while (x9_31 != x8_36)
                                    
                                    if (v8.d f== 0f)
                                        continue
                                    
                                    v0, v1, v2, v3 =
                                        UpdateToNewLine(arg1, arg3, arg4, x12_8 + 1, *(arg4 + 4))
                                    continue
                                    continue
                        
                        x3 = sx.q(*(arg4 + 8))
                        
                        if (v8.d f!= 0f)
                            v0, v1, v2, v3 = UpdateToNewLine(arg1, arg3, arg4, x3.d, *(arg4 + 4))
                            continue
                            continue
                        
                        x8_9 = *(arg1 + 0x20)
                    label_1026898:
                        x24 = 0
                        x8_48 = &x8_9[x3 * 0x10]
                        goto label_10268a0
                    else
                        char* fp_1 = nullptr
                        v10.d = 0f
                        
                        do
                            int32_t x9_16 = sx.d(*x27_1)
                            int32_t x23_1
                            char* x8_18
                            int32_t x9_17
                            
                            if ((x9_16 & 0x80000000) != 0)
                                int32_t x8_19 = x9_16 & 0xff
                                
                                if ((x8_19 & 0xe0) == 0xc0)
                                    x8_18 = &x27_1[1]
                                    x27_1 = &x8_18[1]
                                    x9_17 = sx.d(*x27_1)
                                    x23_1 = x9_17 & 0xff
                                    
                                    if ((x9_17 & 0x80000000) != 0)
                                        goto label_1026120
                                else if ((x9_16 & 0xf0) != 0xe0)
                                    if ((x8_19 & 0xf8) == 0xf0)
                                        x8_18 = &x27_1[3]
                                    else
                                        x8_18 = x27_1
                                    
                                    x27_1 = &x8_18[1]
                                    x9_17 = sx.d(*x27_1)
                                    x23_1 = x9_17 & 0xff
                                    
                                    if ((x9_17 & 0x80000000) != 0)
                                        goto label_1026120
                                else
                                    x8_18 = &x27_1[2]
                                    x27_1 = &x8_18[1]
                                    x9_17 = sx.d(*x27_1)
                                    x23_1 = x9_17 & 0xff
                                    
                                    if ((x9_17 & 0x80000000) != 0)
                                        goto label_1026120
                            else
                                x8_18 = x27_1
                                x27_1 = &x8_18[1]
                                x9_17 = sx.d(*x27_1)
                                x23_1 = x9_17 & 0xff
                                
                                if ((x9_17 & 0x80000000) != 0)
                                label_1026120:
                                    
                                    if ((x23_1 & 0xe0) == 0xc0)
                                        x23_1 = (zx.d(x8_18[2]) & 0x3f) | (0x1f & x23_1) << 6
                                    else if ((x9_17 & 0xf0) == 0xe0)
                                        x23_1 = (((0xfffff03f & (x23_1 & 0xf) << 0xc)
                                            | (0x3f & zx.d(x8_18[2])) << 6) & 0xffffffc0)
                                            | (zx.d(x8_18[3]) & 0x3f)
                                    else if ((x23_1 & 0xf8) == 0xf0)
                                        x23_1 = (((0xfffff03f & ((0xfffc0fff & (x23_1 & 7) << 0x12)
                                            | (0x3f & zx.d(x8_18[2])) << 0xc))
                                            | (0x3f & zx.d(x8_18[3])) << 6) & 0xffffffc0)
                                            | (zx.d(x8_18[4]) & 0x3f)
                            XString::XString()
                            XString::AppendUTF8_size(&var_160, 
                                (*(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x28)).d)
                            char* x0_17 = XString::operator char const*()
                            int64_t* x8_27 = *(arg2 + 0x78)
                            XAsset* x0_18
                            
                            if (x8_27 != 0)
                                x0_18 = *x8_27
                            
                            float v0_4
                            
                            if (x8_27 == 0 || x0_18 == 0)
                                v0_4 = FontStringWidth(**(arg2 + 8), x0_17, *(arg2 + 0x54), 
                                    *(arg2 + 0x58))
                            else
                                v0_4 = TTFontStringWidth(x0_18, x0_17, *(arg2 + 0x80), 
                                    *(arg2 + 0x54), *(arg2 + 0x58))
                            
                            v11.d = v0_4 f* *(arg2 + 0x2c)
                            
                            if (v8.d f+ v11.d f> *arg3)
                                XString::~XString()
                                break
                            
                            int32_t x0_21
                            
                            if (x23_1 != 0)
                                x0_21 = CanBreak(x23_1)
                            
                            if (x23_1 == 0 || (x0_21 & 1) != 0)
                                fp_1 = x27_1
                                v10 = v11
                            
                            XString::~XString()
                        while (x27_1 != x28_2)
                        
                        if (fp_1 == 0)
                            goto label_1026228
                        
                        *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x30) = fp_1
                        *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x18) = v10.d
                        v8.d = *(*(arg1 + 0x20) + (sx.q(*(arg4 + 8)) << 6) + 0x20)
                        FinalizeCurrentLine(arg1, arg2, arg3, arg4)
                        
                        if (fp_1 != x28_2)
                            uint64_t x8_43 = zx.q(*fp_1)
                            
                            if (x8_43.d u<= 0x20)
                                while ((1 << x8_43 & 0x100000600) != 0)
                                    fp_1 = &fp_1[1]
                                    x8_43 = zx.q(*fp_1)
                                    
                                    if (x8_43.d u> 0x20)
                                        break
                            
                            void* x0_30
                            x0_30, v0, v1, v2, v3 = TextEntryAlloc(arg1, 0, arg2, arg4)
                            *(x0_30 + 0x20) = v8.d
                            *(x0_30 + 0x28) = fp_1
                            *(x0_30 + 0x30) = x28_2
                            continue
                else
                    if (v8.d f== 0f)
                        goto label_1026898
                    
                    v0, v1, v2, v3 = UpdateToNewLine(arg1, arg3, arg4, x3.d, *(arg4 + 4))
                    continue
                    continue
            case 3
            label_1025da0:
                int32_t i_5 = *arg4
                int32_t x4_2 = *(arg4 + 4)
                void* x16_1 = *(arg1 + 0x20)
                int32_t i_10
                
                if (i_5 s<= x4_2)
                    void* x9_11 = x16_1 + (sx.q(i_5) << 6) + 4
                    i_10 = -1
                    int32_t i_2 = i_5
                    
                    do
                        int32_t x11_1 = *(x9_11 - 4)
                        uint32_t x12_1 = zx.d(*x9_11)
                        x9_11 += 0x40
                        int32_t i_7
                        
                        i_7 = x11_1 == 1 ? i_10 : i_2
                        
                        i_2 += 1
                        
                        if ((x12_1 & 1) == 0)
                            i_10 = i_7
                    while (x4_2 + 1 != i_2)
                else
                    i_10 = -1
                
                int64_t x8_12 = sx.q(*(arg4 + 8))
                int32_t x28_1 = 1
                
                if (x8_12.d s>= 2 && zx.d(*(x16_1 + (x8_12 << 6) + 0x3c)) != 0)
                    x28_1 = *(x16_1 + (x8_12 << 6) - 0x7c) & 1
                
                if (i_10 == 0xffffffff)
                    if (not(v8.d f== 0f))
                        UpdateToNewLine(arg1, arg3, arg4, i_5, x4_2)
                    
                    FinalizeCurrentLine(arg1, arg2, arg3, arg4)
                else
                    int128_t var_94_1 = *(arg4 + 0x2c)
                    int128_t var_b0_1 = *(arg4 + 0x10)
                    int128_t var_a0_1 = *(arg4 + 0x20)
                    var_c0 = *arg4
                    var_c0:4.d = i_10
                    var_c0:8.d = 0xffffffff
                    int128_t* x8_15 = *(arg1 + 0x18)
                    v0 = x8_15[1]
                    var_160 = *x8_15
                    v3 = x8_15[2]
                    int128_t var_120_1 = x8_15[4]
                    int128_t var_110_1 = x8_15[5]
                    int128_t var_130_1 = x8_15[3]
                    v1 = x8_15[7]
                    int104_t var_e0_1 = x8_15[8].13
                    int128_t var_100_1 = x8_15[6]
                    
                    if ((i_10 & 0x80000000) == 0)
                        v2.d = (x8_15[9].q).d
                        int32_t x8_16 = v3.d
                        int32_t x10_4 = v3:4.d
                        int32_t x9_15 = v1.d
                        int64_t x12_2 = var_160:8.q
                        int64_t x15_1 = v1:8.q
                        v1.q = var_e0_1.q
                        int32_t x14_1 = v0:8.d
                        int32_t x11_2 = v0:0xc.d
                        v0.d = v3:0xc.d
                        v3.d = var_130_1.d
                        int64_t v4 = var_130_1:8.q
                        uint64_t i_9 = zx.q(i_10 + 1)
                        int64_t* x16_2 = x16_1 + 0x20
                        float v5
                        
                        if (zx.d(var_e0_1:0xc.b) != 0)
                            uint64_t i_3
                            
                            do
                                if (x16_2[-4].d == 1)
                                    void* x17_3 = *x16_2
                                    
                                    if (*(x17_3 + 0x10) == 0 && *(x17_3 + 0x60) == 0)
                                        v5 = *(x17_3 + 0x2c)
                                        
                                        if (v5 != 0f)
                                            v0.d = v5 f* v2.d
                                        else
                                            v0.d = v0.d
                                    
                                    int32_t x2_2 = *(x17_3 + 0x70)
                                    int32_t x3_1 = *(x17_3 + 0x1c)
                                    int64_t x1_3 = *(x17_3 + 8)
                                    int64_t x0_7 = *(x17_3 + 0x78)
                                    
                                    if (x2_2 != 0)
                                        x9_15 = x2_2
                                    
                                    if (x3_1 != 0)
                                        x11_2 = x3_1
                                    
                                    if (x1_3 != 0)
                                        if (x0_7 != 0)
                                            goto label_1025eb4
                                        
                                        x12_2 = x1_3
                                    label_1025ebc:
                                        x14_1 = *(x17_3 + 0x18)
                                        v3.d = *(x17_3 + 0x30)
                                        v4 = *(x17_3 + 0x38)
                                        x15_1 = x0_7
                                    else if (x0_7 != 0)
                                    label_1025eb4:
                                        v1.q = *(x17_3 + 0x80)
                                        x12_2 = 0
                                        goto label_1025ebc
                                
                                i_3 = i_9
                                i_9 -= 1
                                x16_2 = &x16_2[8]
                            while (i_3 != 1)
                        else
                            uint64_t i_4
                            
                            do
                                if (x16_2[-4].d == 1)
                                    void* x17_5 = *x16_2
                                    
                                    if (*(x17_5 + 0x10) == 0 && *(x17_5 + 0x60) == 0)
                                        v5 = *(x17_5 + 0x2c)
                                        
                                        if (v5 != 0f)
                                            v0.d = v5 f* v2.d
                                        else
                                            v0.d = v0.d
                                        
                                        if (zx.d(*(x17_5 + 0x23)) != 0)
                                            x8_16 = *(x17_5 + 0x20)
                                        
                                        if (zx.d(*(x17_5 + 0x27)) != 0)
                                            x10_4 = *(x17_5 + 0x24)
                                    
                                    int32_t x2_3 = *(x17_5 + 0x70)
                                    int32_t x3_2 = *(x17_5 + 0x1c)
                                    int64_t x1_4 = *(x17_5 + 8)
                                    int64_t x0_12 = *(x17_5 + 0x78)
                                    
                                    if (x2_3 != 0)
                                        x9_15 = x2_3
                                    
                                    if (x3_2 != 0)
                                        x11_2 = x3_2
                                    
                                    if (x1_4 != 0)
                                        if (x0_12 != 0)
                                            goto label_1025f3c
                                        
                                        x12_2 = x1_4
                                    label_1025f44:
                                        x14_1 = *(x17_5 + 0x18)
                                        v3.d = *(x17_5 + 0x30)
                                        v4 = *(x17_5 + 0x38)
                                        x15_1 = x0_12
                                    else if (x0_12 != 0)
                                    label_1025f3c:
                                        v1.q = *(x17_5 + 0x80)
                                        x12_2 = 0
                                        goto label_1025f44
                                
                                i_4 = i_9
                                i_9 -= 1
                                x16_2 = &x16_2[8]
                            while (i_4 != 1)
                        int128_t var_140_1
                        var_140_1.d = x8_16
                        var_140_1:4.d = x10_4
                        int128_t var_f0_1
                        var_f0_1.d = x9_15
                        var_160:8.q = x12_2
                        var_f0_1:8.q = x15_1
                        var_e0_1.q = v1.q
                        int128_t var_150_1
                        var_150_1:8.d = x14_1
                        var_150_1:0xc.d = x11_2
                        var_140_1:0xc.d = v0.d
                        var_130_1.d = v3.d
                        var_130_1:8.q = v4
                    
                    FinalizeCurrentLine(arg1, &var_160, arg3, &var_c0)
                    
                    if (not(v8.d f== 0f))
                        v0, v1, v2, v3 =
                            UpdateToNewLine(arg1, arg3, arg4, x28_1 + i_10, *(arg4 + 4))
                        continue
                        continue
        
        x24 = 0
        *(arg4 + 0xc) = *(arg4 + 8)
        break
    
    *(arg4 + 8) = 0xffffffff

return zx.q(x24) & 1
