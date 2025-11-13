// 函数: _ZNSt6__ndk120__shared_ptr_emplaceIKN5Botan30Montgomery_Exponentation_StateENS_9allocatorIS3_EEED2Ev
// 地址: 0xf47710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
sub_dd4fe4(&entry_x0[5])
int64_t* x20 = entry_x0[4]

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
        return std::__ndk1::__shared_weak_count::~__shared_weak_count() __tailcall

return std::__ndk1::__shared_weak_count::~__shared_weak_count() __tailcall
