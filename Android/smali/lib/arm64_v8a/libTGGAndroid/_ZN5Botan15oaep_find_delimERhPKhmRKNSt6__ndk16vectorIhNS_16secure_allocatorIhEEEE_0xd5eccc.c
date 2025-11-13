// 函数: _ZN5Botan15oaep_find_delimERhPKhmRKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd5eccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg4
void* i_1 = *(arg4 + 8) - x9
int64_t* entry_x8

if ((1 | (0x7fffffffffffffff & i_1) << 1) u> arg3)
    __builtin_memset(entry_x8, 0, 0x18)
    return 

int64_t x8 = i_1 << 1
char var_48_1
int32_t x11_2

if (x8 u>= arg3)
    x11_2 = 0xff
    var_48_1 = 0
    
    if (i_1 != 0)
    label_d5ed88:
        void* x12_2 = arg2 + i_1
        void* i
        
        do
            char x13_4 = *x12_2
            x12_2 += 1
            char x14_3 = *x9
            x9 = &x9[1]
            i = i_1
            i_1 -= 1
            var_48_1 |= x14_3 ^ x13_4
        while (i != 1)
else
    int32_t x11_1 = 0
    int32_t x14_1 = 0xff
    int64_t x12_1 = x8
    int32_t x13_3
    
    do
        uint32_t x13_1 = zx.d(arg2[x12_1])
        x12_1 += 1
        int32_t x15_3 = ((x13_1 - 1) & not.d(x13_1) & 0x80) << 0x18 s>> 0x1f
        x13_3 = x15_3 & x14_1
        x11_1 |= x14_1 & not.d(x15_3 | sx.d(((x13_1.b ^ 1) - 1) & (not.d(x13_1)).b) s>> 7)
        x8 += zx.q(x13_3) & 1
        x14_1 = x13_3
    while (x12_1 u< arg3)
    
    x11_2 = x13_3 | x11_1
    var_48_1 = 0
    
    if (i_1 != 0)
        goto label_d5ed88

uint32_t x9_1 = zx.d(var_48_1)
int32_t x8_3 = ((x9_1 - 1) & not.d(x9_1) & 0x80) << 0x18 s>> 0x1f
int32_t x8_5 = x11_2 | ((x8_3 - 1) & not.d(x8_3)) s>> 7
*arg1 = (not.d(x8_5)).b
Botan::CT::copy_output(zx.q(x8_5.b), arg2, arg3, x8 + 1)
void* x20_1 = var_48_1.q
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_40
uint64_t x21_1 = var_40 - x20_1

if (var_40 != x20_1)
    if ((x21_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x0_2 = Botan::allocate_memory(x21_1, 1)
    int64_t x22_1 = x0_2 + x21_1
    *entry_x8 = x0_2
    entry_x8[1] = x0_2
    entry_x8[2] = x22_1
    memcpy(x0_2, x20_1, x21_1)
    entry_x8[1] = x22_1

int64_t var_38

if (x20_1 != 0)
    Botan::deallocate_memory(x20_1, var_38 - x20_1, 1)
