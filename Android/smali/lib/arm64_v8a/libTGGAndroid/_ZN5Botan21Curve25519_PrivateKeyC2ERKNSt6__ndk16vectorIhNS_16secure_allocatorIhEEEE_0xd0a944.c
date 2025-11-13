// 函数: _ZN5Botan21Curve25519_PrivateKeyC2ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd0a944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int64_t* entry_x1
void* x8_1 = entry_x1[1]
*arg1 = x8_1
*(arg1 + *(x8_1 - 0x88)) = entry_x1[2]
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_3 = *entry_x1
*arg1 = x8_3
*(arg1 + *(x8_3 - 0x88)) = entry_x1[3]
*(arg1 + *(*arg1 - 0x90)) = entry_x1[4]
*(arg1 + *(*arg1 - 0x98)) = entry_x1[5]
__builtin_memset(arg1 + 0x20, 0, 0x18)
int128_t var_90
int64_t* entry_x2

if (entry_x2[1] - *entry_x2 != 0x20)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x30)
    v0_1 = data_71c500
    int64_t var_80_1 = x0_9
    __builtin_strncpy(x0_9, "Invalid size for Curve25519 private key", 0x28)
    var_90 = v0_1
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

void* x23 = *(arg1 + 8)
int64_t x0 = *(arg1 + 0x10)
size_t x24 = x0 - x23

if (x24 u> 0x1f)
    if (x24 != 0x20)
        *(arg1 + 0x10) = x23 + 0x20
    
    goto label_d0aa9c

int64_t x8_11 = *(arg1 + 0x18)
int128_t v1
int128_t v0

if (x8_11 - x0 u>= 0x20 - x24)
    v0, v1 = memset(x0, 0, 0x20 - x24)
    *(arg1 + 0x10) = x0 + 0x20 - x24
    
    if (arg1 + 0x20 != entry_x2)
        entry_x2[1]
        v0, v1 = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            arg1 + 0x20, *entry_x2)
else
    void* x8_12 = x8_11 - x23
    int64_t x11_1 = x8_12 << 1
    int64_t x9_6
    
    x9_6 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x27_1
    
    x27_1 = x8_12 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
    
    int64_t x0_2 = operator new(x27_1)
    v0, v1 = memset(x0_2 + x24, 0, 0x20 - x24)
    
    if (x24 s>= 1)
        v0, v1 = memcpy(x0_2, x23, x24)
    
    *(arg1 + 8) = x0_2
    *(arg1 + 0x10) = x0_2 + 0x20
    *(arg1 + 0x18) = x0_2 + x27_1
    
    if (x23 == 0)
    label_d0aa9c:
        
        if (arg1 + 0x20 != entry_x2)
            entry_x2[1]
            v0, v1 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                arg1 + 0x20, *entry_x2)
    else
        v0, v1 = operator delete(x23)
        
        if (arg1 + 0x20 != entry_x2)
            entry_x2[1]
            v0, v1 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                arg1 + 0x20, *entry_x2)
uint8_t* x0_7 = *(arg1 + 8)
v1 = data_7b0130
uint8_t* x1_2 = *(arg1 + 0x20)
var_90 = data_7b0120
int64_t var_80
var_80.o = v1
int64_t result = Botan::curve25519_donna(x0_7, x1_2, &var_90)

if (*(x28 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
