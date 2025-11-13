// 函数: _ZN5Botan10ChaCha_RNGD0Ev
// 地址: 0xee9c5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0xc]
entry_x0[0xc] = 0
*entry_x0 = _vtable_for_Botan::ChaCha_RNG + 0x10

if (x0 != 0)
    (*(*x0 + 8))()

int64_t* x0_1 = entry_x0[0xb]
entry_x0[0xb] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

*entry_x0 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
return operator delete(entry_x0) __tailcall
