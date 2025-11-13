// 函数: _ZN5Botan21Curve25519_PrivateKeyC1ERNS_21RandomNumberGeneratorE
// 地址: 0xd0b0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Curve25519_PrivateKey + 0x98
*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = _vtable_for_Botan::Curve25519_PrivateKey + 0x1f8
*(arg1 + 0x28) = 0
int64_t var_80
__builtin_memset(&var_80, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_80)
int64_t x1_1 = var_80
int64_t var_78
int64_t* entry_x1
int128_t v0
int128_t v1
v0, v1 = (*(*entry_x1 + 0x10))(entry_x1, x1_1, var_78 - x1_1)
void* x0_2 = *(arg1 + 0x20)

if (x0_2 != 0)
    int64_t x8_4 = *(arg1 + 0x30)
    *(arg1 + 0x28) = x0_2
    v0, v1 = Botan::deallocate_memory(x0_2, x8_4 - x0_2, 1)
    __builtin_memset(arg1 + 0x20, 0, 0x18)

void* x20_1 = *(arg1 + 8)
int64_t x0_3 = *(arg1 + 0x10)
*(arg1 + 0x20) = var_80.o
size_t x21 = x0_3 - x20_1
int64_t var_70
*(arg1 + 0x30) = var_70

if (x21 u<= 0x1f)
    int64_t x8_6 = *(arg1 + 0x18)
    
    if (x8_6 - x0_3 u>= 0x20 - x21)
        v0, v1 = memset(x0_3, 0, 0x20 - x21)
        *(arg1 + 0x10) = x0_3 + 0x20 - x21
    else
        void* x8_7 = x8_6 - x20_1
        int64_t x11_1 = x8_7 << 1
        int64_t x9_3
        
        x9_3 = x11_1 u> 0x20 ? x11_1 : 0x20
        
        int64_t x24_1
        
        x24_1 = x8_7 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
        
        int64_t x0_5 = operator new(x24_1)
        v0, v1 = memset(x0_5 + x21, 0, 0x20 - x21)
        
        if (x21 s>= 1)
            v0, v1 = memcpy(x0_5, x20_1, x21)
        
        *(arg1 + 8) = x0_5
        *(arg1 + 0x10) = x0_5 + 0x20
        *(arg1 + 0x18) = x0_5 + x24_1
        
        if (x20_1 != 0)
            v0, v1 = operator delete(x20_1)
else if (x21 != 0x20)
    *(arg1 + 0x10) = x20_1 + 0x20

var_80.o = data_7b0120
var_70.o = data_7b0130
int64_t result = Botan::curve25519_donna(*(arg1 + 8), *(arg1 + 0x20), &var_80)

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
