// 函数: sub_f06cf8
// 地址: 0xf06cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[0x15]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::Montgomery_Exponentiator{for `Botan::Modular_Exponentiator'}

if (x0 != 0)
    int64_t x8_1 = arg1[0x17]
    arg1[0x16] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

int64_t* x20 = arg1[0x14]

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x20_1 = arg1[0x12]
int64_t x9_2

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_2 - 1, &x20_1[1])
    while (i_1 != 0)

void* x0_3

if (x20_1 != 0 && x9_2 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_3 = arg1[0xb]
    
    if (x0_3 != 0)
        goto label_f06d90
else
    x0_3 = arg1[0xb]
    
    if (x0_3 != 0)
    label_f06d90:
        int64_t x8_7 = arg1[0xd]
        arg1[0xc] = x0_3
        Botan::deallocate_memory(x0_3, (x8_7 - x0_3) s>> 2, 4)
void* x0_4 = arg1[6]

if (x0_4 != 0)
    int64_t x8_9 = arg1[8]
    arg1[7] = x0_4
    Botan::deallocate_memory(x0_4, (x8_9 - x0_4) s>> 2, 4)

void* result = arg1[1]

if (result == 0)
    return result

int64_t x8_11 = arg1[3]
arg1[2] = result
return Botan::deallocate_memory(result, (x8_11 - result) s>> 2, 4)
