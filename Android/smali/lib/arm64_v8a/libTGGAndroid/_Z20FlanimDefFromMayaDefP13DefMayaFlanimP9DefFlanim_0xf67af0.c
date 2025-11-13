// 函数: _Z20FlanimDefFromMayaDefP13DefMayaFlanimP9DefFlanim
// 地址: 0xf67af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefMayaFlanim* x28 = arg1
*(arg2 + 0x4c) = *(arg1 + 8)
*(arg2 + 0x54) = *(arg1 + 0x10)
*(arg2 + 0x58) = *(arg1 + 0x14)
*(arg2 + 0x5c) = *(arg1 + 0x44)
*(arg2 + 0x5d) = *(arg1 + 0x45)
int32_t x8_4 = *(arg1 + 0x20)
*(arg2 + 8) = x8_4
void* x0_1 = XCallocAllowingZeroSize(x8_4 * 0x18)
int32_t x8_6 = *(arg2 + 8)
*arg2 = x0_1

if (x8_6 s>= 1)
    void* x22_1 = x0_1
    int64_t x20_1 = 0
    int64_t x25_1 = 0
    int64_t x26_1 = 1
    
    while (true)
        int64_t* x27_1 = *(x28 + 0x18)
        XString::XString()
        int64_t x23_1 = *(x27_1 + x25_1)
        char* s = strrchr(x23_1, 0x5f)
        int32_t var_64
        int32_t x0_3
        
        if (s != 0)
            x0_3 = sscanf(s, "_fps%f", &var_64)
        
        char var_70
        
        if (s == 0 || x0_3 != 1)
            var_64 = 0
            XString::operator=(&var_70)
        else
            XString::AppendLength(&var_70, x23_1.d)
        
        if (not(var_64 f!= 0f))
            var_64 = *(x28 + 0x10)
        
        void* x8_7 = x27_1 + x25_1
        char** x22_2 = x22_1 + x20_1
        *(x22_2 + 0xc) = *(x8_7 + 0xc)
        x22_2[1].d = *(x8_7 + 8)
        x22_2[2].d = var_64
        DefDeepCopyString(x22_2, XString::operator char const*())
        XString::~XString()
        
        if (x26_1 s>= sx.q(*(arg2 + 8)))
            break
        
        x22_1 = *arg2
        x25_1 += 0x10
        x20_1 += 0x18
        x26_1 += 1

*(arg2 + 0x10) = *(x28 + 0x28)
*(arg2 + 0x18) = *(x28 + 0x30)
uint64_t x8_12 = zx.q(*(x28 + 0x40))
*(x28 + 0x28) = 0
*(x28 + 0x30) = 0
int32_t x11
int32_t x20_2

if (x8_12.d s< 1)
    x20_2 = 0
    x11 = 0
else
    void* x9_2 = *(x28 + 0x38)
    int64_t i_3
    
    if (x8_12.d != 1)
        i_3 = x8_12 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        int32_t x13_1 = 0
        int32_t x14_1 = 0
        void* x15_1 = x9_2 + 0x38
        int64_t i_2 = i_3
        int64_t i
        
        do
            int32_t x17_2 = *(x15_1 - 0x28)
            int32_t x0_8
            int32_t x1_3
            int32_t x2_3
            
            if (x17_2 == 0)
                x0_8 = 1
                x1_3 = *x15_1
                
                if (x1_3 != 0)
                    x2_3 = *(x15_1 + 0x10)
                else
                    x1_3 = 1
                    x2_3 = 1
            else
                x0_8 = *(x15_1 - 0x18)
                x1_3 = *x15_1
                
                if (x1_3 != 0)
                    x2_3 = *(x15_1 + 0x10)
                else
                    x1_3 = 1
                    x2_3 = 1
            
            int32_t x17_1
            
            x17_1 = x17_2 != 0 ? x17_2 : 1
            
            x13_1 += x0_8
            x14_1 += x2_3
            x12_1 += x1_3
            i = i_2
            i_2 -= 2
            x11_1 += x17_1
            x15_1 += 0x50
        while (i != 2)
        x20_2 = x14_1 + x13_1
        x11 = x12_1 + x11_1
        
        if (i_3 != x8_12)
            goto label_f67d20
    else
        i_3 = 0
        x11 = 0
        x20_2 = 0
    label_f67d20:
        void* x9_4 = x9_2 + i_3 * 0x28 + 0x20
        int64_t x8_13 = x8_12 - i_3
        
        while (true)
            int32_t x10_1 = *(x9_4 - 0x10)
            
            if (x10_1 != 0)
                int32_t x12_2 = *x9_4
                x9_4 += 0x28
                x11 += x10_1
                x20_2 += x12_2
                int64_t temp0_1 = x8_13
                x8_13 -= 1
                
                if (temp0_1 == 1)
                    break
            else
                x11 += 1
                x20_2 += 1
                int64_t temp1_1 = x8_13
                x8_13 -= 1
                x9_4 += 0x28
                
                if (temp1_1 == 1)
                    break

*(arg2 + 0x28) = x11
*(arg2 + 0x20) = XCallocAllowingZeroSize(x11 * 0x18)
*(arg2 + 0x38) = x20_2
*(arg2 + 0x30) = XCallocAllowingZeroSize(x20_2 << 7)
int64_t result
int128_t v0_2
result, v0_2 = XCalloc(0x640)
*(arg2 + 0x40) = result
*(arg2 + 0x48) = 0
DefMayaFlanim* var_88 = x28

if ((zx.d(data_23eef40) & 1) == 0)
    result, v0_2 = __cxa_guard_acquire(&data_23eef40)
    
    if (result.d != 0)
        data_23eef38 = AssetPtrFromPath(*gMayaFlanimImageDefault, 3)
        result, v0_2 = __cxa_guard_release(&data_23eef40)
        x28 = var_88

if (*(x28 + 0x40) s>= 1)
    int64_t i_1 = 0
    int32_t x26_2 = 0
    int32_t x24_2 = 0
    
    do
        int64_t x23_2 = *(x28 + 0x38)
        int64_t* x20_3 = x23_2 + i_1 * 0x28
        int32_t x8_18 = x20_3[2].d
        uint64_t x8_17
        int32_t* x21_4
        
        if (x8_18 == 0)
            char** x21_5 = *(arg2 + 0x20) + muls.dp.d(x26_2, 0x18)
            result, v0_2 = DefDeepCopyString(x21_5, *x20_3)
            v0_2.d = x24_2
            v0_2:4.d = x24_2
            v0_2:8.d = x24_2
            v0_2:0xc.d = x24_2
            *(x21_5 + 8) = v0_2
            x26_2 += 1
            x21_4 = x23_2 + i_1 * 0x28 + 0x20
            x8_17 = zx.q(*x21_4)
            
            if (x8_17.d s>= 1)
            label_f67f10:
                int64_t x20_4 = 0
                
                do
                    uint64_t x10_2 = *V20
                    DefMayaFlanimVertex* x1_6 = *(x23_2 + i_1 * 0x28 + 0x18) + (x20_4 << 4)
                    int64_t x8_40 = *(arg2 + 0x30)
                    
                    if (*(x1_6 + 8) s>= 1)
                        int64_t x11_3 = 0
                        uint32_t x14_2 = *gRgbaIWhite
                        int64_t x16_1 = data_23eef38
                        int64_t j = 0
                        int64_t x17_3 = 0
                        uint64_t x15_2 = *V21
                        int32_t x13_2 = 0
                        uint64_t x0_16 = x10_2
                        uint64_t x2_5 = x10_2
                        
                        do
                            void* x3_2 = *x1_6
                            uint64_t* x4_1 = x3_2 + x11_3
                            v0_2.d = *x4_1
                            
                            if (v0_2.d f== float.s(0x4640e400))
                                *x4_1 = x2_5
                            else
                                x2_5 = *x4_1
                            
                            void* x4_2 = x3_2 + x11_3
                            v0_2.d = *(x4_2 + 8)
                            
                            if (v0_2.d f== float.s(0x4640e400))
                                *(x4_2 + 8) = x0_16
                            else
                                x0_16 = *(x4_2 + 8)
                            
                            void* x4_3 = x3_2 + x11_3
                            v0_2.d = *(x4_3 + 0x10)
                            
                            if (v0_2.d f== float.s(0x4640e400))
                                *(x4_3 + 0x10) = x15_2
                            else
                                x15_2 = *(x4_3 + 0x10)
                            
                            void* x4_4 = x3_2 + x11_3
                            v0_2.d = *(x4_4 + 0x18)
                            void* x4_5
                            
                            if (not(v0_2.d f== float.s(0x4640e400)))
                                x10_2 = *(x4_4 + 0x18)
                                x4_5 = x3_2 + x11_3
                                
                                if (zx.d(*(x4_5 + 0x20)) != 0 || zx.d(*(x4_5 + 0x21)) != 0)
                                    goto label_f6806c
                                
                                goto label_f68058
                            
                            *(x4_4 + 0x18) = x10_2
                            x4_5 = x3_2 + x11_3
                            void* x4_6
                            
                            if (zx.d(*(x4_5 + 0x20)) == 0 && zx.d(*(x4_5 + 0x21)) == 0)
                            label_f68058:
                                void* x5_4 = x3_2 + x11_3
                                
                                if (zx.d(*(x5_4 + 0x22)) != 0 || zx.d(*(x5_4 + 0x23)) != 0)
                                    goto label_f6806c
                                
                                *(x3_2 + x11_3 + 0x20) = x14_2
                                x4_6 = x3_2 + x11_3
                                
                                if (zx.d(*(x4_6 + 0x24)) == 0 && zx.d(*(x4_6 + 0x25)) == 0)
                                    goto label_f68084
                                
                                goto label_f680cc
                            
                        label_f6806c:
                            x14_2 = *(x4_5 + 0x20)
                            x4_6 = x3_2 + x11_3
                            int64_t x3_1
                            void* x4_8
                            
                            if (zx.d(*(x4_6 + 0x24)) != 0 || zx.d(*(x4_6 + 0x25)) != 0)
                            label_f680cc:
                                x13_2 = *(x4_6 + 0x24)
                                x4_8 = x3_2 + x11_3
                                x3_1 = *(x4_8 + 0x28)
                                
                                if (x3_1 == x16_1)
                                    x3_1 = x17_3
                                    *(x4_8 + 0x28) = x17_3
                            else
                            label_f68084:
                                void* x5_8 = x3_2 + x11_3
                                
                                if (zx.d(*(x5_8 + 0x26)) != 0 || zx.d(*(x5_8 + 0x27)) != 0xff)
                                    goto label_f680cc
                                
                                *(x3_2 + x11_3 + 0x24) = x13_2
                                x4_8 = x3_2 + x11_3
                                x3_1 = *(x4_8 + 0x28)
                                
                                if (x3_1 == x16_1)
                                    x3_1 = x17_3
                                    *(x4_8 + 0x28) = x17_3
                            j += 1
                            x11_3 += 0x38
                            x17_3 = x3_1
                        while (j s< sx.q(*(x1_6 + 8)))
                    
                    result, v0_2 =
                        MayaDefCompressVertexList(arg2, x1_6, x8_40 + (sx.q(x24_2 + x20_4.d) << 7))
                    x8_17 = sx.q(*x21_4)
                    x20_4 += 1
                while (x20_4 s< x8_17)
        else
            if (x8_18 s>= 1)
                int64_t fp_1 = 0
                int64_t j_1 = 0
                int64_t x22_3 = muls.dp.d(x26_2, 0x18) + 0xc
                
                do
                    int32_t* x27_2 = *(arg2 + 0x20) + x22_3
                    result, v0_2 = DefDeepCopyString(x27_2 - 0xc, *x20_3)
                    j_1 += 1
                    x22_3 += 0x18
                    x27_2[-1] = *(*(x23_2 + i_1 * 0x28 + 8) + fp_1) + x24_2
                    *x27_2 = *(*(x23_2 + i_1 * 0x28 + 8) + fp_1 + 4) + x24_2
                    x27_2[1] = *(*(x23_2 + i_1 * 0x28 + 8) + fp_1 + 8) + x24_2
                    int32_t x8_34 = *(*(x23_2 + i_1 * 0x28 + 8) + fp_1 + 0xc)
                    fp_1 += 0x10
                    x27_2[2] = x8_34 + x24_2
                while (j_1 s< sx.q(x20_3[2].d))
                
                x26_2 += j_1.d
                x28 = var_88
            
            x21_4 = x23_2 + i_1 * 0x28 + 0x20
            x8_17 = zx.q(*x21_4)
            
            if (x8_17.d s>= 1)
                goto label_f67f10
        i_1 += 1
        x24_2 += x8_17.d
    while (i_1 s< sx.q(*(x28 + 0x40)))

if (*(arg2 + 0x48) == 0)
    result = XFree(*(arg2 + 0x40))
    *(arg2 + 0x40) = 0

return result
