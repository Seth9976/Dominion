// 函数: _ZN5Botan3TLS11CertificateD2Ev
// 地址: 0xeedeb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x21 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::TLS::Certificate + 0x10

if (x21 == 0)
    return 

int64_t* x20 = entry_x0[2]

if (x20 == x21)
    entry_x0[2] = x21
    return operator delete(x21) __tailcall

do
    x20 = &x20[-0x11]
    (*(*x20 + 0x10))(x20)
while (x21 != x20)

void* x0_1 = entry_x0[1]
entry_x0[2] = x21
return operator delete(x0_1) __tailcall
