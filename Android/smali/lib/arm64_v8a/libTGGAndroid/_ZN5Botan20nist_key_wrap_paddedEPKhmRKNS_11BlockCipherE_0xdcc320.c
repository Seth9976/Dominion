// 函数: _ZN5Botan20nist_key_wrap_paddedEPKhmRKNS_11BlockCipherE
// 地址: 0xdcc320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(*arg3 + 0x30))(arg3) != 0x10)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v0_1
    x0_11, v0_1 = operator new(0x40)
    v0_1 = data_71d0c0
    int64_t var_50_1 = x0_11
    __builtin_strncpy(x0_11, "NIST key wrap algorithm requires a 128-bit cipher", 0x32)
    int128_t var_60_1 = v0_1
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    *x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x24 = -0x59a6a65a00000000 | (arg2 & 0xffffffff)
uint64_t** entry_x8

if (arg2 u> 8)
    return sub_dcb38c(entry_x8, arg1, arg2, arg3, x24) __tailcall

__builtin_memset(entry_x8, 0, 0x18)
uint64_t* x0_2 = operator new(0x10)
uint64_t x9_2 = _byteswap(x24)
x0_2[1] = 0
entry_x8[1] = &x0_2[2]
entry_x8[2] = &x0_2[2]
*entry_x8 = x0_2
*x0_2 = x9_2

if (arg2 != 0)
    if (arg1 == 0)
        int64_t* x0_15 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        char var_60
        void* var_50
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_50)
        sub_1101e04(x0_15)
        noreturn
    
    memcpy(&x0_2[1], arg1, arg2)

return (*(*arg3 + 0x48))(arg3, x0_2, x0_2, 0x10 u/ (*(*arg3 + 0x30))(arg3))
