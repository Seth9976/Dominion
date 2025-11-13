// 函数: _ZN5Botan22argon2_generate_pwhashEPKcmRNS_21RandomNumberGeneratorEmmmhmm
// 地址: 0xcaa1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
char var_1f8[0x8]
char* var_1e8
char var_1e0
char var_1c8[0x8]
char* var_1b8
char var_1b0
int64_t (* var_198)()
int64_t (* var_128)()
uint8_t* var_90
uint64_t x27_1
void* var_70_1
uint8_t* result_8
void* fp_1

if (arg8 == 0)
    fp_1 = nullptr
    result_8 = nullptr
label_caa274:
    (*(*arg3 + 0x10))(arg3, result_8, fp_1 - result_8)
    x27_1 = arg9
    __builtin_memset(&var_90, 0, 0x18)
    void* var_88_1
    uint8_t* x26_1
    void* x28_1
    
    if (x27_1 == 0)
        x28_1 = nullptr
        x26_1 = nullptr
    label_caa2c0:
        uint8_t* result_6 = result_1
        int64_t var_230 = 0
        int64_t var_228 = 0
        uint64_t var_210 = arg5
        uint64_t var_208 = arg6
        uint64_t var_218 = arg4
        uint8_t var_220 = arg7
        Botan::argon2(x26_1, x28_1 - x26_1, arg1, arg2, result_6, var_70_1 - result_6, nullptr, 0)
        var_198 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x18
        var_128 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x40
        std::__ndk1::ios_base::init(&var_128)
        int64_t var_a0 = 0
        int32_t var_98 = 0xffffffff
        var_198 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x18
        var_128 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x40
        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
        uint32_t x8_6 = zx.d(arg7)
        void* __offset(
            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x10) var_190 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x10
        char var_150_1 = (zx.o(0)).b
        int64_t var_140_1 = (zx.o(0)).q
        int32_t var_130 = 0x10
        
        if (x8_6 == 1)
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_198, 
                "$argon2i$", 9)
        else if (x8_6 != 0)
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_198, 
                "$argon2id$", 0xa)
        else
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_198, 
                "$argon2d$", 9)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_198, "v=19$m=", 7)), 
                    ",t=", 3)), 
                ",p=", 3)), 
            "$", 1)
        uint8_t* result_4 = result_1
        Botan::base64_encode(result_4, var_70_1 - result_4)
        
        while (true)
            uint64_t x8_8 = zx.q(var_1c8[0])
            int64_t x1_6
            
            if ((x8_8.d & 1) != 0)
                int64_t var_1c0
                
                if (var_1c0 == 0)
                    break
                
                x1_6 = var_1c0 - 1
                
                if (zx.d(var_1b8[x1_6]) != 0x3d)
                    break
            else
                if (x8_8.d u< 2)
                    break
                
                x1_6 = (x8_8 u>> 1) - 1
                
                if (zx.d(var_1c8[x1_6 + 1]) != 0x3d)
                    break
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                &var_1c8, x1_6.b)
        
        var_1b0.o = var_1c8.o
        uint64_t x10 = zx.q(var_1b0)
        int64_t var_1c0_1 = 0
        void* var_1b8_1 = nullptr
        __builtin_memset(&var_1c8, 0, 8)
        int32_t temp0 = x10.d & 1
        char* x1_7
        
        if (temp0 == 0)
            x1_7 = &var_1b0 | 1
        else
            x1_7 = var_1b8
        
        uint64_t x2_5
        uint64_t var_1a8
        
        if (temp0 == 0)
            x2_5 = x10 u>> 1
        else
            x2_5 = var_1a8
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_19 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_198, 
                x1_7, x2_5), 
            "$", 1)
        uint8_t* x0_20 = var_90
        Botan::base64_encode(x0_20, var_88_1 - x0_20)
        
        while (true)
            uint64_t x8_16 = zx.q(var_1f8[0])
            int64_t x1_9
            
            if ((x8_16.d & 1) != 0)
                int64_t var_1f0
                
                if (var_1f0 == 0)
                    break
                
                x1_9 = var_1f0 - 1
                
                if (zx.d(var_1e8[x1_9]) != 0x3d)
                    break
            else
                if (x8_16.d u< 2)
                    break
                
                x1_9 = (x8_16 u>> 1) - 1
                
                if (zx.d(var_1f8[x1_9 + 1]) != 0x3d)
                    break
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
                &var_1f8, x1_9.b)
        
        var_1e0.o = var_1f8.o
        uint64_t x10_1 = zx.q(var_1e0)
        int64_t var_1f0_1 = 0
        void* var_1e8_1 = nullptr
        __builtin_memset(&var_1f8, 0, 8)
        int32_t temp1 = x10_1.d & 1
        char* x1_10
        
        if (temp1 == 0)
            x1_10 = &var_1e0 | 1
        else
            x1_10 = var_1e8
        
        uint64_t x2_7
        uint64_t var_1d8
        
        if (temp1 == 0)
            x2_7 = x10_1 u>> 1
        else
            x2_7 = var_1d8
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_19, x1_10, 
            x2_7)
        
        if ((zx.d(var_1e0) & 1) == 0)
            if ((zx.d(var_1f8[0]) & 1) != 0)
                goto label_caa664
            
            goto label_caa5a8
        
        operator delete(var_1e8)
        
        if ((zx.d(var_1f8[0]) & 1) != 0)
        label_caa664:
            operator delete(var_1e8_1)
            
            if ((zx.d(var_1b0) & 1) == 0)
                goto label_caa5b0
            
            goto label_caa674
        
    label_caa5a8:
        
        if ((zx.d(var_1b0) & 1) != 0)
        label_caa674:
            operator delete(var_1b8)
            
            if ((zx.d(var_1c8[0]) & 1) != 0)
                operator delete(var_1b8_1)
        else
        label_caa5b0:
            
            if ((zx.d(var_1c8[0]) & 1) != 0)
                operator delete(var_1b8_1)
        
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
        var_128 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x40
        var_198 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x18
        void* __offset(
            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x10) var_190_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x10
        
        if ((zx.d(var_150_1) & 1) != 0)
            operator delete(var_140_1)
        
        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
        uint8_t* x0_25 = var_90
        
        if (x0_25 != 0)
            uint8_t* var_88_2 = x0_25
            operator delete(x0_25)
        
        uint8_t* result = result_1
        
        if (result == 0)
            return result
        
        uint8_t* result_2 = result
        return operator delete(result)
    
    if ((x27_1 & 0xffffffff80000000) == 0)
        uint8_t* x0_3 = operator new(x27_1)
        x28_1 = &x0_3[x27_1]
        x26_1 = x0_3
        var_90 = x0_3
        void* var_80_1 = x28_1
        memset(x0_3, 0, x27_1)
        var_88_1 = x28_1
        goto label_caa2c0
else
    x27_1 = arg8
    
    if ((arg8 & 0xffffffff80000000) == 0)
        uint8_t* result_3 = operator new(x27_1)
        fp_1 = &result_3[x27_1]
        result_8 = result_3
        result_1 = result_3
        void* var_68_1 = fp_1
        memset(result_3, 0, x27_1)
        var_70_1 = fp_1
        goto label_caa274
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_29 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_1e0) & 1) == 0)
    if ((zx.d(var_1f8[0]) & 1) != 0)
        goto label_caa760
    
    goto label_caa6ac

void* var_1d0
operator delete(var_1d0)

if ((zx.d(var_1f8[0]) & 1) != 0)
label_caa760:
    operator delete(var_1e8)
    
    if ((zx.d(var_1b0) & 1) == 0)
        goto label_caa6b4
    
    goto label_caa770

label_caa6ac:

if ((zx.d(var_1b0) & 1) != 0)
label_caa770:
    void* var_1a0
    operator delete(var_1a0)
    
    if ((zx.d(var_1c8[0]) & 1) != 0)
        operator delete(var_1b8)
else
label_caa6b4:
    
    if ((zx.d(var_1c8[0]) & 1) != 0)
        operator delete(var_1b8)

var_128 = arg3 + 0x40
var_198 = arg3 + 0x18
int64_t var_190_2 = x27_1 + 0x10
char var_150
void* var_140

if ((zx.d(var_150) & 1) != 0)
    operator delete(var_140)
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
uint8_t* x0_37 = var_90

if (x0_37 != 0)
    uint8_t* var_88_3 = x0_37
    operator delete(x0_37)

uint8_t* result_5 = result_1

if (result_5 != 0)
    uint8_t* result_7 = result_5
    operator delete(result_5)

sub_1101e04(x0_29)
noreturn
