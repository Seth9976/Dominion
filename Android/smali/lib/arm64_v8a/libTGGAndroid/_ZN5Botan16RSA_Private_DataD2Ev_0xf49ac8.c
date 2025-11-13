// 函数: _ZN5Botan16RSA_Private_DataD2Ev
// 地址: 0xf49ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t* x20 = entry_x0[0x37]

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

int64_t* x20_1 = entry_x0[0x35]
int64_t x9_2

if (x20_1 != 0)
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x20_1[1])
        i_1 = __stlxr(x9_2 - 1, &x20_1[1])
    while (i_1 != 0)

void* x0_2

if (x20_1 != 0 && x9_2 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_2 = entry_x0[0x2e]
    
    if (x0_2 != 0)
        goto label_f49b34
else
    x0_2 = entry_x0[0x2e]
    
    if (x0_2 != 0)
    label_f49b34:
        int64_t x8_5 = entry_x0[0x30]
        entry_x0[0x2f] = x0_2
        Botan::deallocate_memory(x0_2, (x8_5 - x0_2) s>> 2, 4)
void* x0_3 = entry_x0[0x29]

if (x0_3 != 0)
    int64_t x8_7 = entry_x0[0x2b]
    entry_x0[0x2a] = x0_3
    Botan::deallocate_memory(x0_3, (x8_7 - x0_3) s>> 2, 4)

void* x0_4 = entry_x0[0x23]

if (x0_4 != 0)
    int64_t x8_9 = entry_x0[0x25]
    entry_x0[0x24] = x0_4
    Botan::deallocate_memory(x0_4, (x8_9 - x0_4) s>> 2, 4)

void* x0_5 = entry_x0[0x1e]

if (x0_5 != 0)
    int64_t x8_11 = entry_x0[0x20]
    entry_x0[0x1f] = x0_5
    Botan::deallocate_memory(x0_5, (x8_11 - x0_5) s>> 2, 4)

void* x0_6 = entry_x0[0x19]

if (x0_6 != 0)
    int64_t x8_13 = entry_x0[0x1b]
    entry_x0[0x1a] = x0_6
    Botan::deallocate_memory(x0_6, (x8_13 - x0_6) s>> 2, 4)

void* x0_7 = entry_x0[0x14]

if (x0_7 != 0)
    int64_t x8_15 = entry_x0[0x16]
    entry_x0[0x15] = x0_7
    Botan::deallocate_memory(x0_7, (x8_15 - x0_7) s>> 2, 4)

void* x0_8 = entry_x0[0xf]

if (x0_8 != 0)
    int64_t x8_17 = entry_x0[0x11]
    entry_x0[0x10] = x0_8
    Botan::deallocate_memory(x0_8, (x8_17 - x0_8) s>> 2, 4)

void* x0_9 = entry_x0[0xa]

if (x0_9 != 0)
    int64_t x8_19 = entry_x0[0xc]
    entry_x0[0xb] = x0_9
    Botan::deallocate_memory(x0_9, (x8_19 - x0_9) s>> 2, 4)

void* x0_10 = entry_x0[5]

if (x0_10 != 0)
    int64_t x8_21 = entry_x0[7]
    entry_x0[6] = x0_10
    Botan::deallocate_memory(x0_10, (x8_21 - x0_10) s>> 2, 4)

void* result = *entry_x0

if (result == 0)
    return result

int64_t x8_23 = entry_x0[2]
entry_x0[1] = result
return Botan::deallocate_memory(result, (x8_23 - result) s>> 2, 4)
