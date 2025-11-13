// 函数: _Z22UI2SubBoundaryItemMoreR9AttribMapPPK8UI2StatePii
// 地址: 0x10120c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v11
int64_t var_80 = entry_v11.q
int128_t entry_v10
int64_t var_78 = entry_v10.q
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
int32_t x23 = arg4
int64_t* x0_1 = AttribMapGetDef(*gUI2AttribTable, arg1, *macro_ptr_UI2StateOverrides, 0x69)
int32_t* result

if (x0_1 != 0)
    uint64_t x28_1 = zx.q(x0_1[1].d)
    int64_t* x24_1 = x0_1
    
    if (x28_1.d s>= 1)
        uint64_t x9_1 = zx.q(x23)
        int32_t var_1ac_1 = x23
        int64_t* var_1b8_1 = x24_1
        bool cond:0_1
        
        do
            int64_t x19_2 = *x24_1
            uint64_t x9_2 = x28_1 - 1
            
            if ((AttribMapTagExists(x19_2 + x9_2 * 0x30 + 0x18, 0x76) & 1) != 0)
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                XString::XString()
                int64_t* x25_2 = x19_2 + x9_2 * 0x30
                uint64_t x20_16 = *x25_2
                int64_t x0_35 = strchr(x20_16, 0x2e)
                int64_t x19_3 = x0_35
                
                if (x0_35 == 0)
                    goto label_1012778
                
                char var_88
                XString::XString(&var_88, x20_16)
                void var_108
                XString::operator=(&var_108)
                XString::~XString()
                int64_t x0_39 = strchr(x19_3 + 1, 0x2e)
                int32_t x25_3
                
                if (x0_39 != 0)
                    XString::XString(&var_88, x19_3 + 1)
                    void var_100
                    XString::operator=(&var_100)
                    XString::~XString()
                    int64_t x0_43 = strchr(x0_39 + 1, 0x2e)
                    
                    if (x0_43 == 0)
                        x19_3 = 2
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_39 + 1)
                    void var_f8
                    XString::operator=(&var_f8)
                    XString::~XString()
                    int64_t x0_47 = strchr(x0_43 + 1, 0x2e)
                    
                    if (x0_47 == 0)
                        x19_3 = 3
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_43 + 1)
                    void var_f0
                    XString::operator=(&var_f0)
                    XString::~XString()
                    int64_t x0_51 = strchr(x0_47 + 1, 0x2e)
                    
                    if (x0_51 == 0)
                        x19_3 = 4
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_47 + 1)
                    void var_e8
                    XString::operator=(&var_e8)
                    XString::~XString()
                    int64_t x0_55 = strchr(x0_51 + 1, 0x2e)
                    
                    if (x0_55 == 0)
                        x19_3 = 5
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_51 + 1)
                    void var_e0
                    XString::operator=(&var_e0)
                    XString::~XString()
                    int64_t x0_59 = strchr(x0_55 + 1, 0x2e)
                    
                    if (x0_59 == 0)
                        x19_3 = 6
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_55 + 1)
                    void var_d8
                    XString::operator=(&var_d8)
                    XString::~XString()
                    int64_t x0_63 = strchr(x0_59 + 1, 0x2e)
                    
                    if (x0_63 == 0)
                        x19_3 = 7
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_59 + 1)
                    void var_d0
                    XString::operator=(&var_d0)
                    XString::~XString()
                    int64_t x0_67 = strchr(x0_63 + 1, 0x2e)
                    
                    if (x0_67 == 0)
                        x19_3 = 8
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_63 + 1)
                    void var_c8
                    XString::operator=(&var_c8)
                    XString::~XString()
                    int64_t x0_71 = strchr(x0_67 + 1, 0x2e)
                    
                    if (x0_71 == 0)
                        x19_3 = 9
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_67 + 1)
                    void var_c0
                    XString::operator=(&var_c0)
                    XString::~XString()
                    int64_t x0_75 = strchr(x0_71 + 1, 0x2e)
                    
                    if (x0_75 == 0)
                        x19_3 = 0xa
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_71 + 1)
                    void var_b8
                    XString::operator=(&var_b8)
                    XString::~XString()
                    int64_t x0_79 = strchr(x0_75 + 1, 0x2e)
                    
                    if (x0_79 == 0)
                        x19_3 = 0xb
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_75 + 1)
                    void var_b0
                    XString::operator=(&var_b0)
                    XString::~XString()
                    int64_t x0_83 = strchr(x0_79 + 1, 0x2e)
                    
                    if (x0_83 == 0)
                        x19_3 = 0xc
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_79 + 1)
                    void var_a8
                    XString::operator=(&var_a8)
                    XString::~XString()
                    int64_t x0_87 = strchr(x0_83 + 1, 0x2e)
                    
                    if (x0_87 == 0)
                        x19_3 = 0xd
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_83 + 1)
                    void var_a0
                    XString::operator=(&var_a0)
                    XString::~XString()
                    int64_t x0_91 = strchr(x0_87 + 1, 0x2e)
                    
                    if (x0_91 == 0)
                        x19_3 = 0xe
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_87 + 1)
                    void var_98
                    XString::operator=(&var_98)
                    XString::~XString()
                    
                    if (strchr(x0_91 + 1, 0x2e) == 0)
                        x19_3 = 0xf
                        goto label_1012778
                    
                    XString::XString(&var_88, x0_91 + 1)
                    void var_90
                    XString::operator=(&var_90)
                    XString::~XString()
                    x25_3 = 0x10
                    goto label_1012784
                
                x19_3 = 1
            label_1012778:
                XString::operator=(&var_108 + (x19_3 << 3))
                int32_t x19_1
                AttribMap* var_1a8_1
                uint64_t var_198_1
                
                if (x19_3.d != 0)
                    x25_3 = x19_3.d + 1
                label_1012784:
                    
                    if (x23 s>= 1)
                        int64_t x24_2 = 0
                        int32_t x8_2 = 0
                        uint64_t x23_1 = zx.q(x25_3)
                        var_1a8_1 = x19_2 + x9_2 * 0x30 + 0x18
                        var_198_1 = x28_1
                        
                        while (true)
                            if (arg3[x24_2] s<= 0)
                            label_10127ac:
                                x24_2 += 1
                                
                                if (x24_2 == x9_1)
                                    break
                            else
                                int64_t fp_2 = 0
                                int32_t x28_2 = 0
                                
                                while (true)
                                    int64_t x26_1 = 0
                                    int32_t x27_1 = 1
                                    void* x19_18 = &var_108
                                    char* x20_17 = *(arg2[x24_2][fp_2 * 6] + 0x10)
                                    
                                    do
                                        if ((operator==(x19_18, x20_17) & 1) != 0)
                                            break
                                        
                                        x26_1 += 1
                                        x27_1 = x26_1 u< x23_1 ? 1 : 0
                                        x19_18 += 8
                                    while (x23_1 != x26_1)
                                    
                                    if ((x27_1 & 1) != 0)
                                        x28_2 += 1
                                        
                                        if (x28_2 == x25_3)
                                            break
                                    
                                    fp_2 += 1
                                    
                                    if (fp_2 s>= sx.q(arg3[x24_2]))
                                        goto label_10127ac
                                
                                x24_2 += 1
                                x8_2 = 1
                                
                                if (x24_2 == x9_1)
                                    goto label_10128e0
                        
                        if ((x8_2 & 1) == 0)
                            goto label_1012900
                        
                        goto label_10128e0
                    
                    x19_1 = 0
                else if (x23 s< 1)
                    x19_1 = 0
                else
                    int64_t x20_18 = 0
                    int32_t x23_2 = 0
                    
                    do
                        int64_t x24_3 = sx.q(arg3[x20_18])
                        
                        if (x24_3.d s>= 1)
                            int64_t* x26_2 = arg2[x20_18]
                            char* s2 = *x25_2
                            int64_t x27_2 = 0
                            
                            do
                                if (strcasecmp(*(*x26_2 + 0x10), s2) == 0)
                                    x23_2 = 1
                                    break
                                
                                x27_2 += 1
                                x26_2 = &x26_2[6]
                            while (x27_2 s< x24_3)
                        
                        x20_18 += 1
                    while (x20_18 != x9_1)
                    
                    var_1a8_1 = x19_2 + x9_2 * 0x30 + 0x18
                    var_198_1 = x28_1
                    
                    if ((x23_2 & 1) != 0)
                    label_10128e0:
                        int32_t* x0_104 =
                            AttribMapGetDef(*gUI2AttribTable, var_1a8_1, *macro_ptr_RectF, 0x76)
                        entry_v11.d = *x0_104
                        entry_v10.d = x0_104[1]
                        entry_v9.d = x0_104[2]
                        entry_v8.d = x0_104[3]
                        x19_1 = 1
                    else
                    label_1012900:
                        x19_1 = 0
                    
                    x23 = var_1ac_1
                    x24_1 = var_1b8_1
                    x28_1 = var_198_1
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                result = XString::~XString()
                
                if ((x19_1 & 1) != 0)
                    goto label_1012968
            
            cond:0_1 = x28_1 s<= 1
            x28_1 = x9_2
        while (not(cond:0_1))

result = AttribMapGetDef(*gUI2AttribTable, arg1, *macro_ptr_RectF, 0x76)
entry_v11.d = *result
entry_v10.d = result[1]
entry_v9.d = result[2]
entry_v8.d = result[3]
label_1012968:
entry_v9.q = var_70
entry_v8.q = var_68
entry_v11.q = var_80
entry_v10.q = var_78
return result
