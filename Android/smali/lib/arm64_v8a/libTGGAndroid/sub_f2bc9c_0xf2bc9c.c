// 函数: sub_f2bc9c
// 地址: 0xf2bc9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x88)
void* x0_2 = Botan_FFI::safe_get<Botan::X509_Certificate, 2405599543u>(*(arg1 + 8))
Botan::X509_Object::X509_Object(x0)
*x0 = _vtable_for_Botan::X509_Certificate + 0x10
x0[0xf] = *(x0_2 + 0x78)
int64_t x8_3 = *(x0_2 + 0x80)
x0[0x10] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

int64_t* x0_4 = operator new(0x18)
x0_4[2] = x0
x0_4[1].d = 0x8f628937
*x0_4 = _vtable_for_botan_x509_cert_struct + 0x10
**(arg1 + 0x10) = x0_4
return 0
