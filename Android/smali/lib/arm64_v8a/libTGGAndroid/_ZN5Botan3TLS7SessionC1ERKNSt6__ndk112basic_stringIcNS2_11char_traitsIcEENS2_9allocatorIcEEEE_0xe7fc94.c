// 函数: _ZN5Botan3TLS7SessionC1ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xe7fc94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x60) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*arg1 = zx.o(0)
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x50) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
uint8_t var_120 = 0x16
int64_t var_11f
__builtin_strncpy(&var_11f, "TLS SESSION", 0xc)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::PEM_Code::decode_check_label(entry_x1, &var_120)
void* var_110

if ((zx.d(var_120) & 1) != 0)
    operator delete(var_110)
uint64_t result
Botan::TLS::Session::Session(&var_120, result)
Botan::TLS::Session::operator=(arg1)
Botan::TLS::Session::~Session()

if (result == 0)
    return result

uint64_t result_1 = result
int64_t var_48
return Botan::deallocate_memory(result, var_48 - result, 1)
