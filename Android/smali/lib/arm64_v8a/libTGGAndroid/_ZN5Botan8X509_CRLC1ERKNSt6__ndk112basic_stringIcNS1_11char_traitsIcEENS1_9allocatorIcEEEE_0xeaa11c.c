// 函数: _ZN5Botan8X509_CRLC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xeaa11c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x58) = zx.o(0)
*(arg1 + 0x68) = zx.o(0)
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10
*arg1 = _vtable_for_Botan::X509_CRL + 0x10
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_68
bool entry_x1
Botan::DataSource_Stream::DataSource_Stream(&var_68, entry_x1)
Botan::X509_Object::load_data(arg1)
int64_t* result_1
int64_t* result = result_1
int64_t var_48 = 0
var_68 = _vtable_for_Botan::DataSource_Stream + 0x10

if (result != 0)
    result = (*(*result + 8))()

char var_60

if ((zx.d(var_60) & 1) == 0)
    return result

void* var_50
return operator delete(var_50)
