// 函数: sub_d8f4f8
// 地址: 0xd8f4f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_38 = arg8
uint64_t x19 = (arg3 + 7) u>> 3
int64_t fp

if ((arg6 & 1) == 0)
    fp = 2
else
    fp = 1

uint64_t x0_1 = (***arg4)()
int128_t var_90
char var_78
uint64_t var_68

if (x19 u<= fp + arg5 + x0_1)
    void** x0_31 = __cxa_allocate_exception(0x20)
    int64_t x0_32
    int128_t v0_3
    x0_32, v0_3 = operator new(0x40)
    int64_t var_80_1 = x0_32
    var_90 = data_71ac10
    __builtin_strncpy(x0_32, "ISO9796-2::encoding_of: Output length is too small", 0x33)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_90)
    *x0_31 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_31[1])
    *x0_31 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_31 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_31, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_90, 0, 0x18)
char* x28 = *arg2
uint64_t x8_4 = x19 - x0_1
int64_t x23 = x8_4 - arg5 - fp
uint64_t x27 = x23 - 1
char var_f8
char var_e0
uint8_t* var_c0
int64_t var_b0
void* var_a8
void* var_80
char* var_70
char* x21_1

if (arg2[1] - x28 u> x27)
    __builtin_memset(&var_78, 0, 0x18)
    char* x0_3
    void* x9_1
    char* x10_1
    
    if (x27 != 0)
        if ((x27 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_d8fd34:
            int64_t* x0_45 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::exception::~exception()
            
            if ((zx.d(var_78) & 1) != 0)
                operator delete(var_68)
            
            void* var_d0
            
            if ((zx.d(var_e0) & 1) != 0)
                operator delete(var_d0)
            void* var_e8
            
            if ((zx.d(var_f8) & 1) != 0)
                operator delete(var_e8)
            __cxa_free_exception(x23)
            arg1[1] = arg8
            Botan::deallocate_memory(arg8, x19, 1)
            
            if (var_c0 != 0)
                uint8_t* var_b8_2 = var_c0
                Botan::deallocate_memory(var_c0, var_b0 - var_c0, 1)
            
            void* x0_53 = var_a8
            
            if (x0_53 != 0)
                void* var_a0_2 = x0_53
                int64_t var_98
                Botan::deallocate_memory(x0_53, var_98 - x0_53, 1)
            
            if (arg2 != 0)
                Botan::deallocate_memory(arg2, x27 - arg2, 1)
            
            void* x0_55 = var_90.q
            
            if (x0_55 != 0)
                var_90:8.q = x0_55
                Botan::deallocate_memory(x0_55, var_80 - x0_55, 1)
            
            sub_1101e04(x0_45)
            noreturn
        
        int128_t v0_1
        int128_t v1_1
        x0_3, v0_1, v1_1 = Botan::allocate_memory(x27, 1)
        x9_1 = &x0_3[x27]
        var_78.q = x0_3
        char* var_70_1 = x0_3
        char* x8_7
        
        if (x27 u>= 0x20)
            if (x0_3 u< &x28[x27])
                x10_1 = x0_3
                x8_7 = x28
            
            if (x0_3 u< &x28[x27] && x28 u< x9_1)
                goto label_d8f670
            
            int64_t i_4 = x27 & 0xffffffffffffffe0
            void* x12_1 = &x28[0x10]
            x10_1 = &x0_3[i_4]
            x8_7 = &x28[i_4]
            void* x13_1 = &x0_3[0x10]
            int64_t i_3 = i_4
            int64_t i
            
            do
                v0_1 = *(x12_1 - 0x10)
                v1_1 = *x12_1
                x12_1 += 0x20
                i = i_3
                i_3 -= 0x20
                *(x13_1 - 0x10) = v0_1
                *x13_1 = v1_1
                x13_1 += 0x20
            while (i != 0x20)
            
            if (x27 != i_4)
                goto label_d8f670
        else
            x10_1 = x0_3
            x8_7 = x28
        label_d8f670:
            void* i_2 = x19 - x8_7 - fp - x0_1 - arg5 + x28 - 1
            void* i_1
            
            do
                char x12_2 = *x8_7
                x8_7 = &x8_7[1]
                i_1 = i_2
                i_2 -= 1
                *x10_1 = x12_2
                x10_1 = &x10_1[1]
            while (i_1 != 1)
        void* x8_9 = var_90.q
        
        if (x8_9 != 0)
            var_90:8.q = x8_9
            Botan::deallocate_memory(x8_9, var_80 - x8_9, 1)
            x0_3 = var_78.q
            var_90.q = 0
        
        goto label_d8f6b4
    
    x9_1 = nullptr
    x10_1 = nullptr
    x0_3 = nullptr
label_d8f6b4:
    var_90.q = x0_3
    var_90:8.q = x10_1
    var_80 = x9_1
    __builtin_memset(&var_78, 0, 0x18)
    int64_t x20_1 = *arg2
    int64_t x28_1 = arg2[1]
    arg8 = x20_1 + x27
    x27 = x28_1 - arg8
    int64_t* x0_8
    
    if (x28_1 == arg8)
        x21_1 = nullptr
        x0_8 = *arg4
        (*(*x0_8 + 0x18))(x0_8, x21_1, nullptr - x21_1)
    else
        if ((x27 & 0xffffffff80000000) != 0)
            goto label_d8fd34
        
        char* x0_7
        int128_t v0_2
        int128_t v1_2
        x0_7, v0_2, v1_2 = Botan::allocate_memory(x27, 1)
        x21_1 = x0_7
        x27 = &x0_7[x27]
        var_78.q = x0_7
        var_70 = x0_7
        var_68 = x27
        char* x8_14
        
        if (arg8 == x28_1)
            x8_14 = x21_1
        else
            void* x8_13 = fp + x0_1 + arg5 - x20_1 - x19
            
            if (x8_13 + x28_1 + 1 u>= 0x20)
                if (x21_1 u< x28_1)
                    x8_14 = x21_1
                
                if (x21_1 u< x28_1 && arg8 u< x8_13 + x21_1 + x28_1 + 1)
                    goto label_d8f7a8
                
                void* x10_2 = (x8_13 + x28_1 + 1) & 0xffffffffffffffe0
                int64_t x11_6 = 0
                x8_14 = x21_1 + x10_2
                arg8 += x10_2
                
                do
                    int128_t* x13_2 = x19 - fp - x0_1 - arg5 + x20_1 + 0xf + x11_6
                    v1_2 = *x13_2
                    void* x14_1 = &x21_1[x11_6]
                    x11_6 += 0x20
                    *x14_1 = x13_2[-1]
                    *(x14_1 + 0x10) = v1_2
                while (x10_2 != x11_6)
                
                if (x10_2 != x8_13 + x28_1 + 1)
                    goto label_d8f7a8
            else
                x8_14 = x21_1
            label_d8f7a8:
                
                do
                    char x9_5 = *arg8
                    arg8 += 1
                    *x8_14 = x9_5
                    x8_14 = &x8_14[1]
                while (x28_1 != arg8)
        
        x0_8 = *arg4
        (*(*x0_8 + 0x18))(x0_8, x21_1, x8_14 - x21_1)
else if (&var_90 == arg2)
    x27 = 0
    x21_1 = nullptr
else
    x27 = 0
    x21_1 = nullptr
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(&var_90, x28)

*arg4
Botan::Buffered_Computation::final()

if (x21_1 != 0)
    Botan::deallocate_memory(x21_1, x27 - x21_1, 1)

void* x21_2 = var_78.q
int64_t x28_2 = var_90.q
int64_t x20_2 = var_90:8.q
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_a0
void* x1_5
int64_t x8_18

if (arg5 == 0)
    x1_5 = nullptr
    x8_18 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_a8)
    x1_5 = var_a8
    x8_18 = var_a0

(*(*arg7 + 0x10))(arg7, x1_5, x8_18 - x1_5)
int64_t x26_1 = x20_2 - x28_2
int64_t* x0_13 = *arg4
var_78.q = _byteswap(x26_1 << 3)
(*(*x0_13 + 0x18))(x0_13, &var_78, 8)
int64_t* x0_14 = *arg4
int64_t x1_7 = var_90.q
(*(*x0_14 + 0x18))(x0_14, x1_7, var_90:8.q - x1_7)
int64_t* x0_15 = *arg4
(*(*x0_15 + 0x18))(x0_15, x21_2, var_70 - x21_2)
int64_t* x0_16 = *arg4
void* x1_9 = var_a8
(*(*x0_16 + 0x18))(x0_16, x1_9, var_a0 - x1_9)
*arg4
Botan::Buffered_Computation::final()
__builtin_memset(arg1, 0, 0x18)
char* x0_19 = Botan::allocate_memory(x19, 1)
*arg1 = x0_19
void* x28_4 = &x0_19[x19]
arg1[2] = x28_4
memset(x0_19, 0, x19)
arg1[1] = x28_4
void* x8_31 = x23 - x26_1
size_t x9_12 = x19 - x8_31
*(x8_31 + x0_19 - 1) = 1

if (x19 u< x8_31)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
label_d8fbb4:
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
label_d8fbdc:
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
label_d8fc04:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_d8fc2c:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_d8fc54:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_d8fc5c:
    void** x0_37 = __cxa_allocate_exception(0x20)
    int64_t* x9_18 = *arg4
    (*(*x9_18 + 0x40))(x9_18)
    int128_t* x0_40
    int128_t v0_4
    x0_40, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_f8, nullptr)
    int64_t var_d0_1 = x0_40[1].q
    var_e0.o = *x0_40
    __builtin_memset(x0_40, 0, 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_e0)
    *x0_37 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_37[1])
    *x0_37 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_37 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_37, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x1_10 = var_90.q
size_t x10_5 = var_90:8.q - x1_10
size_t x2_7

x2_7 = x9_12 u< x10_5 ? x9_12 : x10_5

if (x2_7 != 0)
    if (x1_10 == 0)
        goto label_d8fc04
    
    memmove(x0_19 + x8_31, x1_10, x2_7)

size_t x8_32 = x19 - x23

if (x19 u< x23)
    goto label_d8fbb4

void* x1_11 = var_a8
size_t x9_14 = var_a0 - x1_11
size_t x2_8

x2_8 = x8_32 u< x9_14 ? x8_32 : x9_14

if (x2_8 != 0)
    if (x1_11 == 0)
        goto label_d8fc2c
    
    memmove(&x0_19[x23], x1_11, x2_8)

uint64_t x26_2 = x8_4 - fp
Botan::mgf1_mask(*arg4, var_c0, x0_1, x0_19, x26_2)
size_t x8_34 = x19 - x26_2

if (x19 u< x26_2)
    goto label_d8fbdc

uint8_t* x24_1 = var_c0
int64_t var_b8
size_t x9_16 = var_b8 - x24_1
size_t x2_10

x2_10 = x8_34 u< x9_16 ? x8_34 : x9_16

if (x2_10 != 0)
    if (x24_1 == 0)
        goto label_d8fc54
    
    memmove(&x0_19[x26_2], x24_1, x2_10)

if ((arg6 & 1) == 0)
    (*(**arg4 + 0x40))()
    char x0_26 = Botan::ieee1363_hash_id(&var_78)
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    if (zx.d(x0_26) == 0)
        goto label_d8fc5c
    
    x24_1 = var_c0
    void* x8_41 = &x0_19[x19]
    *(x8_41 - 1) = 0xcc
    *(x8_41 - 2) = x0_26
    *x0_19 &= 0x7f
    
    if (x24_1 != 0)
        goto label_d8fa1c
else
    x0_19[x19 - 1] = 0xbc
    *x0_19 &= 0x7f
    
    if (x24_1 != 0)
    label_d8fa1c:
        uint8_t* var_b8_1 = x24_1
        Botan::deallocate_memory(x24_1, var_b0 - x24_1, 1)

void* x0_29 = var_a8

if (x0_29 != 0)
    void* var_a0_1 = x0_29
    int64_t var_98_1
    Botan::deallocate_memory(x0_29, var_98_1 - x0_29, 1)

if (x21_2 != 0)
    Botan::deallocate_memory(x21_2, var_68 - x21_2, 1)

void* result = var_90.q

if (result == 0)
    return result

var_90:8.q = result
return Botan::deallocate_memory(result, var_80 - result, 1)
