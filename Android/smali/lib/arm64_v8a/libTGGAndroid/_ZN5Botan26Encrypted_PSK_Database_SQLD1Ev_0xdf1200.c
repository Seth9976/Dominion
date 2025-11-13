// 函数: _ZN5Botan26Encrypted_PSK_Database_SQLD1Ev
// 地址: 0xdf1200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[8].b)
*entry_x0 = _vtable_for_Botan::Encrypted_PSK_Database_SQL + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[0xa])

int64_t* x20 = entry_x0[7]

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

void* x0_3 = entry_x0[3]
*entry_x0 = _vtable_for_Botan::Encrypted_PSK_Database + 0x10

if (x0_3 != 0)
    int64_t x8_5 = entry_x0[5]
    entry_x0[4] = x0_3
    Botan::deallocate_memory(x0_3, x8_5 - x0_3, 1)

int64_t* x0_4 = entry_x0[2]
entry_x0[2] = 0

if (x0_4 != 0)
    (*(*x0_4 + 0x10))()

int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
