// 函数: _ZN5Botan12Stateful_RNG12reseed_checkEv
// 地址: 0xe3aa18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = getpid()
int64_t* entry_x0
int32_t x8 = entry_x0[9].d
int32_t x23 = (x8 != 0 ? 1 : 0) & (x0 != x8 ? 1 : 0)
std::__ndk1::recursive_mutex::lock()
int64_t x22 = entry_x0[0xa]
int64_t result = std::__ndk1::recursive_mutex::unlock()
int64_t x8_2

if ((x23 & 1) == 0 && x22 != 0)
    x8_2 = entry_x0[0xa]

char var_68
char var_50
void* var_40

if ((x23 & 1) == 0 && x22 != 0 && entry_x0[8] - 1 u>= x8_2)
    if (x8_2 == 0)
        int64_t* x0_25 = Botan::assertion_failure("m_reseed_counter != 0", "RNG is seeded", 
            "reseed_check", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x12807)
        std::exception::~exception()
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
        
        void* var_58
        
        if ((zx.d(var_68) & 1) != 0)
            operator delete(var_58)
        __cxa_free_exception(entry_x0)
        sub_1101e04(x0_25)
        noreturn
    
    entry_x0[0xa] = x8_2 + 1
else
    uint64_t x22_1 = entry_x0[6]
    entry_x0[0xa] = 0
    entry_x0[9].d = x0
    
    if (x22_1 != 0)
        int64_t x0_4 = (*(*entry_x0 + 0x60))(entry_x0)
        std::__ndk1::recursive_mutex::lock()
        Botan::RandomNumberGenerator::reseed_from_rng(entry_x0, x22_1)
        
        if ((*(*entry_x0 + 0x60))(entry_x0) u<= x0_4)
            entry_x0[0xa] = 1
        
        std::__ndk1::recursive_mutex::unlock()
    
    int64_t x21_2 = entry_x0[7]
    
    if (x21_2 != 0)
        (*(*entry_x0 + 0x50))(entry_x0, x21_2, (*(*entry_x0 + 0x60))(entry_x0), 0x32)
    
    std::__ndk1::recursive_mutex::lock()
    int64_t x21_3 = entry_x0[0xa]
    result = std::__ndk1::recursive_mutex::unlock()
    
    if (x21_3 == 0)
        void** x0_15 = __cxa_allocate_exception(0x20)
        
        if (x23 != 0)
            int64_t x0_16
            int128_t v0
            x0_16, v0 = operator new(0x30)
            (*"nnot reseed DRBG")[0].o
            int64_t var_40_1 = x0_16
            v0 = data_71cfc0
            __builtin_strncpy(x0_16, "Detected use of fork but cannot reseed DRBG", 0x2c)
            var_50.o = v0
            *x0_15 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_15[1])
            *x0_15 = _vtable_for_Botan::Invalid_State + 0x10
            __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
            noreturn
        
        (*(*entry_x0 + 0x38))(entry_x0)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "PRNG not seeded: ", &var_68)
        *x0_15 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_15[1])
        *x0_15 = _vtable_for_Botan::Invalid_State + 0x10
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
        
        *x0_15 = _vtable_for_Botan::PRNG_Unseeded + 0x10
        __cxa_throw(x0_15, _typeinfo_for_Botan::PRNG_Unseeded, Botan::Exception::~Exception)
        noreturn
return result
