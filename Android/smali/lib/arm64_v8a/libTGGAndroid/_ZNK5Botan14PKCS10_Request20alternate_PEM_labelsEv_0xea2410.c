// 函数: _ZNK5Botan14PKCS10_Request20alternate_PEM_labelsEv
// 地址: 0xea2410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = operator new(0x20)
char v0 = (data_71c520).b
int64_t* entry_x8
entry_x8[1] = 0
entry_x8[2] = 0
__builtin_strncpy(x0, "NEW CERTIFICATE REQUEST", 0x18)
*entry_x8 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_1 = operator new(0x18)
*entry_x8 = x0_1
entry_x8[1] = x0_1
entry_x8[2] = x0_1 + 0x18
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    x0_1)
entry_x8[1] = x0_1 + 0x18

if ((zx.d(v0) & 1) == 0)
    return result

return operator delete(x0)
