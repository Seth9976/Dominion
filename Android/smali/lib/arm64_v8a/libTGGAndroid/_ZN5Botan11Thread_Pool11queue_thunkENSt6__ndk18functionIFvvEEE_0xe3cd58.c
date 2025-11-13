// 函数: _ZN5Botan11Thread_Pool11queue_thunkENSt6__ndk18functionIFvvEEE
// 地址: 0xe3cd58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1
std::__ndk1::mutex::lock()

if (zx.d(*(x20 + 0xa0)) != 0)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x30)
    (*"ol has shut down")[0].o
    int64_t var_40 = x0_9
    v0_1 = data_71c860
    __builtin_strncpy(x0_9, "Cannot add work after thread pool has shut down", 0x30)
    int128_t var_50 = v0_1
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x8_1 = *(x20 + 0x78)
int64_t x9 = *(x20 + 0x80)
int64_t x13_2

if (x9 == x8_1)
    x13_2 = 0
else
    x13_2 = ((x9 - x8_1) s>> 3) * 0x55 - 1

int64_t x10_2 = *(x20 + 0x98) + *(x20 + 0x90)

if (x13_2 == x10_2)
    std::__ndk1::deque<std::__ndk1::function<void ()>, std::__ndk1::allocator<std::__ndk1::function<void ()> > >::__add_back_capacity()
    x8_1 = *(x20 + 0x78)
    x9 = *(x20 + 0x80)
    x10_2 = *(x20 + 0x90) + *(x20 + 0x98)

int64_t* x0_2
void* entry_x1
void* const x22

if (x9 == x8_1)
    x22 = nullptr
    x0_2 = *(entry_x1 + 0x20)
    
    if (x0_2 != 0)
    label_e3cdf8:
        
        if (entry_x1 == x0_2)
            *(x22 + 0x20) = x22
            int64_t* x0_4 = *(entry_x1 + 0x20)
            (*(*x0_4 + 0x18))(x0_4, x22)
        else
            *(x22 + 0x20) = (*(*x0_2 + 0x10))()
    else
        *(x22 + 0x20) = 0
else
    x22 = *(x8_1 + ((x10_2 u/ 0x55) << 3)) + x10_2 u% 0x55 * 0x30
    x0_2 = *(entry_x1 + 0x20)
    
    if (x0_2 != 0)
        goto label_e3cdf8
    
    *(x22 + 0x20) = 0
*(x20 + 0x98) += 1
std::__ndk1::condition_variable::notify_one()
return std::__ndk1::mutex::unlock() __tailcall
