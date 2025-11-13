// 函数: sub_f34824
// 地址: 0xf34824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = **(arg1 + 8)
int128_t* x23 = **(arg1 + 0x10)
size_t x0_1 = strlen(x20)

if (x0_1 u>= -0x10)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

int64_t var_78
void* var_68
void* x21

if (x0_1 u>= 0x17)
    uint64_t x22_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x22_1)
    x21 = x0_3
    size_t var_70_1 = x0_1
    var_68 = x0_3
    var_78 = x22_1 | 1
    memcpy(x21, x20, x0_1)
else
    x21 = &var_78 | 1
    var_78.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x21, x20, x0_1)

*(x21 + x0_1) = 0
uint64_t var_60
Botan::BigInt::BigInt(&var_60)
uint64_t var_58_1
int64_t var_50
uint64_t x0_6

if (&var_60 == x23)
    x0_6 = var_60
    
    if (x0_6 != 0)
        var_58_1 = x0_6
        Botan::deallocate_memory(x0_6, (var_50 - x0_6) s>> 2, 4)
else
    int128_t v0 = *x23
    *x23 = var_60
    x0_6 = v0.q
    int64_t var_58
    *(x23 + 8) = var_58
    var_60.o = v0
    int64_t x10_1 = x23[1].q
    int64_t x9_1 = *(x23 + 0x18)
    x23[1].q = var_50
    int64_t var_48
    *(x23 + 0x18) = var_48
    int64_t var_48_1 = x9_1
    int32_t var_40
    x23[2].d = var_40
    int32_t var_40_1 = x23[2].d
    
    if (x0_6 != 0)
        var_58_1 = x0_6
        Botan::deallocate_memory(x0_6, (x10_1 - x0_6) s>> 2, 4)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

return 0
