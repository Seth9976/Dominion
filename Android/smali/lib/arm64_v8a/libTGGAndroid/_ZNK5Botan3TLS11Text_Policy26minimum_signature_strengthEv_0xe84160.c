// 函数: _ZNK5Botan3TLS11Text_Policy26minimum_signature_strengthEv
// 地址: 0xe84160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0
int128_t v0
x0, v0 = operator new(0x20)
int128_t var_30 = data_71bd10
__builtin_strncpy(x0, "minimum_signature_strength", 0x1b)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int64_t result = Botan::TLS::Text_Policy::get_len(entry_x0, &var_30)

if ((zx.d(var_30.b) & 1) != 0)
    operator delete(x0)

return result
