// 函数: _ZN5Botan6argon2EPhmPKcmPKhmS4_mS4_mhmmm
// 地址: 0xca88d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x23
uint64_t var_28 = entry_x23
uint64_t entry_x22
uint64_t var_20 = entry_x22
uint64_t entry_x21
uint64_t var_18 = entry_x21
uint32_t x8 = zx.d(arg11)
uint64_t var_110
uint64_t var_100
void* var_f8
int64_t var_e8
int64_t* result
char var_d0
void* var_c0
char var_b8
void* var_a8
char var_a0
void* var_90
char var_80
void* var_70
int64_t* var_68

if (x8 u>= 3)
label_ca9ac4:
    Botan::throw_invalid_argument("Unknown Argon2 mode parameter", "argon2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
else if (arg2 u<= 3)
    Botan::throw_invalid_argument("Invalid Argon2 output length", "argon2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
else if (arg12 - 1 u>= 0x80)
    Botan::throw_invalid_argument("Invalid Argon2 threads parameter", "argon2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
else if (arg13 u< arg12 << 3 || arg13 u> &data_800000)
    Botan::throw_invalid_argument("Invalid Argon2 M parameter", "argon2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
else if (arg14 == 0)
    Botan::throw_invalid_argument("Invalid Argon2 t parameter", "argon2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
else
    var_80 = 0xe
    int32_t var_7f
    __builtin_strncpy(&var_7f, "BLAKE2b", 8)
    var_a0.w = 0
    Botan::HashFunction::create_or_throw(&var_80, &var_a0)
    
    if ((zx.d(var_a0) & 1) != 0)
        operator delete(var_90)
    
    if ((zx.d(var_80) & 1) != 0)
        operator delete(var_70)
    
    var_80.d = arg12.d
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = arg2.d
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = arg13.d
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = arg14.d
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = 0x13
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = x8
    (*(*result + 0x18))(result, &var_80, 4)
    var_80.d = arg4.d
    (*(*result + 0x18))(result, &var_80, 4)
    (*(*result + 0x18))(result, arg3, arg4)
    var_80.d = arg6.d
    (*(*result + 0x18))(result, &var_80, 4)
    (*(*result + 0x18))(result, arg5, arg6)
    var_80.d = arg8.d
    (*(*result + 0x18))(result, &var_80, 4)
    (*(*result + 0x18))(result, arg7, arg8)
    entry_x22 = arg10
    var_80.d = entry_x22.d
    (*(*result + 0x18))(result, &var_80, 4)
    (*(*result + 0x18))(result, arg9, entry_x22)
    Botan::Buffered_Computation::final()
    __builtin_memset(&var_110, 0, 0x18)
    uint64_t x8_40 = arg13 - zx.q(arg13.d u% (arg12.d << 2))
    uint64_t x24_2 = (x8_40 & 0x3fffffffffffff) << 7
    uint64_t var_108_1
    uint64_t x19_2
    
    if (x24_2 == 0)
        entry_x23 = 0
        x19_2 = 0
    else
        uint64_t x0_19 = Botan::allocate_memory(x24_2, 8)
        uint64_t x2_4 = x24_2 << 3
        x19_2 = x0_19 + x2_4
        entry_x23 = x0_19
        var_110 = x0_19
        var_100 = x19_2
        memset(x0_19, 0, x2_4)
        var_108_1 = x19_2
    
    if ((x19_2 - entry_x23) s>> 3 u< arg12 << 8)
        Botan::assertion_failure("B.size() >= threads*256", &data_793a18, "init_blocks", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2750)
    else
        int128_t* x0_20 = Botan::allocate_memory(0x400, 1)
        memset(x0_20, 0, 0x400)
        uint64_t x0_22 = (**result)(result)
        entry_x23 = x0_22
        __builtin_memset(&var_80, 0, 0x18)
        
        if (x0_22 == 0)
            goto label_ca8c40
        
        if ((entry_x23 & 0xffffffff80000000) == 0)
            int64_t x0_24 = Botan::allocate_memory(entry_x23, 1)
            void* x19_3 = x0_24 + entry_x23
            var_80.q = x0_24
            var_70 = x19_3
            memset(x0_24, 0, entry_x23)
            char var_78
            var_78.q = x19_3
        label_ca8c40:
            int64_t x26_2 = 0
            uint64_t x8_46 = zx.q(x8)
            uint64_t x28_2 = x8_40 u/ arg12
            
            while (true)
                uint64_t x20_1 = var_110
                int64_t x19_4 = (x26_2 * x28_2) << 7
                
                if (x19_4 + 0x100 u> (var_108_1 - x20_1) s>> 3)
                    Botan::assertion_failure("B.size() >= 128*(B_off+2)", &data_793a18, 
                        "init_blocks", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2759)
                label_ca9abc:
                    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    break
                
                sub_ef0d04(&var_80, x0_20, 0x400, result, &var_f8, 0, x26_2.d)
                int64_t i = 8
                *(x20_1 + (x19_4 << 3)) = *x0_20
                int64_t x9_8 = 1
                
                do
                    int64_t x11_1 = *(x0_20 + i)
                    i += 8
                    int64_t x12_1 = x9_8 + x19_4
                    x9_8 += 1
                    *(var_110 + (x12_1 << 3)) = x11_1
                while (i != 0x400)
                
                sub_ef0d04(&var_80, x0_20, 0x400, result, &var_f8, 1, x26_2.d)
                int64_t i_1 = 0
                int64_t x9_9 = 0
                
                do
                    int64_t x11_2 = *(x0_20 + i_1)
                    i_1 += 8
                    int64_t x13_1 = x19_4 + 0x80 + x9_9
                    x9_9 += 1
                    *(var_110 + (x13_1 << 3)) = x11_2
                while (i_1 != 0x400)
                
                x26_2 += 1
                
                if (x26_2 == arg12)
                    void* x0_27 = var_80.q
                    
                    if (x0_27 != 0)
                        var_78.q = x0_27
                        Botan::deallocate_memory(x0_27, var_70 - x0_27, 1)
                    
                    Botan::deallocate_memory(x0_20, 0x400, 1)
                    __builtin_memset(&var_a0, 0, 0x18)
                    void* x0_29 = Botan::allocate_memory(0x80, 8)
                    uint64_t x20_2 = x28_2 u>> 2
                    var_a0.q = x0_29
                    var_90 = x0_29 + 0x400
                    memset(x0_29, 0, 0x400)
                    int64_t x9_10 = 0
                    uint64_t x8_52 = x20_2 * 3
                    void* var_98_1 = x0_29 + 0x400
                label_ca8da8:
                    int64_t x10_3 = 0
                label_ca8ddc:
                    uint64_t x13_2 = x10_3 * x20_2
                    int64_t x11_3 = x10_3 | x9_10
                    uint64_t x25_3 = zx.q(x11_3 == 0 ? 1 : 0) << 1
                    int64_t x11_6
                    
                    if (x9_10 == 0)
                        x11_6 = 0
                    else
                        x11_6 = ((x10_3 + 1) & 3) * x20_2
                    
                    int32_t fp_1 = (x8 == 1 ? 1 : 0)
                        | ((x8 == 2 ? 1 : 0) & (x9_10 == 0 ? 1 : 0) & (x10_3 u< 2 ? 1 : 0))
                    int64_t x26_3 = 0
                    uint64_t x9_17
                    
                    x9_17 = x9_10 == 0 ? x13_2 : x8_52
                    
                    int64_t x8_60 = x9_17 + x11_6
                    uint64_t var_180_1 = x25_3
                    int32_t var_184_1 = fp_1
                    
                    while (true)
                        void* x19_9
                        void* x24_4
                        
                        if (fp_1 != 0)
                            void* x0_31 = Botan::allocate_memory(0x80, 8)
                            var_80.q = x0_31
                            var_70 = x0_31 + 0x400
                            memset(x0_31, 0, 0x400)
                            var_78.q = x0_31 + 0x400
                            sub_ef0e90(&var_a0, &var_80, x9_10, x26_3, x10_3, x8_40, arg14, x8_46, 
                                1)
                            
                            if (x25_3 u< x20_2)
                                int64_t x19_7 = x26_3 * x28_2
                                int64_t x8_63 = x19_7 + x13_2
                                
                                if (x11_3 == 0)
                                    entry_x22 = x9_17 + 1
                                    entry_x23 = 0
                                    int64_t x25_4 = 2
                                    entry_x21 = 1
                                    int64_t x8_99
                                    
                                    do
                                        int64_t x24_5 = (entry_x23 + 2) & 0x7f
                                        uint64_t fp_2
                                        
                                        if (((entry_x23 + 2) | x10_3) == 0)
                                            fp_2 = x28_2
                                        else
                                            fp_2 = 0
                                        
                                        if (entry_x23 != -2 && x24_5 == 0)
                                            entry_x21 += 1
                                            sub_ef0e90(&var_a0, &var_80, x9_10, x26_3, x10_3, 
                                                x8_40, arg14, x8_46, entry_x21)
                                        
                                        uint64_t x8_93 = zx.q(*(x0_31 + (x24_5 << 3)))
                                        int64_t x2_11 = x25_4 + x8_63
                                        int64_t x8_97 = x8_60 + entry_x23
                                            - ((entry_x22 * ((x8_93 * x8_93) u>> 0x20)) u>> 0x20)
                                        sub_ef17c0(&var_a0, &var_110, x2_11, x2_11 + fp_2 - 1, 
                                            zx.q(x8_97.d - (x8_97 u/ x28_2).d * x28_2.d + x19_7.d))
                                        x8_99 = entry_x23 + 3
                                        x25_4 += 1
                                        entry_x23 += 1
                                        entry_x22 += 1
                                    while (x8_99 != x20_2)
                                else if (x10_3 != 0)
                                    int64_t x19_8 = 0
                                    entry_x21 = 1
                                    
                                    do
                                        entry_x22 = x19_8 & 0x7f
                                        
                                        if (x19_8 != 0 && entry_x22 == 0)
                                            entry_x21 += 1
                                            sub_ef0e90(&var_a0, &var_80, x9_10, x26_3, x10_3, 
                                                x8_40, arg14, x8_46, entry_x21)
                                        
                                        int64_t x8_66 = *(x0_31 + (entry_x22 << 3))
                                        int64_t x2_7 = x19_8 + x8_63
                                        int64_t x9_20 = (x8_66 u>> 0x20) u% arg12
                                        int64_t x11_8
                                        
                                        x11_8 = x9_20 == x26_3 ? x19_8 : 0
                                        
                                        int64_t x10_9 = x11_8 + x9_17 - (zx.q(x19_8 == 0 ? 1 : 0)
                                            | zx.q(x9_20 == x26_3 ? 1 : 0))
                                        int64_t x8_71 = x10_9 + x11_6 + (-1
                                            ^ (x10_9 * (mulu.dp.d(x8_66.d, x8_66.d) u>> 0x20))
                                            u>> 0x20)
                                        sub_ef17c0(&var_a0, &var_110, x2_7, x2_7 - 1, 
                                            zx.q(x8_71.d - (x8_71 u/ x28_2).d * x28_2.d
                                                + x9_20.d * x28_2.d))
                                        x19_8 += 1
                                    while (x19_8 != x20_2)
                                else if (x9_10 == 0)
                                    int64_t x19_11 = 0
                                    entry_x21 = 1
                                    
                                    do
                                        entry_x22 = x19_11 == 0 ? x28_2 : 0
                                        
                                        entry_x23 = x19_11 & 0x7f
                                        
                                        if (x19_11 != 0 && entry_x23 == 0)
                                            entry_x21 += 1
                                            sub_ef0e90(&var_a0, &var_80, 0, x26_3, 0, x8_40, arg14, 
                                                x8_46, entry_x21)
                                        
                                        int64_t x2_17 = x19_11 + x8_63
                                        int64_t x8_128 = *(x0_31 + (entry_x23 << 3))
                                        int64_t x10_38 = (x8_128 u>> 0x20) u% arg12
                                        int64_t x9_61 = x19_11 + x13_2 - (zx.q(x19_11 == 0 ? 1 : 0)
                                            | zx.q(x10_38 == x26_3 ? 1 : 0))
                                        int64_t x8_133 = x9_61 + x11_6 + (-1
                                            ^ (x9_61 * (mulu.dp.d(x8_128.d, x8_128.d) u>> 0x20))
                                            u>> 0x20)
                                        sub_ef17c0(&var_a0, &var_110, x2_17, x2_17 + entry_x22 - 1, 
                                            zx.q(x8_133.d - (x8_133 u/ x28_2).d * x28_2.d
                                                + x10_38.d * x28_2.d))
                                        x19_11 += 1
                                    while (x19_11 != x20_2)
                                else
                                    int64_t x19_10 = 0
                                    entry_x22 = 1
                                    
                                    do
                                        entry_x21 = x19_10 == 0 ? x28_2 : 0
                                        
                                        entry_x23 = x19_10 & 0x7f
                                        
                                        if (x19_10 != 0 && entry_x23 == 0)
                                            entry_x22 += 1
                                            sub_ef0e90(&var_a0, &var_80, x9_10, x26_3, 0, x8_40, 
                                                arg14, x8_46, entry_x22)
                                        
                                        int64_t x2_14 = x19_10 + x8_63
                                        int64_t x8_112 = *(x0_31 + (entry_x23 << 3))
                                        int64_t x9_50 = (x8_112 u>> 0x20) u% arg12
                                        int64_t x12_12
                                        
                                        x12_12 = x9_50 == x26_3 ? x19_10 : 0
                                        
                                        int64_t x10_28 = x12_12 + x8_52 - (zx.q(x19_10 == 0 ? 1 : 0)
                                            | zx.q(x9_50 == x26_3 ? 1 : 0))
                                        int64_t x8_117 = x10_28 + x11_6 + (-1
                                            ^ (x10_28 * (mulu.dp.d(x8_112.d, x8_112.d) u>> 0x20))
                                            u>> 0x20)
                                        sub_ef17c0(&var_a0, &var_110, x2_14, x2_14 + entry_x21 - 1, 
                                            zx.q(x8_117.d - (x8_117 u/ x28_2).d * x28_2.d
                                                + x9_50.d * x28_2.d))
                                        x19_10 += 1
                                    while (x19_10 != x20_2)
                            
                            Botan::deallocate_memory(x0_31, 0x80, 8)
                            x25_3 = var_180_1
                            fp_1 = var_184_1
                        else if (x25_3 u< x20_2)
                            x19_9 = x26_3 * x28_2
                            x24_4 = x19_9 + x13_2
                            
                            if (x11_3 == 0)
                                entry_x21 = x9_17 + 1
                                entry_x22 = 0
                                entry_x23 = 2
                                
                                while (true)
                                    uint64_t x8_84 = var_110
                                    void* x2_10 = entry_x23 + x24_4
                                    uint64_t x9_26
                                    
                                    if (((entry_x22 + 2) | x10_3) == 0)
                                        x9_26 = x28_2
                                    else
                                        x9_26 = 0
                                    
                                    int64_t x9_28 = (x2_10 + x9_26 - 1) << 7
                                    
                                    if (x9_28 u>= (var_108_1 - x8_84) s>> 3)
                                        break
                                    
                                    uint64_t x8_85 = zx.q(*(x8_84 + (x9_28 << 3)))
                                    int64_t x8_89 = x8_60 + entry_x22
                                        - ((entry_x21 * ((x8_85 * x8_85) u>> 0x20)) u>> 0x20)
                                    sub_ef17c0(&var_a0, &var_110, x2_10, x2_10 + x9_26 - 1, 
                                        zx.q(x8_89.d - (x8_89 u/ x28_2).d * x28_2.d + x19_9.d))
                                    int64_t x8_91 = entry_x22 + 3
                                    entry_x23 += 1
                                    entry_x22 += 1
                                    entry_x21 += 1
                                    
                                    if (x8_91 == x20_2)
                                        goto label_ca8e74
                            else if (x10_3 != 0)
                                x19_9 = nullptr
                                
                                while (true)
                                    uint64_t x8_76 = var_110
                                    void* x2_9 = x19_9 + x24_4
                                    int64_t x9_21 = (x2_9 - 1) << 7
                                    
                                    if (x9_21 u>= (var_108_1 - x8_76) s>> 3)
                                        break
                                    
                                    int64_t x8_77 = *(x8_76 + (x9_21 << 3))
                                    int64_t x9_23 = (x8_77 u>> 0x20) u% arg12
                                    void* x11_12
                                    
                                    x11_12 = x9_23 == x26_3 ? x19_9 : nullptr
                                    
                                    void* x10_17 = x11_12 + x9_17
                                        - (zx.q(x19_9 == 0 ? 1 : 0) | zx.q(x9_23 == x26_3 ? 1 : 0))
                                    void* x8_82 = x10_17 + x11_6 + (-1
                                        ^ (x10_17 * (mulu.dp.d(x8_77.d, x8_77.d) u>> 0x20))
                                        u>> 0x20)
                                    sub_ef17c0(&var_a0, &var_110, x2_9, x2_9 - 1, 
                                        zx.q(x8_82.d - (x8_82 u/ x28_2).d * x28_2.d
                                            + x9_23.d * x28_2.d))
                                    x19_9 += 1
                                    
                                    if (x19_9 == x20_2)
                                        goto label_ca8e74
                            else if (x9_10 == 0)
                                x19_9 = nullptr
                                
                                while (true)
                                    uint64_t x8_119 = var_110
                                    void* x2_16 = x19_9 + x24_4
                                    uint64_t x9_51
                                    
                                    x9_51 = x19_9 == 0 ? x28_2 : 0
                                    
                                    int64_t x9_53 = (x2_16 + x9_51 - 1) << 7
                                    
                                    if (x9_53 u>= (var_108_1 - x8_119) s>> 3)
                                        break
                                    
                                    int64_t x8_120 = *(x8_119 + (x9_53 << 3))
                                    int64_t x11_23 = (x8_120 u>> 0x20) u% arg12
                                    void* x9_56 = x19_9 + x13_2 - (zx.q(x19_9 == 0 ? 1 : 0)
                                        | zx.q(x11_23 == x26_3 ? 1 : 0))
                                    void* x8_125 = x9_56 + x11_6 + (-1
                                        ^ (x9_56 * (mulu.dp.d(x8_120.d, x8_120.d) u>> 0x20))
                                        u>> 0x20)
                                    sub_ef17c0(&var_a0, &var_110, x2_16, x2_16 + x9_51 - 1, 
                                        zx.q(x8_125.d - (x8_125 u/ x28_2).d * x28_2.d
                                            + x11_23.d * x28_2.d))
                                    x19_9 += 1
                                    
                                    if (x19_9 == x20_2)
                                        goto label_ca8e74
                            else
                                x19_9 = nullptr
                                
                                while (true)
                                    uint64_t x8_102 = var_110
                                    void* x2_13 = x19_9 + x24_4
                                    uint64_t x9_40
                                    
                                    x9_40 = x19_9 == 0 ? x28_2 : 0
                                    
                                    int64_t x9_42 = (x2_13 + x9_40 - 1) << 7
                                    
                                    if (x9_42 u>= (var_108_1 - x8_102) s>> 3)
                                        break
                                    
                                    int64_t x8_103 = *(x8_102 + (x9_42 << 3))
                                    int64_t x10_25 = (x8_103 u>> 0x20) u% arg12
                                    void* x12_9
                                    
                                    x12_9 = x10_25 == x26_3 ? x19_9 : nullptr
                                    
                                    void* x9_45 = x12_9 + x8_52 - (zx.q(x19_9 == 0 ? 1 : 0)
                                        | zx.q(x10_25 == x26_3 ? 1 : 0))
                                    void* x8_108 = x9_45 + x11_6 + (-1
                                        ^ (x9_45 * (mulu.dp.d(x8_103.d, x8_103.d) u>> 0x20))
                                        u>> 0x20)
                                    sub_ef17c0(&var_a0, &var_110, x2_13, x2_13 + x9_40 - 1, 
                                        zx.q(x8_108.d - (x8_108 u/ x28_2).d * x28_2.d
                                            + x10_25.d * x28_2.d))
                                    x19_9 += 1
                                    
                                    if (x19_9 == x20_2)
                                        goto label_ca8e74
                            
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_ca98a0:
                            std::__ndk1::to_string(x24_4)
                            int128_t* x0_76
                            int128_t v0_5
                            x0_76, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                                &var_b8, nullptr)
                            void* x8_174 = x0_76[1].q
                            var_a0.o = *x0_76
                            __builtin_memset(x0_76, 0, 0x18)
                            int128_t* x0_78
                            int128_t v0_6
                            x0_78, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                &var_a0)
                            void* x8_175 = x0_78[1].q
                            var_80.o = *x0_78
                            __builtin_memset(x0_78, 0, 0x18)
                            var_d0.w = 0
                            Botan::HashFunction::create_or_throw(&var_80, &var_d0)
                            
                            if ((zx.d(var_d0) & 1) == 0)
                                if ((zx.d(var_80) & 1) != 0)
                                    goto label_ca9a50
                                
                                goto label_ca9920
                            
                            operator delete(var_c0)
                            
                            if ((zx.d(var_80) & 1) != 0)
                            label_ca9a50:
                                operator delete(x8_175)
                                
                                if ((zx.d(var_a0) & 1) == 0)
                                    goto label_ca9928
                                
                                goto label_ca9a60
                            
                        label_ca9920:
                            
                            if ((zx.d(var_a0) & 1) != 0)
                            label_ca9a60:
                                operator delete(x8_174)
                                
                                if ((zx.d(var_b8) & 1) != 0)
                                    operator delete(var_a8)
                            else
                            label_ca9928:
                                
                                if ((zx.d(var_b8) & 1) != 0)
                                    operator delete(var_a8)
                            
                            int64_t* var_d8
                            (*(*var_d8 + 0x18))(var_d8, entry_x23, 0x40)
                            (*(*var_d8 + 0x20))(var_d8, x19_9)
                            int64_t var_d8_1 = 0
                            
                            if (var_d8 != 0)
                                (*(*var_d8 + 0x10))()
                            
                        label_ca997c:
                            int64_t var_68_2 = 0
                            
                            if (var_68 != 0)
                                (*(*var_68 + 0x10))()
                            
                            Botan::deallocate_memory(entry_x23, 0x40, 1)
                            
                            if (entry_x22 != 0)
                            label_ca99b0:
                                Botan::deallocate_memory(entry_x22, 0x400, 1)
                            
                            if (entry_x21 != 0)
                                Botan::deallocate_memory(entry_x21, 0x80, 8)
                            
                            uint64_t x0_88 = var_110
                            
                            if (x0_88 != 0)
                                uint64_t var_108_2 = x0_88
                                Botan::deallocate_memory(x0_88, (var_100 - x0_88) s>> 3, 8)
                            
                            void* x0_89 = var_f8
                            
                            if (x0_89 != 0)
                                void* var_f0_1 = x0_89
                                Botan::deallocate_memory(x0_89, var_e8 - x0_89, 1)
                            
                            int64_t var_e0 = 0
                            
                            if (result == 0)
                                return result
                            
                            return (*(*result + 0x10))()
                        
                    label_ca8e74:
                        x26_3 += 1
                        
                        if (x26_3 == arg12)
                            x10_3 += 1
                            
                            if (x10_3 != 4)
                                goto label_ca8ddc
                            
                            x9_10 += 1
                            
                            if (x9_10 != arg14)
                                goto label_ca8da8
                            
                            void* x0_45 = var_a0.q
                            
                            if (x0_45 != 0)
                                void* var_98_2 = x0_45
                                Botan::deallocate_memory(x0_45, (var_90 - x0_45) s>> 3, 8)
                            
                            memset(arg1, 0, arg2)
                            uint64_t x0_47 = Botan::allocate_memory(0x80, 8)
                            entry_x21 = x0_47
                            int128_t v0_1
                            int128_t v1_1
                            int128_t v2_1
                            int128_t v3_1
                            v0_1, v1_1, v2_1, v3_1 = memset(x0_47, 0, 0x400)
                            uint64_t x9_64 = var_110
                            int64_t x8_137 = 0
                            
                            do
                                int64_t x11_28 = x28_2 + x8_137 * x28_2
                                int64_t x12_18 = x11_28 << 7
                                int64_t x11_30 = x12_18 - 0x80
                                uint64_t x13_8
                                
                                if (entry_x21 u< x9_64 + (x11_28 << 0xa))
                                    x13_8 = entry_x21
                                
                                if (entry_x21 u>= x9_64 + (x11_28 << 0xa)
                                        || entry_x21 + 0x400 u<= x9_64 + (x11_30 << 3))
                                    int64_t x12_19 = 0
                                    int64_t i_3 = 0x80
                                    int64_t i_2
                                    
                                    do
                                        int64_t x14_3 = x11_30 + x12_19
                                        int64_t x15_2 = x9_64 + (x14_3 << 3)
                                        int64_t x14_5 = entry_x21 + ((x14_3 & 0x7c) << 3)
                                        i_2 = i_3
                                        i_3 -= 4
                                        x12_19 += 4
                                        v1_1 = *(x14_5 + 0x10) ^ *(x15_2 + 0x10)
                                        *x14_5 ^= *x15_2
                                        *(x14_5 + 0x10) = v1_1
                                    while (i_2 != 4)
                                else
                                    do
                                        int64_t x14_1 = *(x9_64 + (x11_30 << 3))
                                        x11_30 += 1
                                        *x13_8 ^= x14_1
                                        x13_8 += 8
                                    while (x11_30 != x12_18)
                                
                                x8_137 += 1
                            while (x8_137 != arg12)
                            
                            uint64_t x0_48 = Botan::allocate_memory(0x400, 1)
                            entry_x22 = x0_48
                            memcpy(x0_48, entry_x21, 0x400)
                            
                            if (arg2 u> 0x40)
                                uint64_t x0_60 = Botan::allocate_memory(0x40, 1)
                                entry_x23 = x0_60
                                var_80 = 0x18
                                __builtin_memset(x0_60, 0, 0x40)
                                __builtin_strncpy(&var_7f, "BLAKE2b(512)", 0xd)
                                var_a0.w = 0
                                Botan::HashFunction::create_or_throw(&var_80, &var_a0)
                                
                                if ((zx.d(var_a0) & 1) != 0)
                                    operator delete(var_90)
                                
                                if ((zx.d(var_80) & 1) != 0)
                                    operator delete(var_70)
                                
                                var_80.d = arg2.d
                                (*(*var_68 + 0x18))(var_68, &var_80, 4)
                                (*(*var_68 + 0x18))(var_68, entry_x22, 0x400)
                                int128_t v0_4
                                int128_t v1_2
                                v0_4, v1_2 = (*(*var_68 + 0x20))(var_68, entry_x23)
                                x19_9 = &arg1[0x20]
                                x24_4 = (arg2 << 3) - 0x100
                                int64_t x20_4 = arg2 - 0x20
                                
                                while (true)
                                    if (x19_9 == 0x20)
                                        goto label_ca9abc
                                    
                                    v0_4 = *(entry_x23 + 0x10)
                                    *(x19_9 - 0x20) = *entry_x23
                                    *(x19_9 - 0x10) = v0_4
                                    
                                    if (x20_4 u< 0x41)
                                        break
                                    
                                    (*(*var_68 + 0x18))(var_68, entry_x23, 0x40)
                                    x19_9 += 0x20
                                    x24_4 -= 0x100
                                    x20_4 -= 0x20
                                    v0_4, v1_2 = (*(*var_68 + 0x20))(var_68, entry_x23)
                                
                                if (x20_4 != 0x40)
                                    goto label_ca98a0
                                
                                (*(*var_68 + 0x18))(var_68, entry_x23, 0x40)
                                (*(*var_68 + 0x20))(var_68, x19_9)
                                goto label_ca997c
                            
                            std::__ndk1::to_string(arg2 << 3)
                            int128_t* x0_51
                            int128_t v0_2
                            x0_51, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                                &var_b8, nullptr)
                            void* x8_138 = x0_51[1].q
                            var_a0.o = *x0_51
                            __builtin_memset(x0_51, 0, 0x18)
                            int128_t* x0_53
                            int128_t v0_3
                            x0_53, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                &var_a0)
                            void* x8_139 = x0_53[1].q
                            var_80.o = *x0_53
                            __builtin_memset(x0_53, 0, 0x18)
                            var_d0.w = 0
                            Botan::HashFunction::create_or_throw(&var_80, &var_d0)
                            
                            if ((zx.d(var_d0) & 1) == 0)
                                if ((zx.d(var_80) & 1) != 0)
                                    goto label_ca9870
                                
                                goto label_ca9680
                            
                            operator delete(var_c0)
                            
                            if ((zx.d(var_80) & 1) != 0)
                            label_ca9870:
                                operator delete(x8_139)
                                
                                if ((zx.d(var_a0) & 1) == 0)
                                    goto label_ca9688
                                
                                goto label_ca9880
                            
                        label_ca9680:
                            
                            if ((zx.d(var_a0) & 1) != 0)
                            label_ca9880:
                                operator delete(x8_138)
                                
                                if ((zx.d(var_b8) & 1) != 0)
                                    operator delete(var_a8)
                            else
                            label_ca9688:
                                
                                if ((zx.d(var_b8) & 1) != 0)
                                    operator delete(var_a8)
                            
                            var_80.d = arg2.d
                            (*(*var_68 + 0x18))(var_68, &var_80, 4)
                            (*(*var_68 + 0x18))(var_68, entry_x22, 0x400)
                            (*(*var_68 + 0x20))(var_68, arg1)
                            int64_t var_68_1 = 0
                            
                            if (var_68 != 0)
                                (*(*var_68 + 0x10))()
                            
                            break
                    
                    goto label_ca99b0
            
            goto label_ca9ac4

int64_t* x0_95 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_d0) & 1) == 0)
    if ((zx.d(var_80) & 1) != 0)
        goto label_ca9b78
    
    goto label_ca9b54

operator delete(var_c0)

if ((zx.d(var_80) & 1) != 0)
label_ca9b78:
    operator delete(var_70)
    
    if ((zx.d(var_a0) & 1) == 0)
        goto label_ca9b5c
    
    goto label_ca9b98

label_ca9b54:

if ((zx.d(var_a0) & 1) != 0)
label_ca9b98:
    operator delete(var_90)
    
    if ((zx.d(var_b8) & 1) != 0)
        operator delete(var_a8)
else
label_ca9b5c:
    
    if ((zx.d(var_b8) & 1) != 0)
        operator delete(var_a8)

int64_t var_68_3 = 0

if (var_68 != 0)
    (*(*var_68 + 0x10))()

Botan::deallocate_memory(entry_x23, 0x40, 1)

if (entry_x22 != 0)
    Botan::deallocate_memory(entry_x22, 0x400, 1)

if (entry_x21 != 0)
    Botan::deallocate_memory(entry_x21, 0x80, 8)

uint64_t x0_104 = var_110

if (x0_104 != 0)
    uint64_t var_108_3 = x0_104
    Botan::deallocate_memory(x0_104, (var_100 - x0_104) s>> 3, 8)

void* x0_105 = var_f8

if (x0_105 != 0)
    void* var_f0_2 = x0_105
    Botan::deallocate_memory(x0_105, var_e8 - x0_105, 1)

int64_t var_e0_1 = 0

if (result != 0)
    (*(*result + 0x10))()

sub_1101e04(x0_95)
noreturn
