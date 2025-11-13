// 函数: _ZN5Botan7BlinderC1ERKNS_6BigIntERNS_21RandomNumberGeneratorENSt6__ndk18functionIFS1_S3_EEES9_
// 地址: 0xdf19a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg4
Botan::Modular_Reducer::Modular_Reducer(arg1)
*(arg1 + 0x58) = arg3
int64_t* x0 = *(x21 + 0x20)

if (x0 == 0)
    *(arg1 + 0x80) = 0
else if (x21 == x0)
    *(arg1 + 0x80) = arg1 + 0x60
    int64_t* x0_2 = *(x21 + 0x20)
    (*(*x0_2 + 0x18))(x0_2, arg1 + 0x60)
else
    *(arg1 + 0x80) = (*(*x0 + 0x10))()

void* entry_x4
int64_t* x0_3 = *(entry_x4 + 0x20)

if (x0_3 == 0)
    *(arg1 + 0xb0) = 0
else if (entry_x4 == x0_3)
    *(arg1 + 0xb0) = arg1 + 0x90
    int64_t* x0_5 = *(entry_x4 + 0x20)
    (*(*x0_5 + 0x18))(x0_5, arg1 + 0x90)
else
    *(arg1 + 0xb0) = (*(*x0_3 + 0x10))()

int64_t x0_7 = Botan::BigInt::bits()
*(arg1 + 0xf0) = zx.o(0)
*(arg1 + 0xc0) = x0_7
*(arg1 + 0xc8) = zx.o(0)
uint64_t x1_2 = *(arg1 + 0x58)
*(arg1 + 0xd8) = zx.o(0)
*(arg1 + 0xe0) = -1
*(arg1 + 0xe8) = 0
*(arg1 + 0xe8) = 1
__builtin_memset(arg1 + 0x100, 0, 0x20)
*(arg1 + 0x108) = -1
*(arg1 + 0x110) = 1
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_50 = -1
int32_t var_48 = 1
Botan::BigInt::randomize(&result_1, x1_2, x0_7.b - 1)
int64_t* x0_9 = *(arg1 + 0x80)

if (x0_9 == 0)
    sub_a58ab4()
    noreturn

(*(*x0_9 + 0x30))(x0_9, &result_1)
void* var_90
int64_t var_80
int64_t var_78
int32_t var_70
void* var_88_1
void* x0_10

if (arg1 + 0xc8 == &var_90)
    x0_10 = var_90
    
    if (x0_10 != 0)
        var_88_1 = x0_10
        Botan::deallocate_memory(x0_10, (var_80 - x0_10) s>> 2, 4)
else
    x0_10 = *(arg1 + 0xc8)
    int128_t v0 = var_90.o
    var_90 = x0_10
    *(arg1 + 0xc8) = v0
    int64_t x11_1 = *(arg1 + 0xd8)
    int64_t x9_1 = *(arg1 + 0xe0)
    *(arg1 + 0xd8) = var_80
    *(arg1 + 0xe0) = var_78
    var_80 = x11_1
    var_78 = x9_1
    int32_t x9_2 = *(arg1 + 0xe8)
    *(arg1 + 0xe8) = var_70
    var_70 = x9_2
    
    if (x0_10 != 0)
        var_88_1 = x0_10
        Botan::deallocate_memory(x0_10, (var_80 - x0_10) s>> 2, 4)
int64_t* x0_11 = *(arg1 + 0xb0)

if (x0_11 == 0)
    sub_a58ab4()
    noreturn

(*(*x0_11 + 0x30))(x0_11, &result_1)
void* var_88_2
void* x0_12

if (arg1 + 0xf0 == &var_90)
    x0_12 = var_90
    
    if (x0_12 != 0)
        var_88_2 = x0_12
        Botan::deallocate_memory(x0_12, (var_80 - x0_12) s>> 2, 4)
else
    x0_12 = *(arg1 + 0xf0)
    int128_t v0_1 = var_90.o
    var_90 = x0_12
    *(arg1 + 0xf0) = v0_1
    int64_t x11_2 = *(arg1 + 0x100)
    int64_t x9_4 = *(arg1 + 0x108)
    *(arg1 + 0x100) = var_80
    *(arg1 + 0x108) = var_78
    int64_t var_78_1 = x9_4
    int32_t x9_5 = *(arg1 + 0x110)
    *(arg1 + 0x110) = var_70
    int32_t var_70_1 = x9_5
    
    if (x0_12 != 0)
        var_88_2 = x0_12
        Botan::deallocate_memory(x0_12, (x11_2 - x0_12) s>> 2, 4)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
