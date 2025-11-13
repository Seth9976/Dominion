// 函数: _ZN5Botan4Pipe3popEv
// 地址: 0xd7c754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 0x20)) != 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    (*"it is processing")[0].o
    int64_t var_30 = x0_2
    v0 = data_71abd0
    __builtin_strncpy(x0_2, "Cannot pop off a Pipe while it is processing", 0x2d)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t* result = *(entry_x0 + 8)

if (result != 0)
    int64_t* x8_1 = result[4]
    
    if ((result[5] - x8_1) s>> 3 u>= 2)
        void** x0_6 = __cxa_allocate_exception(0x20)
        int64_t x0_7
        int128_t v0_1
        x0_7, v0_1 = operator new(0x30)
        (*"h multiple ports")[0].o
        int64_t var_30_1 = x0_7
        v0_1 = data_71cfc0
        __builtin_strncpy(x0_7, "Cannot pop off a Filter with multiple ports", 0x2c)
        int128_t var_40_1 = v0_1
        *x0_6 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_6[1])
        *x0_6 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    int64_t i = result[8]
    
    if (i != -1)
        *(entry_x0 + 8) = *x8_1
        result = (*(*result + 0x30))()
        
        while (i != 0)
            int64_t* x0 = *(entry_x0 + 8)
            i -= 1
            *(entry_x0 + 8) = *x0[4]
            result = (*(*x0 + 0x30))()

return result
