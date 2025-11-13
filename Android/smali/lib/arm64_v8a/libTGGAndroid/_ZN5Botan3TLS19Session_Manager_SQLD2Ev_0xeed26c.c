// 函数: _ZN5Botan3TLS19Session_Manager_SQLD2Ev
// 地址: 0xeed26c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* result = entry_x0[3]
*entry_x0 = _vtable_for_Botan::TLS::Session_Manager_SQL + 0x10

if (result != 0)
    int64_t x8_1 = entry_x0[5]
    entry_x0[4] = result
    result = Botan::deallocate_memory(result, x8_1 - result, 1)

int64_t* x19_1 = entry_x0[2]

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
