// 函数: _ZNK5Botan24Certificate_Store_In_SQL12all_subjectsEv
// 地址: 0xcfa5dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_DN** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int64_t* x20 = *(entry_x0 + 0x10)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "SELECT subject_dn FROM ", entry_x0 + 0x20)
char var_e8
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_e8)
void* x8 = x0_1[1].q
int128_t var_b0 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
(**x20)(x20, &var_b0)

if ((zx.d(var_b0.b) & 1) != 0)
    operator delete(x8)

void* var_d8

if ((zx.d(var_e8) & 1) != 0)
    operator delete(var_d8)

int64_t result

while (true)
    int64_t* var_70
    result = (*(*var_70 + 0x48))()
    
    if ((result.d & 1) == 0)
        break
    
    uint64_t x0_7
    int64_t x1_3
    x0_7, x1_3 = (*(*var_70 + 0x28))(var_70, 0)
    Botan::BER_Decoder::BER_Decoder(&var_b0, x0_7)
    var_e8.q = _vtable_for_Botan::X509_DN + 0x10
    int128_t var_d0
    __builtin_memset(&var_d0, 0, 0x20)
    void* var_e0_1 = (zx.o(0)).q
    Botan::X509_DN::decode_from(&var_e8)
    Botan::X509_DN* x21_1 = entry_x8[1]
    
    if (x21_1 == entry_x8[2])
        std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::__push_back_slow_path<Botan::X509_DN const&>(
            entry_x8)
    else
        Botan::X509_DN::X509_DN(x21_1)
        entry_x8[1] = x21_1 + 0x38
    
    void* x0_12 = var_d0:8.q
    var_e8.q = _vtable_for_Botan::X509_DN + 0x10
    
    if (x0_12 != 0)
        int128_t var_c0_1
        var_c0_1.q = x0_12
        operator delete(x0_12)
    
    if (var_e0_1 != 0)
        void* x28_1 = var_d8
        void* x0_13
        
        if (x28_1 != var_e0_1)
            bool cond:0_1
            
            do
                uint32_t x8_11 = zx.d(*(x28_1 - 0x20))
                *(x28_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                
                if ((x8_11 & 1) != 0)
                    operator delete(*(x28_1 - 0x10))
                
                void* x0_15 = *(x28_1 - 0x38)
                
                if (x0_15 != 0)
                    *(x28_1 - 0x30) = x0_15
                    operator delete(x0_15)
                
                void* x0_16 = *(x28_1 - 0x58)
                *(x28_1 - 0x60) = _vtable_for_Botan::OID + 0x10
                
                if (x0_16 != 0)
                    *(x28_1 - 0x50) = x0_16
                    operator delete(x0_16)
                
                cond:0_1 = var_e0_1 == x28_1 - 0x60
                x28_1 -= 0x60
            while (not(cond:0_1))
            x0_13 = var_e0_1
        else
            x0_13 = var_e0_1
        
        var_d8 = var_e0_1
        operator delete(x0_13)
    
    int64_t* var_80
    int64_t* x0_17 = var_80
    var_80 = nullptr
    
    if (x0_17 != 0)
        (*(*x0_17 + 0x38))()
    
    if (x8 != 0)
        void* var_98_1 = x8
        int64_t var_90
        Botan::deallocate_memory(x8, var_90 - x8, 1)

int64_t* var_68

if (var_68 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&var_68[1])
        i = __stlxr(x9_1 - 1, &var_68[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*var_68 + 0x10))(var_68)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
