// 函数: _ZNSt6__ndk17promiseIN5Botan6BigIntEED2Ev
// 地址: 0xf0bbdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = *entry_x0

if (x8 == 0)
    return 

if ((zx.d(*(x8 + 0x70)) & 1) == 0)
    int64_t var_18_1 = 0
    int64_t x20_1 = *(x8 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x20_1 == 0)
        void* x8_1 = *entry_x0
        
        if (*(x8_1 + 8) s>= 1)
            void* var_50 = x8_1
            std::__ndk1::future_category()
            void var_48
            std::__ndk1::future_error::future_error(&var_48)
            std::logic_error* x0_3 = __cxa_allocate_exception(0x20)
            void** x20_2 = x0_3
            std::logic_error::logic_error(x0_3)
            *x20_2 = _vtable_for_std::__ndk1::future_error + 0x10
            int128_t var_38
            *(x20_2 + 0x10) = var_38
            __cxa_throw(x20_2, _typeinfo_for_std::__ndk1::future_error, 
                std::__ndk1::future_error::~future_error)
            noreturn

entry_x0 = *entry_x0
int64_t x9_3
int32_t i

do
    x9_3 = __ldaxr(&entry_x0[1])
    i = __stlxr(x9_3 - 1, &entry_x0[1])
while (i != 0)

if (x9_3 == 0)
    (*(*entry_x0 + 0x10))()
