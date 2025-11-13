// 函数: _ZN5Botan15rfc3394_keywrapERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKNS_11OctetStringE
// 地址: 0xe01234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *(arg2 + 8) - *arg2
int128_t var_50
void* var_40
uint8_t* result_1

if (x9_1 u<= 0x20 && (1 << x9_1 & 0x101010000) != 0)
    std::__ndk1::to_string(x9_1 << 3)
    char var_68
    int128_t* x0_2
    int128_t v0_1
    x0_2, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_68, nullptr)
    var_40 = x0_2[1].q
    var_50 = *x0_2
    __builtin_memset(x0_2, 0, 0x18)
    void* var_58
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    var_68.w = 0
    Botan::BlockCipher::create_or_throw(&var_50, &var_68)
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    *(arg2 + 8)
    Botan::SymmetricAlgorithm::set_key(result_1, *arg2)
    uint8_t* x0_7 = *arg1
    Botan::nist_key_wrap(x0_7, *(arg1 + 8) - x0_7, result_1)
    char* x20_2 = var_68.q
    int64_t* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    void* var_60
    uint64_t x21_2 = var_60 - x20_2
    
    if (var_60 == x20_2)
    label_e013c0:
        
        if (x20_2 != 0)
            char* var_60_1 = x20_2
            operator delete(x20_2)
        
        uint8_t* result = result_1
        int64_t var_28 = 0
        
        if (result != 0)
            result = (*(*result + 8))()
        
        if ((zx.d(var_50.b) & 1) == 0)
            return result
        
        return operator delete(var_40)
    
    if ((x21_2 & 0xffffffff80000000) == 0)
        void* x0_9
        int128_t v0_2
        int128_t v1_1
        x0_9, v0_2, v1_1 = Botan::allocate_memory(x21_2, 1)
        *entry_x8 = x0_9
        entry_x8[1] = x0_9
        entry_x8[2] = x0_9 + x21_2
        void* x8_9
        
        if (x20_2 == var_60)
            x8_9 = x0_9
        else if (x21_2 u< 0x20 || (x0_9 u< var_60 && x20_2 u< var_60 + x0_9 - x20_2))
        label_e0139c:
            x8_9 = x0_9
            
            do
                char x9_2 = *x20_2
                x20_2 = &x20_2[1]
                *x8_9 = x9_2
                x8_9 += 1
            while (var_60 != x20_2)
        else
            int64_t i_2 = x21_2 & 0xffffffffffffffe0
            void* x10_1 = &x20_2[0x10]
            x8_9 = x0_9 + i_2
            x20_2 = &x20_2[i_2]
            void* x11_1 = x0_9 + 0x10
            int64_t i_1 = i_2
            int64_t i
            
            do
                v0_2 = *(x10_1 - 0x10)
                v1_1 = *x10_1
                x10_1 += 0x20
                i = i_1
                i_1 -= 0x20
                *(x11_1 - 0x10) = v0_2
                *x11_1 = v1_1
                x11_1 += 0x20
            while (i != 0x20)
            x0_9 = x8_9
            
            if (x21_2 != i_2)
                goto label_e0139c
        
        x20_2 = var_68.q
        entry_x8[1] = x8_9
        goto label_e013c0
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_13 = Botan::throw_invalid_argument("Invalid KEK length for NIST key wrap", 
    "rfc3394_keywrap", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
int64_t var_28_1 = 0

if (result_1 != 0)
    (*(*result_1 + 8))()

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)

sub_1101e04(x0_13)
noreturn
