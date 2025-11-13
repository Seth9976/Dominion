// 函数: _ZN5Botan9HMAC_DRBGD2Ev
// 地址: 0xeec7b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0xc]
*entry_x0 = _vtable_for_Botan::HMAC_DRBG + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0xe]
    entry_x0[0xd] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = entry_x0[0xb]
entry_x0[0xb] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

*entry_x0 = _vtable_for_Botan::Stateful_RNG + 0x10
return std::__ndk1::recursive_mutex::~recursive_mutex() __tailcall
