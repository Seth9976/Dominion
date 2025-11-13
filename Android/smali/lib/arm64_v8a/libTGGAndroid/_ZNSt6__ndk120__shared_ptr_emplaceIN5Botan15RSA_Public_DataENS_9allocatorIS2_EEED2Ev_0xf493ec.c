// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIN5Botan15RSA_Public_DataENS_9allocatorIS2_EEED2Ev
// 地址: 0xf493ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t* x20 = entry_x0[0xe]
*entry_x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::RSA_Public_Data, std::__ndk1::allocator<Botan::RSA_Public_Data> >
    + 0x10
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
    x0 = entry_x0[8]
    
    if (x0 != 0)
        goto label_f49430
else
    x0 = entry_x0[8]
    
    if (x0 != 0)
    label_f49430:
        int64_t x8_2 = entry_x0[0xa]
        entry_x0[9] = x0
        Botan::deallocate_memory(x0, (x8_2 - x0) s>> 2, 4)
void* x0_1 = entry_x0[3]

if (x0_1 != 0)
    int64_t x8_4 = entry_x0[5]
    entry_x0[4] = x0_1
    Botan::deallocate_memory(x0_1, (x8_4 - x0_1) s>> 2, 4)

return std::__ndk1::__shared_weak_count::~__shared_weak_count() __tailcall
