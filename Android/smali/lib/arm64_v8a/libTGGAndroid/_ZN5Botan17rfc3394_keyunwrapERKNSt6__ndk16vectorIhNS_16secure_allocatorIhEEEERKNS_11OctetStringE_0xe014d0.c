// 函数: _ZN5Botan17rfc3394_keyunwrapERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKNS_11OctetStringE
// 地址: 0xe014d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *(arg2 + 8) - *arg2
char var_58
void* var_48
char var_40
char const* const x0_9

if (x9_1 u> 0x20 || (1 << x9_1 & 0x101010000) == 0)
    x0_9 = "Invalid KEK length for NIST key wrap"
else
    int64_t x8_3 = *(arg1 + 8) - *arg1
    
    if (x8_3 u>= 0x10 && (x8_3 & 7) == 0)
        std::__ndk1::to_string(x9_1 << 3)
        int128_t* x0_2
        int128_t v0
        x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_58, nullptr)
        void* x8_5 = x0_2[1].q
        var_40.o = *x0_2
        __builtin_memset(x0_2, 0, 0x18)
        
        if ((zx.d(var_58) & 1) != 0)
            operator delete(var_48)
        
        var_58.w = 0
        Botan::BlockCipher::create_or_throw(&var_40, &var_58)
        
        if ((zx.d(var_58) & 1) != 0)
            operator delete(var_48)
        
        *(arg2 + 8)
        uint8_t* result_1
        Botan::SymmetricAlgorithm::set_key(result_1, *arg2)
        uint8_t* x0_7 = *arg1
        Botan::nist_key_unwrap(x0_7, *(arg1 + 8) - x0_7, result_1)
        uint8_t* result = result_1
        int64_t var_60 = 0
        
        if (result != 0)
            result = (*(*result + 8))()
        
        if ((zx.d(var_40) & 1) == 0)
            return result
        
        return operator delete(x8_5)
    
    x0_9 = "Bad input key size for NIST key unwrap"

int64_t* x0_10 = Botan::throw_invalid_argument(x0_9, "rfc3394_keyunwrap", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
sub_1101e04(x0_10)
noreturn
