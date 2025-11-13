// 函数: _ZN5Botan11DER_Encoder10add_objectENS_8ASN1_TagES1_PKhm
// 地址: 0xcb3cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x25
uint64_t var_38 = entry_x25
uint64_t x23 = zx.q(arg3.d)
uint64_t var_c0
__builtin_memset(&var_c0, 0, 0x18)
int128_t var_90
char var_78

if ((arg3.d & 0xffffff1f) == 0)
    int32_t x22_1 = arg2
    void* result = arg1
    uint64_t var_b0_1
    void* x27_1
    
    if (arg2 u> 0x1e)
        uint64_t x8_4 = zx.q(x22_1 u>> 0x10 != 0 ? 1 : 0) << 4
        uint32_t x9_1 = x22_1 u>> x8_4.d
        uint64_t x10_1 = zx.q(x9_1 u> 0xff ? 1 : 0)
        uint32_t x9_2 = x9_1 u>> (x10_1 << 3).d
        uint64_t x10_2 = zx.q(x9_2 u> 0xf ? 1 : 0)
        uint32_t x9_3 = x9_2 u>> (x10_2 << 2).d
        uint64_t x10_3 = zx.q(x9_3 u> 3 ? 1 : 0)
        uint32_t x9_4 = x9_3 u>> (x10_3 << 1).d
        uint64_t x10_4 = zx.q(x9_4 u> 1 ? 1 : 0)
        int64_t x19_1 = ((-3 & ((-5 & ((-9 & x8_4) | (1 & x10_1) << 3)) | (1 & x10_2) << 2))
            | (1 & x10_3) << 1 | x10_4) + zx.q(x9_4 u>> x10_4.d)
        
        if (x19_1 == 0)
            Botan::assertion_failure("blocks > 0", &data_793a18, "encode_tag", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x32c8)
        label_cb43e0:
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_cb43e8:
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            sub_a58ab4()
            noreturn
        
        uint64_t x0_1 = operator new(1)
        uint64_t x8_12 = (x19_1 + 6) u/ 7
        uint64_t x27_2 = x0_1 + 1
        int64_t i = x8_12 - 1
        *x0_1 = x23.b | 0x1f
        var_c0 = x0_1
        uint64_t var_b8_2 = x27_2
        var_b0_1 = x27_2
        uint64_t x8_14
        uint64_t x9_11
        char x19_2
        uint64_t x22_2
        size_t x23_1
        
        if (x8_12 == 1)
            x19_2 = x22_1.b & 0x7f
            x8_14 = x27_2
            x22_2 = var_c0
            x23_1 = x27_2 - x22_2
            x9_11 = x23_1 + 1
            uint64_t x24_2
            
            if (x23_1 + 1 s>= 0)
            label_cb3ed8:
                uint64_t x8_17 = x8_14 - x22_2
                uint64_t x11_4 = x8_17 << 1
                uint64_t x9_12
                
                x9_12 = x11_4 u< x9_11 ? x9_11 : x11_4
                
                entry_x25 = x8_17 u< 0x3fffffffffffffff ? x9_12 : 0x7fffffffffffffff
                
                if (entry_x25 == 0)
                    goto label_cb3f28
                
                x24_2 = operator new(entry_x25)
                goto label_cb3f2c
            
        label_cb3f24:
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_cb3f28:
            x24_2 = 0
        label_cb3f2c:
            char* x27_5 = x24_2 + x23_1
            *x27_5 = x19_2
            x27_1 = &x27_5[1]
            
            if (x23_1 s>= 1)
                memcpy(x24_2, x22_2, x23_1)
            
            var_c0 = x24_2
            void* var_b8_6 = x27_1
            var_b0_1 = x24_2 + entry_x25
            
            if (x22_2 != 0)
                operator delete(x22_2)
        else
            int32_t x21_1 = x8_12.d * 7 - 7
            x8_14 = x27_2
            
            do
                char x20_1 = (x22_1 u>> x21_1).b | 0x80
                
                if (x27_2 u< x8_14)
                    *x27_2 = x20_1
                    x27_2 += 1
                    uint64_t var_b8_3 = x27_2
                else
                    x23 = var_c0
                    uint64_t x24_1 = x27_2 - x23
                    
                    if (x24_1 + 1 s< 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        goto label_cb42ec
                    
                    uint64_t x8_15 = x8_14 - x23
                    uint64_t x10_6 = x8_15 << 1
                    uint64_t x9_10
                    
                    if (x10_6 u< x24_1 + 1)
                        x9_10 = x24_1 + 1
                    else
                        x9_10 = x10_6
                    
                    entry_x25 = x8_15 u< 0x3fffffffffffffff ? x9_10 : 0x7fffffffffffffff
                    
                    uint64_t x26_1
                    
                    if (entry_x25 == 0)
                        x26_1 = 0
                        *x24_1 = x20_1
                        x27_2 = x24_1 + 1
                        
                        if (x24_1 s>= 1)
                            memcpy(x26_1, x23, x24_1)
                    else
                        x26_1 = operator new(entry_x25)
                        uint64_t x27_3 = x26_1 + x24_1
                        *x27_3 = x20_1
                        x27_2 = x27_3 + 1
                        
                        if (x24_1 s>= 1)
                            memcpy(x26_1, x23, x24_1)
                    
                    var_c0 = x26_1
                    uint64_t var_b8_4 = x27_2
                    var_b0_1 = x26_1 + entry_x25
                    
                    if (x23 != 0)
                        operator delete(x23)
                
                x8_14 = var_b0_1
                i -= 1
                x21_1 -= 7
            while (i != 0)
            
            x19_2 = x22_1.b & 0x7f
            
            if (x27_2 u>= x8_14)
                x22_2 = var_c0
                x23_1 = x27_2 - x22_2
                x9_11 = x23_1 + 1
                
                if (x23_1 + 1 s>= 0)
                    goto label_cb3ed8
                
                goto label_cb3f24
            
            *x27_2 = x19_2
            x27_1 = x27_2 + 1
            void* var_b8_5 = x27_1
        goto label_cb3f64
    
    char* x0 = operator new(1)
    x27_1 = &x0[1]
    *x0 = x23.b | x22_1.b
    var_c0 = x0
    void* var_b8_1 = x27_1
    var_b0_1 = x27_1
label_cb3f64:
    int64_t entry_x4
    int64_t x4 = entry_x4
    void* x27_6
    
    if (x4 u<= 0x7f)
        if (x27_1 u>= var_b0_1)
            uint64_t x22_3 = var_c0
            void* x23_2 = x27_1 - x22_3
            
            if (x23_2 + 1 s< 0)
                goto label_cb43e0
            
            uint64_t x8_21 = var_b0_1 - x22_3
            int64_t x11_7 = x8_21 << 1
            void* x9_19
            
            if (x11_7 u< x23_2 + 1)
                x9_19 = x23_2 + 1
            else
                x9_19 = x11_7
            
            void* x25
            
            x25 = x8_21 u< 0x3fffffffffffffff ? x9_19 : 0x7fffffffffffffff
            
            uint64_t x24_3
            
            if (x25 == 0)
                x24_3 = 0
            else
                x24_3 = operator new(x25)
            
            void* x27_7 = x24_3 + x23_2
            *x27_7 = entry_x4.b
            x27_6 = x27_7 + 1
            
            if (x23_2 s>= 1)
                memcpy(x24_3, x22_3, x23_2)
            
            var_c0 = x24_3
            void* var_b8_9 = x27_6
            void* var_b0_2 = x24_3 + x25
            
            if (x22_3 != 0)
                operator delete(x22_3)
            
            goto label_cb4204
        
        *x27_1 = (x4.d).b
        x27_6 = x27_1 + 1
        void* var_b8_7 = x27_6
    label_cb4204:
        int64_t x9_26 = *(result + 0x50)
        
        if (x9_26 != *(result + 0x48))
            uint64_t x1_5 = var_c0
            Botan::DER_Encoder::DER_Sequence::add_bytes(x9_26 - 0x38, x1_5, x27_6 - x1_5, arg4)
        label_cb42ac:
            uint64_t x0_27 = var_c0
            
            if (x0_27 != 0)
                uint64_t var_b8_13 = x0_27
                operator delete(x0_27)
            
            return result
        
        int64_t* x0_23 = *(result + 0x20)
        
        if (x0_23 == 0)
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, std::__ndk1::allocator<uint8_t> >(
                result + 0x30, &var_c0)
            var_78.q = arg4
            int64_t var_70_1 = entry_x4
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(result + 0x30, 
                &var_78)
            goto label_cb42ac
        
        uint64_t x8_30 = var_c0
        var_78.q = x8_30
        var_90.q = x27_6 - x8_30
        (*(*x0_23 + 0x30))(x0_23, &var_78, &var_90)
        var_78.q = arg4
        var_90.q = entry_x4
        int64_t* x0_24 = *(result + 0x20)
        
        if (x0_24 != 0)
            (*(*x0_24 + 0x30))(x0_24, &var_78, &var_90)
            goto label_cb42ac
        
        sub_a58ab4()
        noreturn
    
    uint64_t x19_3 = zx.q(x4 u>> 0x20 != 0 ? 1 : 0) << 5
    uint64_t x9_15 = x4 u>> x19_3
    uint64_t x10_8 = zx.q(x9_15 u>> 0x10 != 0 ? 1 : 0)
    uint64_t x9_16 = x9_15 u>> x10_8 << 4
    uint64_t x10_9 = zx.q(x9_16 u> 0xff ? 1 : 0)
    int64_t x19_5 = (-9 & ((-0x11 & x19_3) | (1 & x10_8) << 4)) | (1 & x10_9) << 3
    uint64_t x9_17 = x9_16 u>> x10_9 << 3
    uint64_t x10_10 = x19_5 u>> 3
    uint64_t x26_2
    
    if (x9_17 != 0)
        x26_2 = x10_10 + 1
    else
        x26_2 = x10_10
    
    char x20_3 = x26_2.b | 0x80
    
    if (x27_1 u>= var_b0_1)
        uint64_t x22_4 = var_c0
        size_t x23_3 = x27_1 - x22_4
        
        if (x23_3 + 1 s< 0)
            goto label_cb43e8
        
        uint64_t x8_22 = var_b0_1 - x22_4
        uint64_t x11_8 = x8_22 << 1
        uint64_t x9_21
        
        if (x11_8 u< x23_3 + 1)
            x9_21 = x23_3 + 1
        else
            x9_21 = x11_8
        
        uint64_t x25_1
        
        x25_1 = x8_22 u< 0x3fffffffffffffff ? x9_21 : 0x7fffffffffffffff
        
        uint64_t x24_4
        
        if (x25_1 == 0)
            x24_4 = 0
        else
            x24_4 = operator new(x25_1)
        
        char* x27_8 = x24_4 + x23_3
        *x27_8 = x20_3
        x27_6 = &x27_8[1]
        
        if (x23_3 s>= 1)
            memcpy(x24_4, x22_4, x23_3)
        
        var_c0 = x24_4
        void* var_b8_10 = x27_6
        var_b0_1 = x24_4 + x25_1
        
        if (x22_4 != 0)
            operator delete(x22_4)
        
        x4 = entry_x4
        
        if (8 - x26_2 u> 7)
            goto label_cb4204
    else
        *x27_1 = x20_3
        x27_6 = x27_1 + 1
        void* var_b8_8 = x27_6
        
        if (8 - x26_2 u> 7)
            goto label_cb4204
    
    uint64_t x26_3 = zx.q(x9_17 != 0 ? 1 : 0) + (x19_5 u>> 3)
    int64_t x21_3 = 0x40 - (x26_3 << 3)
    
    while (true)
        uint8_t x20_4 = (x4 u>> (zx.q(not.d(x21_3.d)) & 0x38)).b
        
        if (x27_6 u< var_b0_1)
            *x27_6 = x20_4
            x27_6 += 1
            void* var_b8_11 = x27_6
            uint64_t temp1_1 = x26_3
            x26_3 -= 1
            x21_3 += 8
            
            if (temp1_1 == 1)
                goto label_cb4204
        else
            uint64_t x22_5 = var_c0
            x23 = x27_6 - x22_5
            
            if (x23 + 1 s< 0)
                break
            
            uint64_t x8_26 = var_b0_1 - x22_5
            uint64_t x10_11 = x8_26 << 1
            uint64_t x9_25
            
            if (x10_11 u< x23 + 1)
                x9_25 = x23 + 1
            else
                x9_25 = x10_11
            
            uint64_t x24_5
            
            x24_5 = x8_26 u< 0x3fffffffffffffff ? x9_25 : 0x7fffffffffffffff
            
            uint64_t x25_3
            
            if (x24_5 == 0)
                x25_3 = 0
                *x23 = x20_4
                x27_6 = x23 + 1
                
                if (x23 s>= 1)
                    memcpy(x25_3, x22_5, x23)
            else
                x25_3 = operator new(x24_5)
                char* x27_9 = x25_3 + x23
                *x27_9 = x20_4
                x27_6 = &x27_9[1]
                
                if (x23 s>= 1)
                    memcpy(x25_3, x22_5, x23)
            
            var_c0 = x25_3
            void* var_b8_12 = x27_6
            var_b0_1 = x25_3 + x24_5
            
            if (x22_5 != 0)
                operator delete(x22_5)
            
            x4 = entry_x4
            uint64_t temp2_1 = x26_3
            x26_3 -= 1
            x21_3 += 8
            
            if (temp2_1 == 1)
                goto label_cb4204
    
label_cb42ec:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

void** x0_29 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x23.d)
void var_a8
int128_t* x0_32
int128_t v0
x0_32, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_a8, nullptr)
int64_t var_80 = x0_32[1].q
var_90 = *x0_32
__builtin_memset(x0_32, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Encoding error: ", &var_90)
*x0_29 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_29[1])
*x0_29 = _vtable_for_Botan::Invalid_Argument + 0x10
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
*x0_29 = _vtable_for_Botan::Encoding_Error + 0x10
__cxa_throw(x0_29, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
noreturn
