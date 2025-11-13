// 函数: _ZNK5Botan3TLS19Server_Key_Exchange6verifyERKNS_10Public_KeyERKNS0_15Handshake_StateERKNS0_6PolicyE
// 地址: 0xe53320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x3
(*(*entry_x3 + 0xe0))(entry_x3)
Botan::TLS::Handshake_State::parse_sig_format(arg3, arg2, (*(arg1 + 0x50)).b, nullptr)
void* x24 = *(arg3 + 0x100)
uint64_t var_98
__builtin_memset(&var_98, 0, 0x18)
int64_t x9 = *(x24 + 0x28)
int64_t x8_2 = *(x24 + 0x30)
uint64_t x23 = x8_2 - x9
uint64_t var_90_1
uint64_t var_88_1
char var_80
void* var_70
uint64_t x22_1
uint64_t x26

if (x8_2 == x9)
    x26 = 0
    x22_1 = 0
else
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_20 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        uint64_t x0_21 = var_98
        
        if (x0_21 != 0)
            uint64_t var_90_5 = x0_21
            operator delete(x0_21)
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_70)
        
        sub_1101e04(x0_20)
        noreturn
    
    uint64_t x0_3 = operator new(x23)
    x26 = x0_3 + x23
    var_98 = x0_3
    uint64_t var_90_2 = x0_3
    var_88_1 = x26
    int64_t x1_1 = *(x24 + 0x28)
    x22_1 = x0_3
    x23 = x0_3
    size_t x24_1 = *(x24 + 0x30) - x1_1
    
    if (x24_1 s>= 1)
        memcpy(x22_1, x1_1, x24_1)
        x23 = x22_1 + x24_1
    
    var_90_1 = x23

void* x27 = *(arg3 + 0x108)
size_t x24_2 = x23 - x22_1
uint64_t x25 = *(x27 + 0x30) - *(x27 + 0x28) + x24_2

if (x26 - x22_1 u< x25)
    uint64_t x0_6 = operator new(x25)
    x23 = x0_6 + x24_2
    
    if (x24_2 s>= 1)
        memcpy(x0_6, x22_1, x24_2)
    
    var_98 = x0_6
    var_90_1 = x23
    var_88_1 = x0_6 + x25
    
    if (x22_1 != 0)
        operator delete(x22_1)
        x23 = var_90_1

*(x27 + 0x30)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_98, x23, *(x27 + 0x28))
uint64_t x25_2 = var_98
uint64_t x24_3 = var_90_1
int64_t x23_1 = *(arg1 + 0x20)
size_t x26_2 = x24_3 - x25_2
uint64_t x28 = *(arg1 + 0x28) - x23_1 + x26_2

if (var_88_1 - x25_2 u< x28)
    uint64_t x0_11 = operator new(x28)
    x24_3 = x0_11 + x26_2
    
    if (x26_2 s>= 1)
        memcpy(x0_11, x25_2, x26_2)
    
    var_98 = x0_11
    uint64_t var_88_2 = x0_11 + x28
    
    if (x25_2 != 0)
        operator delete(x25_2)
        x23_1 = *(arg1 + 0x20)
        *(arg1 + 0x28)

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_98, x24_3, x23_1)
int64_t* x0_15 = *(arg3 + 8)
int32_t var_68
int32_t x0_16 = (*(*x0_15 + 0x58))(x0_15, arg2, &var_80, zx.q(var_68), &var_98, arg1 + 0x38)
uint64_t x0_17 = var_98

if (x0_17 != 0)
    uint64_t var_90_4 = x0_17
    operator delete(x0_17)

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

return zx.q(x0_16) & 1
