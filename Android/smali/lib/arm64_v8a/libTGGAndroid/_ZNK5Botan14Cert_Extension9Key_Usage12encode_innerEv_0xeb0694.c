// 函数: _ZNK5Botan14Cert_Extension9Key_Usage12encode_innerEv
// 地址: 0xeb0694
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x22 = *(entry_x0 + 8)
int128_t var_80
char var_68
void* var_58

if (x22 == 0)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_3
    x0_14, v0_3 = operator new(0x30)
    int64_t var_70_1 = x0_14
    var_80 = data_71b7f0
    __builtin_strncpy(x0_14, "Cannot encode zero usage constraints", 0x25)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_80)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    *x0_13 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* x0 = operator new(1)
*x0 = 3
*entry_x8 = x0
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
int32_t x9_3 = ((x22 & 0xffff) - 1) u>> 0x1b & 0x10
uint32_t x10 = x22 u>> x9_3
char x8_3 = *x0
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
*entry_x8 = x0_1
*x0_1 = x8_3
int32_t x8_7 = ((x10 & 0xff) - 1) u>> 0x1c & 8
uint32_t x8_8 = x10 u>> x8_7
int32_t x10_4 = ((x8_8 & 0xf) - 1) u>> 0x1d & 4
uint32_t x8_9 = x8_8 u>> x10_4
int32_t x10_8 = ((x8_9 & 3) - 1) u>> 0x1e & 2
int32_t x22_1 = ((x9_3 & 0xfffffffe) | ((x22 - 1) & not.d(x22) & 0x80000000) u>> 0x1f | x8_7 | x10_4
    | x10_8) + (((x8_9 u>> x10_8 & 1) - 1) u>> 0x1f)
char x8_13

x8_13 = x22_1 u< 8 ? 3 : 2

x0_1[1] = x8_13
*(entry_x8 + 8) = v0 + v1
void* result = operator delete(x0)
char* x25 = entry_x8[1]
int64_t x9_8 = entry_x8[2]
char x26 = x22_1.b & 7
void* x25_1

if (x25 u>= x9_8)
    void* x21_1 = *entry_x8
    size_t x22_2 = x25 - x21_1
    
    if (x22_2 + 1 s>= 0)
        void* x9_9 = x9_8 - x21_1
        int64_t x11_1 = x9_9 << 1
        int64_t x8_15
        
        if (x11_1 u< x22_2 + 1)
            x8_15 = x22_2 + 1
        else
            x8_15 = x11_1
        
        int64_t x24_1
        
        x24_1 = x9_9 u< 0x3fffffffffffffff ? x8_15 : 0x7fffffffffffffff
        
        void* result_2
        
        if (x24_1 == 0)
            result_2 = nullptr
        else
            result = operator new(x24_1)
            result_2 = result
        
        void* x25_2 = result_2 + x22_2
        *x25_2 = x26
        x25_1 = x25_2 + 1
        
        if (x22_2 s>= 1)
            result = memcpy(result_2, x21_1, x22_2)
        
        *entry_x8 = result_2
        entry_x8[1] = x25_1
        entry_x8[2] = result_2 + x24_1
        
        if (x21_1 != 0)
            result = operator delete(x21_1)
            x25_1 = entry_x8[1]
        
        goto label_eb0834
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    *x25 = x26
    x25_1 = &x25[1]
    entry_x8[1] = x25_1
label_eb0834:
    int64_t x8_16 = entry_x8[2]
    int32_t x26_1 = *(entry_x0 + 8)
    
    if (x25_1 u>= x8_16)
        void* x21_2 = *entry_x8
        void* x22_3 = x25_1 - x21_2
        
        if (x22_3 + 1 s>= 0)
            void* x8_18 = x8_16 - x21_2
            int64_t x11_2 = x8_18 << 1
            int64_t x9_11
            
            if (x11_2 u< x22_3 + 1)
                x9_11 = x22_3 + 1
            else
                x9_11 = x11_2
            
            int64_t x24_3
            
            x24_3 = x8_18 u< 0x3fffffffffffffff ? x9_11 : 0x7fffffffffffffff
            
            void* result_3
            
            if (x24_3 == 0)
                result_3 = nullptr
            else
                result = operator new(x24_3)
                result_3 = result
            
            void* x25_4 = result_3 + x22_3
            *x25_4 = (x26_1 u>> 8).b
            
            if (x22_3 s>= 1)
                result = memcpy(result_3, x21_2, x22_3)
            
            *entry_x8 = result_3
            entry_x8[1] = x25_4 + 1
            entry_x8[2] = result_3 + x24_3
            
            if (x21_2 != 0)
                result = operator delete(x21_2)
            
            goto label_eb08d8
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        *x25_1 = (x26_1 u>> 8).b
        entry_x8[1] = x25_1 + 1
    label_eb08d8:
        uint32_t x24_5 = zx.d(*(entry_x0 + 8))
        
        if (x24_5 == 0)
            return result
        
        uint8_t* x8_20 = entry_x8[1]
        int64_t x9_12 = entry_x8[2]
        
        if (x8_20 u< x9_12)
            *x8_20 = x24_5.b
            entry_x8[1] = &x8_20[1]
            return result
        
        void* x20_1 = *entry_x8
        size_t x21_3 = x8_20 - x20_1
        
        if (x21_3 + 1 s>= 0)
            void* x9_13 = x9_12 - x20_1
            uint64_t x11_3 = x9_13 << 1
            uint64_t x8_23
            
            if (x11_3 u< x21_3 + 1)
                x8_23 = x21_3 + 1
            else
                x8_23 = x11_3
            
            uint64_t x23_1
            
            x23_1 = x9_13 u< 0x3fffffffffffffff ? x8_23 : 0x7fffffffffffffff
            
            void* const result_1
            
            if (x23_1 == 0)
                result_1 = nullptr
            else
                result = operator new(x23_1)
                result_1 = result
            
            uint8_t* x25_6 = result_1 + x21_3
            *x25_6 = x24_5.b
            
            if (x21_3 s>= 1)
                result = memcpy(result_1, x20_1, x21_3)
            
            *entry_x8 = result_1
            entry_x8[1] = &x25_6[1]
            entry_x8[2] = result_1 + x23_1
            
            if (x20_1 != 0)
                return operator delete(x20_1) __tailcall
            
            return result
int64_t* x0_22 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
std::exception::~exception()

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
__cxa_free_exception(entry_x8)
sub_1101e04(x0_22)
noreturn
