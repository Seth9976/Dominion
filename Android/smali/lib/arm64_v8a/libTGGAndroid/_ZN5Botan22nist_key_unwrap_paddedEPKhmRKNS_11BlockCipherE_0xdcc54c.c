// 函数: _ZN5Botan22nist_key_unwrap_paddedEPKhmRKNS_11BlockCipherE
// 地址: 0xdcc54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50

if ((*(*arg3 + 0x30))(arg3) != 0x10)
    void** x0_14 = __cxa_allocate_exception(0x20)
    int64_t x0_15
    int128_t v0_2
    x0_15, v0_2 = operator new(0x40)
    v0_2 = data_71d0c0
    int64_t var_40_1 = x0_15
    __builtin_strncpy(x0_15, "NIST key wrap algorithm requires a 128-bit cipher", 0x32)
    var_50 = v0_2
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (arg2 u< 0x10 || (arg2 & 7) != 0)
    void** x0_19 = __cxa_allocate_exception(0x20)
    int64_t x0_20
    int128_t v0_3
    x0_20, v0_3 = operator new(0x30)
    v0_3 = data_71d3f0
    int64_t var_40_2 = x0_20
    __builtin_strncpy(x0_20, "Bad input size for NIST key unwrap", 0x23)
    var_50 = v0_3
    *x0_19 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_19[1])
    *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t var_28 = 0
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char var_68
void* var_40
void* result
uint64_t x10

if (arg2 != 0x10)
    sub_dcbd24(&var_50, arg1, arg2, arg3, &var_28)
    result = *entry_x8
    
    if (result != 0)
        int64_t x8_6 = entry_x8[2]
        entry_x8[1] = result
        int128_t v0_1
        result, v0_1 = Botan::deallocate_memory(result, x8_6 - result, 1)
        __builtin_memset(entry_x8, 0, 0x18)
    
    x10 = var_28
    *entry_x8 = var_50
    entry_x8[2] = var_40
else
    int128_t* x0_2
    int128_t v0
    x0_2, v0 = Botan::allocate_memory(0x10, 1)
    *x0_2 = *arg1
    (*(*arg3 + 0x50))(arg3, x0_2, x0_2, 0x10 u/ (*(*arg3 + 0x30))(arg3))
    int64_t* x8_5 = *entry_x8
    uint64_t x20_1 = *x0_2
    void* x9_3 = entry_x8[1] - x8_5
    
    if (x9_3 u<= 7)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)
        x8_5 = *entry_x8
    else if (x9_3 != 8)
        entry_x8[1] = &x8_5[1]
    
    if (x8_5 == 0)
        int64_t* x0_34 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        std::exception::~exception()
        
        if ((zx.d(var_50.b) & 1) != 0)
            operator delete(var_40)
        
        int128_t var_67
        
        if ((zx.d(var_68) & 1) != 0)
            operator delete(var_67:0xf.q)
        __cxa_free_exception(x0_2)
        void* x0_39 = *entry_x8
        
        if (x0_39 != 0)
            int64_t x8_25 = entry_x8[2]
            entry_x8[1] = x0_39
            Botan::deallocate_memory(x0_39, x8_25 - x0_39, 1)
        
        sub_1101e04(x0_34)
        noreturn
    
    *x8_5 = *(x0_2 + 8)
    result = Botan::deallocate_memory(x0_2, 0x10, 1)
    x10 = _byteswap(x20_1)

if (0xa65959a6 != x10 u>> 0x20)
    void** x0_24 = __cxa_allocate_exception(0x20)
    __builtin_strncpy(&var_68, ",NIST key unwrap failed", 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Invalid authentication tag: ", &var_68)
    *x0_24 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_24[1])
    
    if ((zx.d(var_50.b) & 1) != 0)
        operator delete(var_40)
    
    *x0_24 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::Invalid_Authentication_Tag, 
        Botan::Exception::~Exception)
    noreturn

int64_t x8_8 = *entry_x8
int64_t x11 = entry_x8[1]
int64_t x9_6 = x11 - x8_8

if (x9_6 u>= 8)
    int64_t x10_1 = x10 & 0xffffffff
    
    if (x9_6 u>= x10_1 && x10_1 u>= x9_6 - 8)
        if (x9_6 != x10_1)
            int64_t i_1 = x8_8 + x10_1 - x11
            char* x11_1 = x11 - 1
            int64_t i
            
            do
                if (zx.d(*x11_1) != 0)
                    void** x0_9 = __cxa_allocate_exception(0x20)
                    __builtin_strncpy(&var_68, ",NIST key unwrap failed", 0x18)
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "Invalid authentication tag: ", &var_68)
                    *x0_9 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_9[1])
                    
                    if ((zx.d(var_50.b) & 1) != 0)
                        operator delete(var_40)
                    
                    *x0_9 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
                    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Authentication_Tag, 
                        Botan::Exception::~Exception)
                    noreturn
                
                i = i_1
                i_1 += 1
                x11_1 -= 1
            while (i u< -1)
        
        if (x9_6 u> x10_1)
            entry_x8[1] = x8_8 + x10_1
        
        return result

void** x0_29 = __cxa_allocate_exception(0x20)
__builtin_strncpy(&var_68, ",NIST key unwrap failed", 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_68)
*x0_29 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_29[1])

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)

*x0_29 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_29, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
