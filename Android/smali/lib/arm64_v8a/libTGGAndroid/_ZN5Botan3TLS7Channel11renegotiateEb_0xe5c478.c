// 函数: _ZN5Botan3TLS7Channel11renegotiateEb
// 地址: 0xe5c478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x48) != 0)
    return 

void* x20 = *(arg1 + 0x40)
int64_t* x19 = arg1

if (x20 != 0)
    int32_t entry_x1
    
    if ((entry_x1 & 1) == 0)
        (*(*x19[5] + 0x178))()
    
    *(x20 + 0x20)
    Botan::TLS::Channel::create_handshake_state(x19)
    jump(*(*x19 + 0x20))

void** x0_5 = __cxa_allocate_exception(0x20)
int64_t x0_6
int128_t v0
x0_6, v0 = operator new(0x30)
(*"ctive connection")[0].o
int64_t var_30 = x0_6
v0 = data_71cbb0
__builtin_strncpy(x0_6, "Cannot renegotiate on inactive connection", 0x2a)
int128_t var_40 = v0
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
