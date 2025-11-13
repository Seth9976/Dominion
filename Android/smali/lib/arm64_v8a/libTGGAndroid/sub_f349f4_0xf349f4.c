// 函数: sub_f349f4
// 地址: 0xf349f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
int64_t x9 = *x8
int64_t* x21 = **(arg1 + 0x10)

if (x9 != 0xa && x9 != 0x10)
    return 0xffffffd8

uint64_t x20_1 = x8[1]
void* var_58
Botan::BigInt::BigInt(&var_58, x20_1, strlen(x20_1))
void* var_50_1
int64_t var_48
void* x0_3

if (&var_58 == x21)
    x0_3 = var_58
    
    if (x0_3 != 0)
        var_50_1 = x0_3
        Botan::deallocate_memory(x0_3, (var_48 - x0_3) s>> 2, 4)
else
    x0_3 = *x21
    *x21 = var_58
    var_58 = x0_3
    int64_t x10_1 = x21[2]
    int64_t x9_1 = x21[3]
    int64_t var_50
    x21[1] = var_50
    x21[2] = var_48
    int64_t var_40
    x21[3] = var_40
    int64_t var_40_1 = x9_1
    int32_t var_38
    x21[4].d = var_38
    int32_t var_38_1 = x21[4].d
    
    if (x0_3 != 0)
        var_50_1 = x0_3
        Botan::deallocate_memory(x0_3, (x10_1 - x0_3) s>> 2, 4)
return 0
