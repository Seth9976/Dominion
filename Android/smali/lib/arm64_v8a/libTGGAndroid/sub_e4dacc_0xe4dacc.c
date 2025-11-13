// 函数: sub_e4dacc
// 地址: 0xe4dacc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg12 != 0)
    void* arg_68 = arg12
    Botan::deallocate_memory(arg12, arg13 - arg12, 1)

void* arg_0
void* x0_1 = arg_0

if (x0_1 != 0)
    arg9 = x0_1
    Botan::deallocate_memory(x0_1, arg10 - x0_1, 1)

if (arg11 != 0)
    (*(*arg11 + 0x18))()

if (arg2 == 3)
    int64_t* x0_11 = __cxa_begin_catch(arg1)
    void** x0_12 = __cxa_allocate_exception(0x28)
    char* x0_14 = (*(*x0_11 + 0x10))(x0_11)
    void* x0_15 = strlen(x0_14)
    
    if (x0_15 u>= -0x10)
        x0_15 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    
    char* x25_1
    
    if (x0_15 u>= 0x17)
        uint64_t x26_1 = (x0_15 + 0x10) & 0xfffffffffffffff0
        char* x0_17 = operator new(x26_1)
        x25_1 = x0_17
        arg9 = x0_15
        arg10 = x0_17
        arg_0 = x26_1 | 1
        memcpy(x25_1, x0_14, x0_15)
    else
        x25_1 = &arg_0 | 1
        arg_0.b = (x0_15.d << 1).b
        
        if (x0_15 != 0)
            memcpy(x25_1, x0_14, x0_15)
    
    *(x25_1 + x0_15) = 0
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    x0_12[4].d = 0x2f
    *x0_12 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

void* arg_88

if (arg2 != 2)
    if (arg6 != 0)
        operator delete(arg6)
    
    if (arg14 != 0)
        arg_88 = arg14
        Botan::deallocate_memory(arg14, arg15 - arg14, 1)
    
    void* x0_22 = *arg4
    
    if (x0_22 != 0)
        int64_t x8_17 = *(arg3 + 0x30)
        *(arg3 + 0x28) = x0_22
        Botan::deallocate_memory(x0_22, x8_17 - x0_22, 1)
    
    void* x0_23 = *arg8
    
    if (x0_23 != 0)
        *(arg3 + 0x10) = x0_23
        operator delete(x0_23)
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
(*(*arg7 + 0xb0))(arg7)
void* x1_3 = *(arg3 + 0x20)
void* x9_3 = *(arg3 + 0x28)
void* x10_1 = arg9 - arg_0
int64_t x8_6 = x9_3 - x1_3

if (x10_1 u> x8_6)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg4)
    x1_3 = *(arg3 + 0x20)
    x9_3 = *(arg3 + 0x28)
else if (x10_1 u< x8_6)
    x9_3 = x1_3 + x10_1
    *(arg3 + 0x28) = x9_3

(*(*arg5 + 0x10))(arg5, x1_3, x9_3 - x1_3)
void* x0_9 = arg_0

if (x0_9 != 0)
    arg9 = x0_9
    x0_9 = operator delete(x0_9)

__cxa_end_catch(x0_9)
Botan::TLS::TLS_Data_Reader::assert_done()

if (arg6 != 0)
    operator delete(arg6)

if (arg14 == 0)
    return arg14

arg_88 = arg14
return Botan::deallocate_memory(arg14, arg15 - arg14, 1)
