// 函数: _ZN5Botan7Salsa206set_ivEPKhm
// 地址: 0xe0f538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21
int64_t var_18 = x21
int64_t entry_x2

if (*(arg1 + 0x20) == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else if (entry_x2 u<= 0x18 && (1 << entry_x2 & 0x1000101) != 0)
    Botan::Salsa20::initialize_state()
    
    if (entry_x2 == 8)
        *(*(arg1 + 0x20) + 0x18) = *arg2
        *(*(arg1 + 0x20) + 0x1c) = *(arg2 + 4)
    else if (entry_x2 != 0)
        *(*(arg1 + 0x20) + 0x18) = *arg2
        *(*(arg1 + 0x20) + 0x1c) = *(arg2 + 4)
        *(*(arg1 + 0x20) + 0x20) = *(arg2 + 8)
        *(*(arg1 + 0x20) + 0x24) = *(arg2 + 0xc)
        uint32_t* x0_1 = Botan::allocate_memory(8, 4)
        __builtin_memset(x0_1, 0, 0x20)
        int32_t* x21_1 = x0_1
        Botan::Salsa20::hsalsa20(x0_1, *(arg1 + 0x20))
        *(*(arg1 + 0x20) + 4) = *x21_1
        *(*(arg1 + 0x20) + 8) = x21_1[1]
        *(*(arg1 + 0x20) + 0xc) = x21_1[2]
        *(*(arg1 + 0x20) + 0x10) = x21_1[3]
        *(*(arg1 + 0x20) + 0x18) = *(arg2 + 0x10)
        *(*(arg1 + 0x20) + 0x1c) = *(arg2 + 0x14)
        *(*(arg1 + 0x20) + 0x2c) = x21_1[4]
        *(*(arg1 + 0x20) + 0x30) = x21_1[5]
        *(*(arg1 + 0x20) + 0x34) = x21_1[6]
        *(*(arg1 + 0x20) + 0x38) = x21_1[7]
        Botan::deallocate_memory(x21_1, 8, 4)
    else
        *(*(arg1 + 0x20) + 0x18) = 0
        *(*(arg1 + 0x20) + 0x1c) = 0
    
    *(*(arg1 + 0x20) + 0x20) = 0
    *(*(arg1 + 0x20) + 0x24) = 0
    int64_t result = Botan::Salsa20::salsa_core(*(arg1 + 0x38), *(arg1 + 0x20), 0x14)
    void* x8_22 = *(arg1 + 0x20)
    *(x8_22 + 0x20) += 1
    void* x8_23 = *(arg1 + 0x20)
    int32_t x10 = *(x8_23 + 0x24)
    int32_t x9_20
    
    if (*(x8_23 + 0x20) == 0)
        x9_20 = x10 + 1
    else
        x9_20 = x10
    
    *(x8_23 + 0x24) = x9_20
    *(arg1 + 0x50) = 0
    return result
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_5 = __cxa_allocate_exception(0x20)
char var_48 = 0xe
int32_t var_47
__builtin_strncpy(&var_47, "Salsa20", 8)
Botan::Invalid_IV_Length::Invalid_IV_Length(x0_5, &var_48)
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
noreturn
