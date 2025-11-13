// 函数: _ZN5Botan8PointGFpD2Ev
// 地址: 0xd27630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 0x60)

if (x0 != 0)
    int64_t x8_1 = *(entry_x0 + 0x70)
    *(entry_x0 + 0x68) = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = *(entry_x0 + 0x38)

if (x0_1 != 0)
    int64_t x8_3 = *(entry_x0 + 0x48)
    *(entry_x0 + 0x40) = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* result = *(entry_x0 + 0x10)

if (result != 0)
    int64_t x8_5 = *(entry_x0 + 0x20)
    *(entry_x0 + 0x18) = result
    result = Botan::deallocate_memory(result, (x8_5 - result) s>> 2, 4)

int64_t* x19_1 = *(entry_x0 + 8)

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
