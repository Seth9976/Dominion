// 函数: _ZNSt6__ndk14pairIN5Botan10polyn_gf2mES2_ED2Ev
// 地址: 0xf051c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 0x58)
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

void* x0

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0 = *(entry_x0 + 0x38)
    
    if (x0 != 0)
        goto label_f051fc
else
    x0 = *(entry_x0 + 0x38)
    
    if (x0 != 0)
    label_f051fc:
        int64_t x8_2 = *(entry_x0 + 0x48)
        *(entry_x0 + 0x40) = x0
        Botan::deallocate_memory(x0, (x8_2 - x0) s>> 1, 2)
int64_t* x20_1 = *(entry_x0 + 0x28)
int64_t x9_2

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_2 - 1, &x20_1[1])
    while (i_1 != 0)

void* result

if (x20_1 != 0 && x9_2 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = *(entry_x0 + 8)
    
    if (result != 0)
        goto label_f0523c
else
    result = *(entry_x0 + 8)
    
    if (result != 0)
    label_f0523c:
        int64_t x8_5 = *(entry_x0 + 0x18)
        *(entry_x0 + 0x10) = result
        return Botan::deallocate_memory(result, (x8_5 - result) s>> 1, 2)

return result
