// 函数: _ZN5Botan18Ed25519_PrivateKeyC2ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd45e20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = entry_x1[1]
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = entry_x1[2]
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_2 = *entry_x1
*arg1 = x8_2
*(arg1 + *(x8_2 - 0x88)) = entry_x1[3]
*(arg1 + *(*arg1 - 0x90)) = entry_x1[4]
__builtin_memset(arg1 + 0x20, 0, 0x18)
int64_t* entry_x2
uint8_t* x1 = *entry_x2
void* x8_6 = entry_x2[1] - x1

if (x8_6 != 0x20)
    if (x8_6 != 0x40)
        void** x0_11 = __cxa_allocate_exception(0x20)
        int64_t x0_12
        int128_t v0
        x0_12, v0 = operator new(0x30)
        v0 = data_71b7f0
        int64_t var_70 = x0_12
        __builtin_strncpy(x0_12, "Invalid size for Ed25519 private key", 0x25)
        int128_t var_80 = v0
        *x0_11 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_11[1])
        *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_11, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x8_7
    
    if (arg1 + 0x20 == entry_x2)
        x8_7 = 0
    else
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            arg1 + 0x20, x1)
        x8_7 = *(arg1 + 0x20)
        *(arg1 + 0x28)
    
    return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<std::__ndk1::__wrap_iter<uint8_t*> >(
        arg1 + 8, x8_7 + 0x20)

void* x23_2 = *(arg1 + 8)
int64_t x0_1 = *(arg1 + 0x10)
size_t x24_1 = x0_1 - x23_2

if (x24_1 u> 0x1f)
    if (x24_1 != 0x20)
        *(arg1 + 0x10) = x23_2 + 0x20
    
    goto label_d45f8c

int64_t x8_8 = *(arg1 + 0x18)
uint8_t* x1_2
void* x8_11

if (x8_8 - x0_1 u>= 0x20 - x24_1)
    memset(x0_1, 0, 0x20 - x24_1)
    *(arg1 + 0x10) = x0_1 + 0x20 - x24_1
    x1_2 = *(arg1 + 0x20)
    x8_11 = *(arg1 + 0x28) - x1_2
    
    if (x8_11 u<= 0x3f)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
    label_d45ff0:
        
        if (x8_11 != 0x40)
            *(arg1 + 0x28) = &x1_2[0x40]
else
    void* x8_9 = x8_8 - x23_2
    int64_t x11_1 = x8_9 << 1
    int64_t x9_4
    
    x9_4 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x27_1
    
    x27_1 = x8_9 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
    
    int64_t x0_3 = operator new(x27_1)
    memset(x0_3 + x24_1, 0, 0x20 - x24_1)
    
    if (x24_1 s>= 1)
        memcpy(x0_3, x23_2, x24_1)
    
    *(arg1 + 8) = x0_3
    *(arg1 + 0x10) = x0_3 + 0x20
    *(arg1 + 0x18) = x0_3 + x27_1
    
    if (x23_2 == 0)
    label_d45f8c:
        x1_2 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_2
        
        if (x8_11 u> 0x3f)
            goto label_d45ff0
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
        operator delete(x23_2)
        x1_2 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_2
        
        if (x8_11 u> 0x3f)
            goto label_d45ff0
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
return Botan::ed25519_gen_keypair(*(arg1 + 8), x1_2, *entry_x2)
