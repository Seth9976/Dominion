// 函数: _ZN5Botan21Curve25519_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd0b310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
void* x8_1 = *(arg2 + 8)
*arg1 = x8_1
*(arg1 + *(x8_1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_3 = *arg2
*arg1 = x8_3
*(arg1 + *(x8_3 - 0x88)) = *(arg2 + 0x18)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x20)
*(arg1 + *(*arg1 - 0x98)) = *(arg2 + 0x28)
__builtin_memset(arg1 + 0x20, 0, 0x18)
int128_t var_a0
Botan::BER_Decoder::BER_Decoder(&var_a0)
Botan::BER_Decoder::decode(&var_a0, arg1 + 0x20, 4, 4)
int128_t v0_1
int128_t v1_1
int64_t i

do
    void var_a4
    int64_t* var_78
    i, v0_1, v1_1 = (**var_78)(var_78, &var_a4, 1)
while (i != 0)
int64_t var_70_1 = 0
int64_t* var_70

if (var_70 != 0)
    v0_1, v1_1 = (*(*var_70 + 0x38))()

void* var_90

if (var_90 != 0)
    void* var_88_1 = var_90
    int64_t var_80
    v0_1, v1_1 = Botan::deallocate_memory(var_90, var_80 - var_90, 1)

sub_d0a5c4(*(arg1 + 0x28) - *(arg1 + 0x20))
void* x22 = *(arg1 + 8)
int64_t x0_6 = *(arg1 + 0x10)
size_t x23 = x0_6 - x22

if (x23 u<= 0x1f)
    int64_t x8_15 = *(arg1 + 0x18)
    
    if (x8_15 - x0_6 u>= 0x20 - x23)
        v0_1, v1_1 = memset(x0_6, 0, 0x20 - x23)
        *(arg1 + 0x10) = x0_6 + 0x20 - x23
    else
        void* x8_16 = x8_15 - x22
        int64_t x11_1 = x8_16 << 1
        int64_t x9_6
        
        x9_6 = x11_1 u> 0x20 ? x11_1 : 0x20
        
        int64_t x26_1
        
        x26_1 = x8_16 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
        
        int64_t x0_8 = operator new(x26_1)
        v0_1, v1_1 = memset(x0_8 + x23, 0, 0x20 - x23)
        
        if (x23 s>= 1)
            v0_1, v1_1 = memcpy(x0_8, x22, x23)
        
        *(arg1 + 8) = x0_8
        *(arg1 + 0x10) = x0_8 + 0x20
        *(arg1 + 0x18) = x0_8 + x26_1
        
        if (x22 != 0)
            v0_1, v1_1 = operator delete(x22)
else if (x23 != 0x20)
    *(arg1 + 0x10) = x22 + 0x20

uint8_t* x0_12 = *(arg1 + 8)
v1_1 = data_7b0130
uint8_t* x1_6 = *(arg1 + 0x20)
var_a0 = data_7b0120
var_90.o = v1_1
int64_t result = Botan::curve25519_donna(x0_12, x1_6, &var_a0)

if (*(x27 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
