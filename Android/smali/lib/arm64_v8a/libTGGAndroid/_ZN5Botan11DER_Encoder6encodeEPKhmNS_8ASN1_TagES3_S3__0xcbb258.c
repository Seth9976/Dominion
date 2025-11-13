// 函数: _ZN5Botan11DER_Encoder6encodeEPKhmNS_8ASN1_TagES3_S3_
// 地址: 0xcbb258
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_70

if (arg4 - 3 u>= 2)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0
    x0_9, v0 = operator new(0x30)
    (*" byte/bit string")[0].o
    int64_t var_60_2 = x0_9
    v0 = data_71abd0
    __builtin_strncpy(x0_9, "DER_Encoder: Invalid tag for byte/bit string", 0x2d)
    var_70 = v0
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int32_t x21 = arg5
int32_t entry_x5

if (arg4 != 3)
    Botan::DER_Encoder::add_object(arg1, zx.q(x21), zx.q(entry_x5), arg2)
else
    __builtin_memset(&var_70, 0, 0x18)
    char* x0 = Botan::allocate_memory(1, 1)
    void* x24_1 = var_70.q
    int64_t x8_1 = var_70:8.q
    *x0 = 0
    size_t x2 = x8_1 - x24_1
    void* x25_1 = x0 - x2
    
    if (x2 s>= 1)
        memcpy(x25_1, x24_1, x2)
    
    var_70.q = x25_1
    var_70:8.q = &x0[1]
    int64_t var_60
    
    if (x24_1 != 0)
        Botan::deallocate_memory(x24_1, var_60 - x24_1, 1)
    uint64_t var_80 = arg2
    int64_t var_78_1 = arg3
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_70, &var_80)
    Botan::DER_Encoder::add_object(arg1, zx.q(x21), zx.q(entry_x5), var_70.q)
    void* x0_5 = var_70.q
    
    if (x0_5 != 0)
        var_70:8.q = x0_5
        Botan::deallocate_memory(x0_5, &x0[1] - x0_5, 1)
return arg1
