// 函数: _ZN5Botan21Curve25519_PrivateKeyC2ERNS_21RandomNumberGeneratorE
// 地址: 0xd0ae3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
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
int64_t var_90
__builtin_memset(&var_90, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_90)
int64_t x1_1 = var_90
int64_t var_88
int64_t* entry_x2
int128_t v0
int128_t v1
v0, v1 = (*(*entry_x2 + 0x10))(entry_x2, x1_1, var_88 - x1_1)
void* x0_2 = *(arg1 + 0x20)

if (x0_2 != 0)
    int64_t x8_11 = *(arg1 + 0x30)
    *(arg1 + 0x28) = x0_2
    v0, v1 = Botan::deallocate_memory(x0_2, x8_11 - x0_2, 1)
    __builtin_memset(arg1 + 0x20, 0, 0x18)

void* x21_1 = *(arg1 + 8)
int64_t x0_3 = *(arg1 + 0x10)
*(arg1 + 0x20) = var_90.o
size_t x22 = x0_3 - x21_1
int64_t var_80
*(arg1 + 0x30) = var_80

if (x22 u<= 0x1f)
    int64_t x8_13 = *(arg1 + 0x18)
    
    if (x8_13 - x0_3 u>= 0x20 - x22)
        v0, v1 = memset(x0_3, 0, 0x20 - x22)
        *(arg1 + 0x10) = x0_3 + 0x20 - x22
    else
        void* x8_14 = x8_13 - x21_1
        int64_t x11_1 = x8_14 << 1
        int64_t x9_6
        
        x9_6 = x11_1 u> 0x20 ? x11_1 : 0x20
        
        int64_t x25_1
        
        x25_1 = x8_14 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
        
        int64_t x0_5 = operator new(x25_1)
        v0, v1 = memset(x0_5 + x22, 0, 0x20 - x22)
        
        if (x22 s>= 1)
            v0, v1 = memcpy(x0_5, x21_1, x22)
        
        *(arg1 + 8) = x0_5
        *(arg1 + 0x10) = x0_5 + 0x20
        *(arg1 + 0x18) = x0_5 + x25_1
        
        if (x21_1 != 0)
            v0, v1 = operator delete(x21_1)
else if (x22 != 0x20)
    *(arg1 + 0x10) = x21_1 + 0x20

var_90.o = data_7b0120
var_80.o = data_7b0130
int64_t result = Botan::curve25519_donna(*(arg1 + 8), *(arg1 + 0x20), &var_90)

if (*(x27 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
