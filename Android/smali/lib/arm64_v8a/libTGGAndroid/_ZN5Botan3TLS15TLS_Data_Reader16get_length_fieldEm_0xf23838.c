// 函数: _ZN5Botan3TLS15TLS_Data_Reader16get_length_fieldEm
// 地址: 0xf23838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
int64_t entry_x1

if (entry_x1 == 2)
    Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
    int64_t x9_1 = *(arg1 + 0x10)
    uint64_t x8_5 = zx.q(*(**(arg1 + 8) + x9_1))
    *(arg1 + 0x10) = x9_1 + 2
    return _byteswap(x8_5 << 0x30)

if (entry_x1 == 1)
    Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
    int64_t x9 = *(arg1 + 0x10)
    uint64_t result = zx.q(*(**(arg1 + 8) + x9))
    *(arg1 + 0x10) = x9 + 1
    return result

void* x0_3 = __cxa_allocate_exception(0x20)
char var_38 = 0x1e
int64_t var_37
__builtin_strncpy(&var_37, "Bad length size", 0x10)
Botan::TLS::TLS_Data_Reader::decode_error(arg1)
__cxa_throw(x0_3, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
