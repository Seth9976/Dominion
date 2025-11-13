// 函数: _ZN5Botan23RFC6979_Nonce_GeneratorD1Ev
// 地址: 0xe01aa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 0x60)

if (x0 != 0)
    int64_t x8_1 = *(entry_x0 + 0x70)
    *(entry_x0 + 0x68) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = *(entry_x0 + 0x48)

if (x0_1 != 0)
    int64_t x8_2 = *(entry_x0 + 0x58)
    *(entry_x0 + 0x50) = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

void** x20 = *(entry_x0 + 0x40)
*(entry_x0 + 0x40) = 0

if (x20 != 0)
    void* x0_2 = x20[0xc]
    *x20 = _vtable_for_Botan::HMAC_DRBG + 0x10
    
    if (x0_2 != 0)
        int64_t x8_4 = x20[0xe]
        x20[0xd] = x0_2
        Botan::deallocate_memory(x0_2, x8_4 - x0_2, 1)
    
    int64_t* x0_3 = x20[0xb]
    x20[0xb] = 0
    
    if (x0_3 != 0)
        (*(*x0_3 + 0x10))()
    
    *x20 = _vtable_for_Botan::Stateful_RNG + 0x10
    std::__ndk1::recursive_mutex::~recursive_mutex()
    operator delete(x20)

void* result = *(entry_x0 + 8)

if (result == 0)
    return result

int64_t x8_8 = *(entry_x0 + 0x18)
*(entry_x0 + 0x10) = result
return Botan::deallocate_memory(result, (x8_8 - result) s>> 2, 4)
