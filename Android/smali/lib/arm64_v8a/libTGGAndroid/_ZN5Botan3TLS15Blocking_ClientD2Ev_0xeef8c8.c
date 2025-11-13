// 函数: _ZN5Botan3TLS15Blocking_ClientD2Ev
// 地址: 0xeef8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x2e]
*entry_x0 = _vtable_for_Botan::TLS::Blocking_Client + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x30]
    entry_x0[0x2f] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

entry_x0[9] = _vtable_for_Botan::TLS::Client + 0x10

if ((zx.d(entry_x0[0x2b].b) & 1) == 0)
    if ((zx.d(entry_x0[0x27].b) & 1) != 0)
        goto label_eef994
    
    goto label_eef928

operator delete(entry_x0[0x2d])

if ((zx.d(entry_x0[0x27].b) & 1) == 0)
label_eef928:
    
    if ((zx.d(entry_x0[0x24].b) & 1) != 0)
        operator delete(entry_x0[0x26])
else
label_eef994:
    operator delete(entry_x0[0x29])
    
    if ((zx.d(entry_x0[0x24].b) & 1) != 0)
        operator delete(entry_x0[0x26])

Botan::TLS::Channel::~Channel()
void* x20_2 = entry_x0[8]
entry_x0[8] = 0

if (x20_2 != 0)
    Botan::TLS::Compat_Callbacks::~Compat_Callbacks()
    operator delete(x20_2)

int64_t* result = entry_x0[6]

if (&entry_x0[2] == result)
    jump(*(*result + 0x20))

if (result == 0)
    return result

jump(*(*result + 0x28))
