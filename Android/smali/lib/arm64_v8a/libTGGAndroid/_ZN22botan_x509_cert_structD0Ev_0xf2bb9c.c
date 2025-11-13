// 函数: _ZN22botan_x509_cert_structD0Ev
// 地址: 0xf2bb9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x0 = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::X509_Certificate, 2405599543u> + 0x10
entry_x0[2] = 0

if (x0 != 0)
    (*(*x0 + 0x18))()
    int64_t* x0_1 = entry_x0[2]
    entry_x0[2] = 0
    
    if (x0_1 != 0)
        (*(*x0_1 + 0x18))()

return operator delete(entry_x0) __tailcall
