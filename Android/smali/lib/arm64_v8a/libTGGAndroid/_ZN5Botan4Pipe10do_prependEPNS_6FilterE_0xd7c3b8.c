// 函数: _ZN5Botan4Pipe10do_prependEPNS_6FilterE
// 地址: 0xd7c3b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x20)) != 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    (*"it is processing")[0].o
    int64_t var_30 = x0_2
    v0 = data_71c860
    __builtin_strncpy(x0_2, "Cannot prepend to a Pipe while it is processing", 0x30)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* entry_x1

if (entry_x1 == 0)
    return 

if (__dynamic_cast(entry_x1, _typeinfo_for_Botan::Filter, _typeinfo_for_Botan::SecureQueue, 0) != 0)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0_1
    x0_7, v0_1 = operator new(0x30)
    (*"e cannot be used")[0].o
    int64_t var_30_1 = x0_7
    v0_1 = data_71cbb0
    __builtin_strncpy(x0_7, "Pipe::prepend: SecureQueue cannot be used", 0x2a)
    int128_t var_40_1 = v0_1
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (zx.d(*(entry_x1 + 0x48)) != 0)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v0_2
    x0_12, v0_2 = operator new(0x30)
    (*"g multiple Pipes")[0].o
    int64_t var_30_2 = x0_12
    v0_2 = data_71ce10
    __builtin_strncpy(x0_12, "Filters cannot be shared among multiple Pipes", 0x2e)
    int128_t var_40_2 = v0_2
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

*(entry_x1 + 0x48) = 1
int64_t x8_2 = *(arg1 + 8)

if (x8_2 != 0)
    int64_t x9_1 = *(entry_x1 + 0x20)
    int64_t i = *(entry_x1 + 0x38)
    
    if (i u< (*(entry_x1 + 0x28) - x9_1) s>> 3)
        void* x11_3
        
        do
            x11_3 = *(x9_1 + (i << 3))
            
            if (x11_3 == 0)
                break
            
            x9_1 = *(x11_3 + 0x20)
            i = *(x11_3 + 0x38)
        while (i u< (*(x11_3 + 0x28) - x9_1) s>> 3)
    
    *(x9_1 + (i << 3)) = x8_2

*(arg1 + 8) = entry_x1
