// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIN5Botan15RSA_Public_DataENS_9allocatorIS2_EEE16__on_zero_sharedEv
// 地址: 0xf494bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 0x70)
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
    x0 = *(entry_x0 + 0x40)
    
    if (x0 != 0)
        goto label_f494f0
else
    x0 = *(entry_x0 + 0x40)
    
    if (x0 != 0)
    label_f494f0:
        int64_t x8_2 = *(entry_x0 + 0x50)
        *(entry_x0 + 0x48) = x0
        Botan::deallocate_memory(x0, (x8_2 - x0) s>> 2, 4)
void* result = *(entry_x0 + 0x18)

if (result == 0)
    return result

int64_t x8_4 = *(entry_x0 + 0x28)
*(entry_x0 + 0x20) = result
return Botan::deallocate_memory(result, (x8_4 - result) s>> 2, 4)
