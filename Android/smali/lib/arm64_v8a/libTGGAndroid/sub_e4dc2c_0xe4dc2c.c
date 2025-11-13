// 函数: sub_e4dc2c
// 地址: 0xe4dc2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg11) & 1) != 0)
    operator delete(arg12)

char arg_0

if ((zx.d(arg_0) & 1) != 0)
    operator delete(arg10)

if (arg2 == 3)
    int64_t* x0_9 = __cxa_begin_catch(arg1)
    void** x0_10 = __cxa_allocate_exception(0x28)
    char* x0_12 = (*(*x0_9 + 0x10))(x0_9)
    size_t x0_13 = strlen(x0_12)
    
    if (x0_13 u>= -0x10)
        x0_13 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    void* x25_1
    
    if (x0_13 u>= 0x17)
        uint64_t x26_1 = (x0_13 + 0x10) & 0xfffffffffffffff0
        void* x0_15 = operator new(x26_1)
        x25_1 = x0_15
        arg9 = x0_13
        arg10 = x0_15
        arg_0.q = x26_1 | 1
        memcpy(x25_1, x0_12, x0_13)
    else
        x25_1 = &arg_0 | 1
        arg_0 = (x0_13.d << 1).b
        
        if (x0_13 != 0)
            memcpy(x25_1, x0_12, x0_13)
    
    *(x25_1 + x0_13) = 0
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    x0_10[4].d = 0x2f
    *x0_10 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

void* arg_88

if (arg2 != 2)
    if (arg6 != 0)
        operator delete(arg6)
    
    if (arg13 != 0)
        arg_88 = arg13
        Botan::deallocate_memory(arg13, arg14 - arg13, 1)
    
    void* x0_20 = *arg4
    
    if (x0_20 != 0)
        int64_t x8_15 = *(arg3 + 0x30)
        *(arg3 + 0x28) = x0_20
        Botan::deallocate_memory(x0_20, x8_15 - x0_20, 1)
    
    void* x0_21 = *arg8
    
    if (x0_21 != 0)
        *(arg3 + 0x10) = x0_21
        operator delete(x0_21)
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
(*(*arg7 + 0xb0))(arg7)
int64_t x1_1 = *(arg3 + 0x20)
int64_t x9_1 = *(arg3 + 0x28)
int64_t x10_1 = arg9 - arg_0.q
int64_t x8_4 = x9_1 - x1_1

if (x10_1 u> x8_4)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg4)
    x1_1 = *(arg3 + 0x20)
    x9_1 = *(arg3 + 0x28)
else if (x10_1 u< x8_4)
    x9_1 = x1_1 + x10_1
    *(arg3 + 0x28) = x9_1

(*(*arg5 + 0x10))(arg5, x1_1, x9_1 - x1_1)
size_t x0_7 = arg_0.q

if (x0_7 != 0)
    arg9 = x0_7
    x0_7 = operator delete(x0_7)

__cxa_end_catch(x0_7)
Botan::TLS::TLS_Data_Reader::assert_done()

if (arg6 != 0)
    operator delete(arg6)

if (arg13 == 0)
    return arg13

arg_88 = arg13
return Botan::deallocate_memory(arg13, arg14 - arg13, 1)
