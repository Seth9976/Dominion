// 函数: _ZNK5Botan3TLS15TLS_Data_Reader11assert_doneEv
// 地址: 0xe43a50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x0
int64_t* x8 = *(entry_x0 + 8)

if (x8[1] - *x8 == *(entry_x0 + 0x10))
    return 

void* x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
int64_t var_30 = x0_1
int128_t var_40 = data_71cd20
__builtin_strncpy(x0_1, "Extra bytes at end of message", 0x1e)
Botan::TLS::TLS_Data_Reader::decode_error(entry_x0)
__cxa_throw(x0, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
