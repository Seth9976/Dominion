// 函数: _ZN5Botan3TLS15TLS_Data_Reader13get_num_elemsEmmmm
// 地址: 0xf236b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Botan::TLS::TLS_Data_Reader::get_length_field(arg1)
uint64_t result = x0 u/ arg3

if (x0 u% arg3 != 0)
    void* x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x20)
    int64_t var_40 = x0_2
    int128_t var_50 = data_71af80
    __builtin_strncpy(x0_2, "Size isn\'t multiple of T", 0x19)
    Botan::TLS::TLS_Data_Reader::decode_error(arg1)
    __cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t entry_x4

if (result u>= arg4 && result u<= entry_x4)
    return result

void* x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0_1
x0_6, v0_1 = operator new(0x20)
int64_t var_40_1 = x0_6
int128_t var_50_1 = data_71b7d0
__builtin_strncpy(x0_6, "Length field outside parameters", 0x20)
Botan::TLS::TLS_Data_Reader::decode_error(arg1)
__cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
