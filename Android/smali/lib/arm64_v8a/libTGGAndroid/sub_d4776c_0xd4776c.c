// 函数: sub_d4776c
// 地址: 0xd4776c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
*arg1 = &_vtable_for_Botan::(anonymous namespace)::Ed25519_Hashed_Verify_Operation{for `Botan::PK_Ops::Verification'}
arg1[1] = 0
arg1[2] = arg2
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int16_t var_70 = 0
Botan::HashFunction::create_or_throw(arg3, &var_70)
int64_t* result = arg1[1]
int64_t var_78
arg1[1] = var_78
void* var_60

if (result == 0)
    int64_t var_78_2 = 0
    
    if ((zx.d(var_70.b) & 1) != 0)
        result = operator delete(var_60)
else
    (*(*result + 0x10))()
    result = nullptr
    int64_t var_78_1 = 0
    
    if ((zx.d(var_70.b) & 1) != 0)
        result = operator delete(var_60)

if ((arg4 & 1) == 0)
    goto label_d47930

int16_t var_50_1 = 1
__builtin_strncpy(&var_70, "SigEd25519 no Ed25519 collisions", 0x20)
int64_t x8_7 = arg1[5]
void* x21_1 = arg1[3]

if (x8_7 - x21_1 u>= 0x22)
    void* x25_1 = arg1[4] - x21_1
    void var_4e
    void* x20_2
    
    if (x25_1 u< 0x22)
        x20_2 = &var_70 + x25_1
    else
        x20_2 = &var_4e
    
    size_t x22_1 = x20_2 - &var_70
    
    if (x20_2 != &var_70)
        result = memmove(x21_1, &var_70, x22_1)
    
    if (x25_1 u> 0x21)
        arg1[4] = x21_1 + x22_1
    else
        int64_t x21_3 = arg1[4]
        size_t x22_2 = &var_4e - x20_2
        
        if (x22_2 s>= 1)
            result = memcpy(x21_3, x20_2, x22_2)
            x21_3 += x22_2
        
        arg1[4] = x21_3
    
    goto label_d47930

if (x21_1 != 0)
    arg1[4] = x21_1
    operator delete(x21_1)
    x8_7 = 0
    __builtin_memset(&arg1[3], 0, 0x18)

uint64_t x9_2 = x8_7 << 1
uint64_t x9_3

x9_3 = x9_2 u> 0x22 ? x9_2 : 0x22

uint64_t x21_2

x21_2 = x8_7 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff

if ((x21_2 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int128_t v1_1
    result, v1_1 = operator new(x21_2)
    arg1[5] = result + x21_2
    result[4].w = var_50_1
    *result = var_70.o
    __builtin_strncpy(&result[2], "25519 collisions", 0x10)
    arg1[3] = result
    arg1[4] = result + 0x22
label_d47930:
    
    if (*(x23 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
