// 函数: _ZN5Botan4GMAC12final_resultEPh
// 地址: 0xd83130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(arg1[0x40]) == 0)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0
    x0_9, v0 = operator new(0x30)
    v0 = data_71b7f0
    int64_t var_30_1 = x0_9
    __builtin_strncpy(x0_9, "GMAC was not used with a fresh nonce", 0x25)
    int128_t var_40_1 = v0
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x3 = *(arg1 + 0x38)

if (x3 != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0 = *(arg1 + 0x18)
    
    if (*(x0 + 0x40) - *(x0 + 0x38) != 0x10)
        int64_t* x0_13 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
        char var_40
        void* var_30
        
        if ((zx.d(var_40) & 1) != 0)
            operator delete(var_30)
        sub_1101e04(x0_13)
        noreturn
    
    uint64_t x2_1 = *(arg1 + 0x20)
    *(x0 + 0x98) += x3
    Botan::GHASH::ghash_update(x0, x0 + 0x38, x2_1)

uint64_t entry_x1
Botan::GHASH::final(*(arg1 + 0x18), entry_x1)
(*(**(arg1 + 0x10) + 0x10))()
void* x21 = *(arg1 + 0x18)
int64_t x0_3 = *(x21 + 8)
int64_t x8_7 = *(x21 + 0x10)

if (x8_7 != x0_3)
    memset(x0_3, 0, x8_7 - x0_3)
    x0_3 = *(x21 + 8)

*(x21 + 0x10) = x0_3
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::shrink_to_fit()
int64_t x0_5 = *(x21 + 0x68)
int64_t x8_8 = *(x21 + 0x70)

if (x8_8 != x0_5)
    memset(x0_5, 0, x8_8 - x0_5)
    x0_5 = *(x21 + 0x68)

*(x21 + 0x70) = x0_5
std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
int64_t x0_7 = *(x21 + 0x20)
int64_t x8_9 = *(x21 + 0x28)

if (x8_9 != x0_7)
    memset(x0_7, 0, x8_9 - x0_7)

int64_t x8_10 = *(x21 + 0x38)
int64_t x9_2 = *(x21 + 0x50)
*(x21 + 0x98) = 0
*(x21 + 0xa0) = 0
*(x21 + 0x40) = x8_10
*(x21 + 0x58) = x9_2
int64_t result = *(arg1 + 0x20)
int64_t x8_11 = *(arg1 + 0x28)

if (x8_11 != result)
    result = memset(result, 0, x8_11 - result)

*(arg1 + 0x38) = 0
arg1[0x40] = 0
return result
