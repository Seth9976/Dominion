// 函数: sub_f0c63c
// 地址: 0xf0c63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_4 = arg1
int128_t* x0
int128_t v0
int128_t v1
int128_t v2
int128_t v3
x0, v0, v1, v2, v3 = Botan::allocate_memory(0x40, 1)
void* x8 = arg2 + (i_4 << 7)
v1 = *(x8 - 0x10)
v3 = *(x8 - 0x40)
v2 = *(x8 - 0x30)
int64_t i_5 = i_4 << 1
x0[2] = *(x8 - 0x20)
x0[3] = v1
*x0 = v3
x0[1] = v2

if (i_5 != 0)
    int128_t var_80
    
    if (arg3 == 0)
        int128_t v1_3 = *(arg2 + 0x10) ^ x0[1]
        *x0 ^= *arg2
        x0[1] = v1_3
        int128_t v1_4 = *(arg2 + 0x30) ^ x0[3]
        x0[2] ^= *(arg2 + 0x20)
        x0[3] = v1_4
        v2 = x0[1]
        int128_t var_60_2 = x0[2]
        int128_t var_50_2 = x0[3]
        var_80 = *x0
        int128_t var_70_2 = v2
        Botan::Salsa20::salsa_core(x0, &var_80, 8)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_f0c804:
        int64_t* x0_5 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        Botan::deallocate_memory(x0, 0x40, 1)
        sub_1101e04(x0_5)
        noreturn
    
    void* x24_1 = arg2 + 0x20
    void* x25_1 = arg3
    int64_t i
    
    do
        int128_t v1_1 = *(x24_1 - 0x10) ^ x0[1]
        *x0 ^= *(x24_1 - 0x20)
        x0[1] = v1_1
        int128_t v1_2 = *(x24_1 + 0x10) ^ x0[3]
        x0[2] ^= *x24_1
        x0[3] = v1_2
        v2 = x0[1]
        int128_t var_60_1 = x0[2]
        int128_t var_50_1 = x0[3]
        var_80 = *x0
        int128_t var_70_1 = v2
        v0, v1, v2, v3 = Botan::Salsa20::salsa_core(x0, &var_80, 8)
        v1 = x0[3]
        v2 = *x0
        v3 = x0[1]
        i = i_5
        i_5 -= 1
        x24_1 += 0x40
        *(x25_1 + 0x20) = x0[2]
        *(x25_1 + 0x30) = v1
        *x25_1 = v2
        *(x25_1 + 0x10) = v3
        x25_1 += 0x40
    while (i != 1)

if (i_4 == 0)
    return Botan::deallocate_memory(x0, 0x40, 1)

if (arg3 == 0)
    goto label_f0c804

void* x8_1 = arg3
void* x9_1 = arg2
int64_t i_3 = i_4
int64_t i_1

do
    v0 = *(x8_1 + 0x20)
    v1 = *(x8_1 + 0x30)
    v2 = *x8_1
    v3 = *(x8_1 + 0x10)
    x8_1 += 0x80
    i_1 = i_3
    i_3 -= 1
    *(x9_1 + 0x20) = v0
    *(x9_1 + 0x30) = v1
    *x9_1 = v2
    *(x9_1 + 0x10) = v3
    x9_1 += 0x40
while (i_1 != 1)

if (i_4 != 0)
    void* x8_2 = arg2 + (i_4 << 6)
    void* x9_2 = arg3 + 0x40
    int64_t i_2
    
    do
        v0 = *(x9_2 + 0x20)
        v1 = *(x9_2 + 0x30)
        v2 = *x9_2
        v3 = *(x9_2 + 0x10)
        x9_2 += 0x80
        i_2 = i_4
        i_4 -= 1
        *(x8_2 + 0x20) = v0
        *(x8_2 + 0x30) = v1
        *x8_2 = v2
        *(x8_2 + 0x10) = v3
        x8_2 += 0x40
    while (i_2 != 1)

return Botan::deallocate_memory(x0, 0x40, 1)
