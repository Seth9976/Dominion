// 函数: _ZN5Botan3TLS7Channel4sendEPKhm
// 地址: 0xe5e9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19
int64_t var_8 = x19

if (zx.d(arg1[0xc8]) == 0 && *(arg1 + 0x40) != 0)
    int64_t* x0 = *(arg1 + 0x38)
    
    if (x0 != 0)
        return Botan::TLS::Channel::send_record_array(arg1.w, (*(*x0 + 0x28))(), 0x17, arg2)
            __tailcall
    
    int64_t* x0_9 = Botan::assertion_failure("m_sequence_numbers", 
        "Have a sequence numbers object", "sequence_numbers", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded)
    char var_40
    void* var_30
    
    if ((zx.d(var_40) & 1) != 0)
        operator delete(var_30)
    sub_1101e04(x0_9)
    noreturn

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0_1
x0_5, v0_1 = operator new(0x30)
(*"e TLS connection")[0].o
int64_t var_30_1 = x0_5
v0_1 = data_71a900
__builtin_strncpy(x0_5, "Data cannot be sent on inactive TLS connection", 0x2f)
int128_t var_40_1 = v0_1
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
