// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIKN5Botan30Montgomery_Exponentation_StateENS_9allocatorIS3_EEE16__on_zero_sharedEv
// 地址: 0xf477f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = sub_dd4fe4(entry_x0 + 0x28)
int64_t* x19_1 = *(entry_x0 + 0x20)

if (x19_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_1 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
