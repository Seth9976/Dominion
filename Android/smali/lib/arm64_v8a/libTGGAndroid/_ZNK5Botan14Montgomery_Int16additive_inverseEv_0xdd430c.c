// 函数: _ZNK5Botan14Montgomery_Int16additive_inverseEv
// 地址: 0xdd430c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x2 = *entry_x0
int64_t* x8 = entry_x0[1]
int64_t var_68 = x2

if (x8 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x8[1]) + 1, &x8[1])
    while (i != 0)
    x2 = *entry_x0

void var_58
Botan::Montgomery_Int::Montgomery_Int(&var_58, &var_68, x2.b)
Botan::Montgomery_Int::operator-(&var_58)
void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_38
    result = Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)

int64_t* var_50

if (var_50 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&var_50[1])
        i_1 = __stlxr(x9_3 - 1, &var_50[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*var_50 + 0x10))(var_50)
        result = std::__ndk1::__shared_weak_count::__release_weak()

if (x8 != 0)
    int64_t x9_4
    int32_t i_2
    
    do
        x9_4 = __ldaxr(&x8[1])
        i_2 = __stlxr(x9_4 - 1, &x8[1])
    while (i_2 != 0)
    
    if (x9_4 == 0)
        (*(*x8 + 0x10))(x8)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
