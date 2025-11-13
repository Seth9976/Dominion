// 函数: _ZNK5Botan3TLS6Policy16ciphersuite_listENS0_16Protocol_VersionEb
// 地址: 0xe74ccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1
(**arg1)()
(*(*x20 + 0x10))(x20)
(*(*x20 + 0x18))(x20)
(*(*x20 + 0x20))(x20)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
Botan::TLS::Ciphersuite::all_known_ciphersuites()
int128_t* x21 = data_23ecc48
int64_t x27 = data_23ecc50
int128_t var_140
void* var_d0_1
void* var_c0
char* var_b8
void* var_a8
char* var_a0
void* var_90
char* var_88
void* var_78
char* var_70

if (x21 != x27)
    int32_t entry_x2
    int32_t fp_1 = entry_x2 ^ 1
    char* x8_3 = &var_140 | 1
    int32_t var_1ac_1 = fp_1
    
    do
        if (zx.d(x21[4].b) != 0 && (Botan::TLS::Ciphersuite::usable_in_version(x21) & 1) != 0
                && ((*(*x20 + 0x118))(x20, x21) & 1) != 0)
            uint64_t x0_7 = zx.q(*(x21 + 0x14))
            
            if (((x0_7.d == 4 ? 1 : 0) & fp_1 & 1) == 0)
                Botan::TLS::kex_method_to_string(x0_7)
                uint64_t x25_1 = zx.q(var_140.b)
                char* var_130
                int32_t x23_2
                
                if (var_a0 == var_a8)
                    x23_2 = 0
                else
                    int32_t temp1_1 = x25_1.d & 1
                    uint64_t x23_1
                    
                    if (temp1_1 == 0)
                        x23_1 = x25_1 u>> 1
                    else
                        x23_1 = var_140:8.q
                    
                    char* x24_1
                    
                    x24_1 = temp1_1 == 0 ? x8_3 : var_130
                    
                    int64_t x28_1 = ((var_a0 - var_a8) s>> 3) * -0x5555555555555555
                    
                    if (x23_1 == 0)
                        int64_t i_13 = x28_1 - 1
                        void* x8_14 = var_a8 + 8
                        int64_t i
                        
                        do
                            uint64_t x11_4 = zx.q(*(x8_14 - 8))
                            i = i_13
                            uint64_t x9_12
                            
                            if ((x11_4.d & 1) == 0)
                                x9_12 = x11_4 u>> 1
                            else
                                x9_12 = *x8_14
                            
                            x23_2 = x9_12 == 0 ? 1 : 0
                            
                            if (x9_12 == 0)
                                break
                            
                            i_13 = i - 1
                            x8_14 += 0x18
                        while (i != 0)
                    else
                        int64_t fp_2 = 0
                        
                        while (true)
                            char* x9_9 = var_a8 + fp_2 * 0x18
                            uint64_t x10_3 = zx.q(*x9_9)
                            uint64_t i_9 = x10_3 u>> 1
                            uint64_t i_17
                            
                            if ((x10_3.d & 1) == 0)
                                i_17 = i_9
                            else
                                i_17 = *(x9_9 + 8)
                            
                            if (i_17 == x23_1)
                                if ((x10_3.d & 1) == 0)
                                    void* x9_10 = &x9_9[1]
                                    char* x10_4 = x24_1
                                    uint64_t i_1
                                    
                                    do
                                        if (zx.d(*x9_10) != zx.d(*x10_4))
                                            goto label_e74e74
                                        
                                        i_1 = i_9
                                        i_9 -= 1
                                        x9_10 += 1
                                        x10_4 = &x10_4[1]
                                    while (i_1 != 1)
                                    x23_2 = 1
                                    break
                                
                                if (memcmp(*(var_a8 + fp_2 * 0x18 + 0x10), x24_1, x23_1) == 0)
                                    x23_2 = 1
                                    break
                            
                        label_e74e74:
                            fp_2 += 1
                            
                            if (fp_2 == x28_1)
                                x23_2 = 0
                                break
                        
                        fp_1 = var_1ac_1
                
                if ((x25_1.d & 1) != 0)
                    operator delete(var_130)
                
                if ((x23_2 & 1) != 0)
                    char* x24_2 = x21[2].q
                    size_t x0_12 = strlen(x24_2)
                    
                    if (x0_12 u>= -0x10)
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    label_e758ac:
                        std::__ndk1::__basic_string_common<true>::__throw_length_error()
                    label_e758b4:
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    char* x25_2
                    
                    if (x0_12 u>= 0x17)
                        uint64_t x26_2 = (x0_12 + 0x10) & 0xfffffffffffffff0
                        char* x0_14 = operator new(x26_2)
                        x25_2 = x0_14
                        var_140:8.q = x0_12
                        var_130 = x0_14
                        var_140.q = x26_2 | 1
                        memcpy(x25_2, x24_2, x0_12)
                    else
                        x25_2 = x8_3
                        var_140.b = (x0_12.d << 1).b
                        
                        if (x0_12 != 0)
                            memcpy(x25_2, x24_2, x0_12)
                    
                    x25_2[x0_12] = 0
                    uint64_t x25_3 = zx.q(var_140.b)
                    int32_t x23_5
                    
                    if (var_70 == var_78)
                        x23_5 = 0
                    else
                        int32_t temp3_1 = x25_3.d & 1
                        uint64_t x23_4
                        
                        if (temp3_1 == 0)
                            x23_4 = x25_3 u>> 1
                        else
                            x23_4 = var_140:8.q
                        
                        char* x24_3
                        
                        x24_3 = temp3_1 == 0 ? x8_3 : var_130
                        
                        int64_t x28_2 = ((var_70 - var_78) s>> 3) * -0x5555555555555555
                        
                        if (x23_4 == 0)
                            int64_t i_14 = x28_2 - 1
                            void* x8_22 = var_78 + 8
                            int64_t i_2
                            
                            do
                                uint64_t x11_8 = zx.q(*(x8_22 - 8))
                                i_2 = i_14
                                uint64_t x9_18
                                
                                if ((x11_8.d & 1) == 0)
                                    x9_18 = x11_8 u>> 1
                                else
                                    x9_18 = *x8_22
                                
                                x23_5 = x9_18 == 0 ? 1 : 0
                                
                                if (x9_18 == 0)
                                    break
                                
                                i_14 = i_2 - 1
                                x8_22 += 0x18
                            while (i_2 != 0)
                        else
                            int64_t fp_3 = 0
                            
                            while (true)
                                char* x9_15 = var_78 + fp_3 * 0x18
                                uint64_t x10_6 = zx.q(*x9_15)
                                uint64_t i_10 = x10_6 u>> 1
                                uint64_t i_18
                                
                                if ((x10_6.d & 1) == 0)
                                    i_18 = i_10
                                else
                                    i_18 = *(x9_15 + 8)
                                
                                if (i_18 == x23_4)
                                    if ((x10_6.d & 1) == 0)
                                        void* x9_16 = &x9_15[1]
                                        char* x10_7 = x24_3
                                        uint64_t i_3
                                        
                                        do
                                            if (zx.d(*x9_16) != zx.d(*x10_7))
                                                goto label_e74ff4
                                            
                                            i_3 = i_10
                                            i_10 -= 1
                                            x9_16 += 1
                                            x10_7 = &x10_7[1]
                                        while (i_3 != 1)
                                        x23_5 = 1
                                        break
                                    
                                    if (memcmp(*(var_78 + fp_3 * 0x18 + 0x10), x24_3, x23_4) == 0)
                                        x23_5 = 1
                                        break
                                
                            label_e74ff4:
                                fp_3 += 1
                                
                                if (fp_3 == x28_2)
                                    x23_5 = 0
                                    break
                            
                            fp_1 = var_1ac_1
                    
                    if ((x25_3.d & 1) != 0)
                        operator delete(var_130)
                    
                    if ((x23_5 & 1) != 0)
                        char* x24_4 = *(x21 + 0x28)
                        size_t x0_20 = strlen(x24_4)
                        
                        if (x0_20 u>= -0x10)
                            goto label_e758ac
                        
                        char* x25_4
                        
                        if (x0_20 u>= 0x17)
                            uint64_t x26_4 = (x0_20 + 0x10) & 0xfffffffffffffff0
                            char* x0_22 = operator new(x26_4)
                            x25_4 = x0_22
                            var_140:8.q = x0_20
                            var_130 = x0_22
                            var_140.q = x26_4 | 1
                            memcpy(x25_4, x24_4, x0_20)
                        else
                            x25_4 = x8_3
                            var_140.b = (x0_20.d << 1).b
                            
                            if (x0_20 != 0)
                                memcpy(x25_4, x24_4, x0_20)
                        
                        x25_4[x0_20] = 0
                        uint64_t x25_5 = zx.q(var_140.b)
                        int32_t x23_8
                        
                        if (var_88 == var_90)
                            x23_8 = 0
                        else
                            int32_t temp6_1 = x25_5.d & 1
                            uint64_t x23_7
                            
                            if (temp6_1 == 0)
                                x23_7 = x25_5 u>> 1
                            else
                                x23_7 = var_140:8.q
                            
                            char* x24_5
                            
                            x24_5 = temp6_1 == 0 ? x8_3 : var_130
                            
                            int64_t x28_3 = ((var_88 - var_90) s>> 3) * -0x5555555555555555
                            
                            if (x23_7 == 0)
                                int64_t i_15 = x28_3 - 1
                                void* x8_30 = var_90 + 8
                                int64_t i_4
                                
                                do
                                    uint64_t x11_12 = zx.q(*(x8_30 - 8))
                                    i_4 = i_15
                                    uint64_t x9_24
                                    
                                    if ((x11_12.d & 1) == 0)
                                        x9_24 = x11_12 u>> 1
                                    else
                                        x9_24 = *x8_30
                                    
                                    x23_8 = x9_24 == 0 ? 1 : 0
                                    
                                    if (x9_24 == 0)
                                        break
                                    
                                    i_15 = i_4 - 1
                                    x8_30 += 0x18
                                while (i_4 != 0)
                            else
                                int64_t fp_4 = 0
                                
                                while (true)
                                    char* x9_21 = var_90 + fp_4 * 0x18
                                    uint64_t x10_9 = zx.q(*x9_21)
                                    uint64_t i_11 = x10_9 u>> 1
                                    uint64_t i_19
                                    
                                    if ((x10_9.d & 1) == 0)
                                        i_19 = i_11
                                    else
                                        i_19 = *(x9_21 + 8)
                                    
                                    if (i_19 == x23_7)
                                        if ((x10_9.d & 1) == 0)
                                            void* x9_22 = &x9_21[1]
                                            char* x10_10 = x24_5
                                            uint64_t i_5
                                            
                                            do
                                                if (zx.d(*x9_22) != zx.d(*x10_10))
                                                    goto label_e75174
                                                
                                                i_5 = i_11
                                                i_11 -= 1
                                                x9_22 += 1
                                                x10_10 = &x10_10[1]
                                            while (i_5 != 1)
                                            x23_8 = 1
                                            break
                                        
                                        if (memcmp(*(var_90 + fp_4 * 0x18 + 0x10), x24_5, x23_7)
                                                == 0)
                                            x23_8 = 1
                                            break
                                    
                                label_e75174:
                                    fp_4 += 1
                                    
                                    if (fp_4 == x28_3)
                                        x23_8 = 0
                                        break
                                
                                fp_1 = var_1ac_1
                        
                        if ((x25_5.d & 1) != 0)
                            operator delete(var_130)
                        
                        if ((x23_8 & 1) != 0)
                            int128_t v0_1
                            int128_t v1_1
                            int128_t v2_1
                            v0_1, v1_1, v2_1 = Botan::TLS::auth_method_to_string(zx.q(x21[1].d))
                            uint64_t x25_6 = zx.q(var_140.b)
                            int32_t x23_10
                            
                            if (var_b8 == var_c0)
                                x23_10 = 0
                            else
                                int32_t temp8_1 = x25_6.d & 1
                                uint64_t x23_9
                                
                                if (temp8_1 == 0)
                                    x23_9 = x25_6 u>> 1
                                else
                                    x23_9 = var_140:8.q
                                
                                char* x24_6
                                
                                x24_6 = temp8_1 == 0 ? x8_3 : var_130
                                
                                int64_t x28_4 = ((var_b8 - var_c0) s>> 3) * -0x5555555555555555
                                
                                if (x23_9 == 0)
                                    int64_t i_16 = x28_4 - 1
                                    void* x8_35 = var_c0 + 8
                                    int64_t i_6
                                    
                                    do
                                        uint64_t x11_16 = zx.q(*(x8_35 - 8))
                                        i_6 = i_16
                                        uint64_t x9_30
                                        
                                        if ((x11_16.d & 1) == 0)
                                            x9_30 = x11_16 u>> 1
                                        else
                                            x9_30 = *x8_35
                                        
                                        x23_10 = x9_30 == 0 ? 1 : 0
                                        
                                        if (x9_30 == 0)
                                            break
                                        
                                        i_16 = i_6 - 1
                                        x8_35 += 0x18
                                    while (i_6 != 0)
                                else
                                    int64_t fp_5 = 0
                                    
                                    while (true)
                                        char* x9_27 = var_c0 + fp_5 * 0x18
                                        uint64_t x10_12 = zx.q(*x9_27)
                                        uint64_t i_12 = x10_12 u>> 1
                                        uint64_t i_20
                                        
                                        if ((x10_12.d & 1) == 0)
                                            i_20 = i_12
                                        else
                                            i_20 = *(x9_27 + 8)
                                        
                                        if (i_20 == x23_9)
                                            if ((x10_12.d & 1) == 0)
                                                void* x9_28 = &x9_27[1]
                                                char* x10_13 = x24_6
                                                uint64_t i_7
                                                
                                                do
                                                    if (zx.d(*x9_28) != zx.d(*x10_13))
                                                        goto label_e752a0
                                                    
                                                    i_7 = i_12
                                                    i_12 -= 1
                                                    x9_28 += 1
                                                    x10_13 = &x10_13[1]
                                                while (i_7 != 1)
                                                x23_10 = 1
                                                break
                                            
                                            int32_t x0_29
                                            x0_29, v0_1, v1_1, v2_1 =
                                                memcmp(*(var_c0 + fp_5 * 0x18 + 0x10), x24_6, x23_9)
                                            
                                            if (x0_29 == 0)
                                                x23_10 = 1
                                                break
                                        
                                    label_e752a0:
                                        fp_5 += 1
                                        
                                        if (fp_5 == x28_4)
                                            x23_10 = 0
                                            break
                                    
                                    fp_1 = var_1ac_1
                            
                            if ((x25_6.d & 1) != 0)
                                v0_1, v1_1, v2_1 = operator delete(var_130)
                            
                            if ((x23_10 & 1) == 0)
                                if (x21[1].d == 0x10000 && *(x21 + 0x14) - 5 u< 3)
                                    goto label_e74d8c
                            else if (*(x21 + 0x14) != 3)
                            label_e74d8c:
                                int64_t var_c8_1
                                
                                if (var_d0_1 == var_c8_1)
                                    void* result_4 = result_1
                                    size_t x24_7 = var_d0_1 - result_4
                                    int64_t x26_7 = (x24_7 s>> 3) * -0x71c71c71c71c71c7
                                    
                                    if (x26_7 + 1 u> 0x38e38e38e38e38e)
                                        goto label_e758b4
                                    
                                    int64_t x9_32 = x26_7 << 1
                                    int64_t x8_48
                                    
                                    if (x9_32 u< x26_7 + 1)
                                        x8_48 = x26_7 + 1
                                    else
                                        x8_48 = x9_32
                                    
                                    int64_t x28_5
                                    
                                    x28_5 = x26_7 u< 0x1c71c71c71c71c7 ? x8_48 : 0x38e38e38e38e38e
                                    
                                    int64_t x25_7
                                    
                                    if (x28_5 == 0)
                                        x25_7 = 0
                                    else
                                        if (x28_5 u> 0x38e38e38e38e38e)
                                            sub_ef2a0c()
                                            noreturn
                                        
                                        int64_t x0_34
                                        x0_34, v0_1, v1_1, v2_1 = operator new(x28_5 * 0x48)
                                        x25_7 = x0_34
                                    
                                    int128_t* fp_6 = x25_7 + x26_7 * 0x48
                                    *fp_6 = *x21
                                    v0_1 = x21[3]
                                    int64_t x8_50 = x21[4].q
                                    v1_1 = x21[1]
                                    void* result_6 = fp_6 - x24_7
                                    fp_6[2] = x21[2]
                                    fp_6[3] = v0_1
                                    fp_6[4].q = x8_50
                                    fp_6[1] = v1_1
                                    
                                    if (x24_7 s>= 1)
                                        memcpy(result_6, result_4, x24_7)
                                    
                                    fp_1 = var_1ac_1
                                    result_1 = result_6
                                    var_d0_1 = fp_6 + 0x48
                                    var_c8_1 = x25_7 + x28_5 * 0x48
                                    
                                    if (result_4 != 0)
                                        operator delete(result_4)
                                else
                                    *var_d0_1 = *x21
                                    v0_1 = x21[3]
                                    int64_t x9_6 = x21[4].q
                                    v1_1 = x21[1]
                                    *(var_d0_1 + 0x20) = x21[2]
                                    *(var_d0_1 + 0x30) = v0_1
                                    *(var_d0_1 + 0x40) = x9_6
                                    *(var_d0_1 + 0x10) = v1_1
                                    var_d0_1 += 0x48
                            else
                                (*(*x20 + 0x40))(x20)
                                void* x0_32 = var_140.q
                                void* x8_38 = var_140:8.q
                                void* x10_14 = x8_38 - x0_32
                                
                                if (x8_38 != x0_32)
                                    void* x11_17
                                    
                                    x11_17 = x10_14 s>= 0 ? x10_14 : -ffffffffffffffff
                                    
                                    void* x8_39 = x0_32 - x8_38
                                    void* x11_18
                                    
                                    x11_18 = x11_17 s< 1 ? x11_17 : 1
                                    
                                    void* x8_40
                                    
                                    x8_40 = x8_39 s> x10_14 ? x8_39 : x10_14
                                    
                                    int64_t i_8 = 0
                                    
                                    do
                                        if (zx.d(*(x0_32 + (i_8 << 1))) == 0x1d)
                                            var_140:8.q = x0_32
                                            v0_1, v1_1, v2_1 = operator delete(x0_32)
                                            goto label_e74d8c
                                        
                                        i_8 += 1
                                    while (x11_18 * (x8_40 u>> 1) != i_8)
                                    
                                    var_140:8.q = x0_32
                                    operator delete(x0_32)
                                else if (x8_38 != 0)
                                    operator delete(x8_38)
        
        x21 += 0x48
    while (x21 != x27)

if (result_1 == var_d0_1)
    void** x0_61 = __cxa_allocate_exception(0x20)
    int64_t x0_62
    int128_t v0_2
    x0_62, v0_2 = operator new(0x40)
    (*"ble cipher suite")[0].o
    int64_t var_130_1 = x0_62
    v0_2 = data_71b3f0
    __builtin_strncpy(x0_62, "Policy does not allow any available cipher suite", 0x31)
    var_140 = v0_2
    *x0_61 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_61[1])
    *x0_61 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_61, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_140)
void var_128
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_128)
void var_110
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_110)
void var_f8
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_f8)
void* result_3 = result_1
void var_1a0
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_1a0)
void var_188
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_188)
void var_170
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_170)
void var_158
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
    &var_158)
sub_f4ee98(result_3, var_d0_1, &var_1a0)
sub_e75d58(&var_1a0)
void* result_5 = result_1
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (result_5 != var_d0_1)
    int64_t x8_53 = 0
    int16_t* x9_35 = nullptr
    int16_t x27_1 = *result_5
    
    while (true)
        void* x21_2 = *entry_x8
        void* x20_1 = x9_35 - x21_2
        
        if (x20_1 s<= -3)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            break
        
        int64_t fp_7 = x20_1 s>> 1
        void* x8_54 = x8_53 - x21_2
        void* x9_37
        
        if (x8_54 u< fp_7 + 1)
            x9_37 = fp_7 + 1
        else
            x9_37 = x8_54
        
        void* x28_6
        
        if (0x3fffffffffffffff u> x8_54 s>> 1)
            x28_6 = x9_37
        else
            x28_6 = 0x7fffffffffffffff
        
        int64_t x22_2
        void* fp_9
        
        if (x28_6 == 0)
            x22_2 = 0
            *(fp_7 << 1) = x27_1
            fp_9 = (fp_7 << 1) + 2
            
            if (x20_1 s>= 1)
                memcpy(x22_2, x21_2, x20_1)
        else
            if ((x28_6 & 0xffffffff80000000) != 0)
                break
            
            x22_2 = operator new(x28_6 << 1)
            int16_t* fp_8 = x22_2 + (fp_7 << 1)
            *fp_8 = x27_1
            fp_9 = &fp_8[1]
            
            if (x20_1 s>= 1)
                memcpy(x22_2, x21_2, x20_1)
        
        *entry_x8 = x22_2
        entry_x8[1] = fp_9
        entry_x8[2] = x22_2 + (x28_6 << 1)
        
        if (x21_2 != 0)
            operator delete(x21_2)
        
        while (true)
            if (var_d0_1 - 0x48 == result_5)
                goto label_e75694
            
            x9_35 = entry_x8[1]
            x8_53 = entry_x8[2]
            result_5 += 0x48
            x27_1 = *result_5
            
            if (x9_35 u>= x8_53)
                break
            
            *x9_35 = x27_1
            entry_x8[1] = &x9_35[1]
    
    sub_ef2a0c()
    noreturn

label_e75694:
sub_e75d58(&var_140)
void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (var_c0 != 0)
    char* x8_56 = var_b8
    void* x0_52
    
    if (x8_56 == var_c0)
        x0_52 = var_c0
    else
        char* x20_2 = x8_56
        
        do
            x20_2 = &x20_2[-0x18]
            
            if ((zx.d(*x20_2) & 1) != 0)
                operator delete(*(x8_56 - 8))
            
            x8_56 = x20_2
        while (var_c0 != x20_2)
        
        x0_52 = var_c0
    
    void* var_b8_1 = var_c0
    result = operator delete(x0_52)

if (var_a8 != 0)
    char* x8_57 = var_a0
    void* x0_54
    
    if (x8_57 == var_a8)
        x0_54 = var_a8
    else
        char* x20_3 = x8_57
        
        do
            x20_3 = &x20_3[-0x18]
            
            if ((zx.d(*x20_3) & 1) != 0)
                operator delete(*(x8_57 - 8))
            
            x8_57 = x20_3
        while (var_a8 != x20_3)
        
        x0_54 = var_a8
    
    void* var_a0_1 = var_a8
    result = operator delete(x0_54)

if (var_90 != 0)
    char* x8_58 = var_88
    void* x0_56
    
    if (x8_58 == var_90)
        x0_56 = var_90
    else
        char* x20_4 = x8_58
        
        do
            x20_4 = &x20_4[-0x18]
            
            if ((zx.d(*x20_4) & 1) != 0)
                operator delete(*(x8_58 - 8))
            
            x8_58 = x20_4
        while (var_90 != x20_4)
        
        x0_56 = var_90
    
    void* var_88_1 = var_90
    result = operator delete(x0_56)

if (var_78 == 0)
    return result

char* x8_59 = var_70
void* x0_58

if (x8_59 == var_78)
    x0_58 = var_78
else
    char* x20_5 = x8_59
    
    do
        x20_5 = &x20_5[-0x18]
        
        if ((zx.d(*x20_5) & 1) != 0)
            operator delete(*(x8_59 - 8))
        
        x8_59 = x20_5
    while (var_78 != x20_5)
    
    x0_58 = var_78

void* var_70_1 = var_78
return operator delete(x0_58)
