// 函数: _ZN5BotandvERKNS_6BigIntES2_
// 地址: 0xcdb74c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg2 + 0x18)

if (x9 != -1)
    if (x9 != 1)
        goto label_cdb7f0
    
label_cdb770:
    int32_t* x8 = *arg2
    uint32_t x1
    
    if (*(arg2 + 8) == x8)
        x1 = 0
    else
        x1 = *x8
    
    return Botan::operator/(arg1, x1) __tailcall

int64_t x8_1 = *arg2
int64_t x11_1 = *(arg2 + 8)
int64_t x10_1 = x11_1 - x8_1

if (x11_1 != x8_1)
    int64_t x12_1
    
    x12_1 = x10_1 s>= 0 ? x10_1 : -1
    
    int64_t x11_2 = x8_1 - x11_1
    int64_t x12_2
    
    x12_2 = x12_1 s< 1 ? x12_1 : 1
    
    int64_t x9_2 = x10_1 s>> 2
    int64_t x10_2
    
    x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
    
    int64_t i_1 = x12_2 * (x10_2 u>> 2)
    uint64_t x11_3 = 1
    int64_t i
    
    do
        int32_t x12_3 = *(x8_1 - 4 + (i_1 << 2))
        i = i_1
        i_1 -= 1
        x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
        x9_2 -= x11_3
    while (i != 1)
    *(arg2 + 0x18) = x9_2
    
    if (x9_2 == 1)
        goto label_cdb770
    
    goto label_cdb7f0

*(arg2 + 0x18) = 0
label_cdb7f0:
void* result_3
__builtin_memset(&result_3, 0, 0x18)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_38 = -1
int32_t var_30 = 1
int64_t var_60 = -1
int32_t var_58 = 1
Botan::vartime_divide(arg1, arg2, &result_3, &result_1)
int128_t v0 = result_3.o
void* result = result_1
__builtin_memset(&result_3, 0, 0x18)
int64_t var_38_1 = -1
int128_t* entry_x8
*entry_x8 = v0
int64_t var_40
entry_x8[1].q = var_40
*(entry_x8 + 0x18) = var_38
entry_x8[2].d = var_30
int32_t var_30_1 = 1

if (result != 0)
    void* result_2 = result
    int64_t var_68
    Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)
    result = result_3
    
    if (result != 0)
        void* result_4 = result
        int64_t var_40_1
        return Botan::deallocate_memory(result, (var_40_1 - result) s>> 2, 4)

return result
