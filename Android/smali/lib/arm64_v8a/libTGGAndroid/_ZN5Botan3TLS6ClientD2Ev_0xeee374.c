// 函数: _ZN5Botan3TLS6ClientD2Ev
// 地址: 0xeee374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[0x22].b)
*entry_x0 = _vtable_for_Botan::TLS::Client + 0x10

if ((x8 & 1) == 0)
    if ((zx.d(entry_x0[0x1e].b) & 1) != 0)
        goto label_eee3c4
    
    goto label_eee3a0

operator delete(entry_x0[0x24])

if ((zx.d(entry_x0[0x1e].b) & 1) == 0)
label_eee3a0:
    
    if ((zx.d(entry_x0[0x1b].b) & 1) == 0)
        return Botan::TLS::Channel::~Channel() __tailcall
else
label_eee3c4:
    operator delete(entry_x0[0x20])
    
    if ((zx.d(entry_x0[0x1b].b) & 1) == 0)
        return Botan::TLS::Channel::~Channel() __tailcall

operator delete(entry_x0[0x1d])
return Botan::TLS::Channel::~Channel() __tailcall
