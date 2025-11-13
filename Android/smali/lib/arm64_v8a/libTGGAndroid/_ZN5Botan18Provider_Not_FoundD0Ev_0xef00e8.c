// 函数: _ZN5Botan18Provider_Not_FoundD0Ev
// 地址: 0xef00e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[1].b)
*entry_x0 = _vtable_for_Botan::Exception + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[3])

std::exception::~exception()
return operator delete(entry_x0) __tailcall
