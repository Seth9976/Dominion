// 函数: _ZN5Botan13EC_Group_DataD2Ev
// 地址: 0xefca98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 0x1c8)
*(entry_x0 + 0x1c0) = _vtable_for_Botan::OID + 0x10

if (x0 != 0)
    *(entry_x0 + 0x1d0) = x0
    operator delete(x0)

void* x0_1 = *(entry_x0 + 0x1a8)

if (x0_1 != 0)
    *(entry_x0 + 0x1b0) = x0_1
    operator delete(x0_1)

void* x0_2 = *(entry_x0 + 0x160)

if (x0_2 != 0)
    int64_t x8_1 = *(entry_x0 + 0x170)
    *(entry_x0 + 0x168) = x0_2
    Botan::deallocate_memory(x0_2, (x8_1 - x0_2) s>> 2, 4)

void* x0_3 = *(entry_x0 + 0x138)

if (x0_3 != 0)
    int64_t x8_3 = *(entry_x0 + 0x148)
    *(entry_x0 + 0x140) = x0_3
    Botan::deallocate_memory(x0_3, (x8_3 - x0_3) s>> 2, 4)

void* x0_4 = *(entry_x0 + 0x110)

if (x0_4 != 0)
    int64_t x8_5 = *(entry_x0 + 0x120)
    *(entry_x0 + 0x118) = x0_4
    Botan::deallocate_memory(x0_4, (x8_5 - x0_4) s>> 2, 4)

void* x0_5 = *(entry_x0 + 0xe8)

if (x0_5 != 0)
    int64_t x8_7 = *(entry_x0 + 0xf8)
    *(entry_x0 + 0xf0) = x0_5
    Botan::deallocate_memory(x0_5, (x8_7 - x0_5) s>> 2, 4)

void* x0_6 = *(entry_x0 + 0xc0)

if (x0_6 != 0)
    int64_t x8_9 = *(entry_x0 + 0xd0)
    *(entry_x0 + 0xc8) = x0_6
    Botan::deallocate_memory(x0_6, (x8_9 - x0_6) s>> 2, 4)

void* x0_7 = *(entry_x0 + 0x98)

if (x0_7 != 0)
    int64_t x8_11 = *(entry_x0 + 0xa8)
    *(entry_x0 + 0xa0) = x0_7
    Botan::deallocate_memory(x0_7, (x8_11 - x0_7) s>> 2, 4)

int64_t result = Botan::PointGFp::~PointGFp()
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
