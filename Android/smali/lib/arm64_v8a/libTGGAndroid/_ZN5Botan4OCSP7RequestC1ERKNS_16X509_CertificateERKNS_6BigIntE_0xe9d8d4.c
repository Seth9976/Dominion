// 函数: _ZN5Botan4OCSP7RequestC1ERKNS_16X509_CertificateERKNS_6BigIntE
// 地址: 0xe9d8d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_Object::X509_Object(arg1)
*arg1 = _vtable_for_Botan::X509_Certificate + 0x10
*(arg1 + 0x78) = *(arg2 + 0x78)
int64_t x8_2 = *(arg2 + 0x80)
*(arg1 + 0x80) = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

return Botan::OCSP::CertID::CertID(arg1 + 0x88, arg1)
