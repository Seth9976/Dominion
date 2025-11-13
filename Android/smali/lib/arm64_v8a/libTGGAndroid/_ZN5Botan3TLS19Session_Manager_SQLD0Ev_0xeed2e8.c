// 函数: _ZN5Botan3TLS19Session_Manager_SQLD0Ev
// 地址: 0xeed2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[3]
*entry_x0 = _vtable_for_Botan::TLS::Session_Manager_SQL + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[5]
    entry_x0[4] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x20 = entry_x0[2]

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
        return operator delete(entry_x0) __tailcall

return operator delete(entry_x0) __tailcall
