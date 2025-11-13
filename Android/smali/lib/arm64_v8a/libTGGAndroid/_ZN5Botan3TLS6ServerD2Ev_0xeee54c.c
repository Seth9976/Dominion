// 函数: _ZN5Botan3TLS6ServerD2Ev
// 地址: 0xeee54c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[0x22]
*entry_x0 = _vtable_for_Botan::TLS::Server + 0x10

if (&entry_x0[0x1e] == x0)
    (*(*x0 + 0x20))()
else if (x0 != 0)
    (*(*x0 + 0x28))()

if ((zx.d(entry_x0[0x1b].b) & 1) != 0)
    operator delete(entry_x0[0x1d])

return Botan::TLS::Channel::~Channel() __tailcall
