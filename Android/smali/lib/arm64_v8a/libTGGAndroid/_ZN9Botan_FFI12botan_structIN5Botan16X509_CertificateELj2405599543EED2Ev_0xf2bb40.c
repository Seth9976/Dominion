// 函数: _ZN9Botan_FFI12botan_structIN5Botan16X509_CertificateELj2405599543EED2Ev
// 地址: 0xf2bb40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* result = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::X509_Certificate, 2405599543u> + 0x10
entry_x0[2] = 0

if (result == 0)
    entry_x0[2] = 0
else
    (*(*result + 0x18))()
    result = entry_x0[2]
    entry_x0[2] = 0
    
    if (result != 0)
        jump(*(*result + 0x18))

return result
