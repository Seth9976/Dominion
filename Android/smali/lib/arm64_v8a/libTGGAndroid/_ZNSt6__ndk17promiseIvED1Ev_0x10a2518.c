// 函数: _ZNSt6__ndk17promiseIvED1Ev
// 地址: 0x10a2518
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* entry_x0
void* x8_1 = *entry_x0

if (x8_1 != 0)
    if ((zx.d(*(x8_1 + 0x70)) & 1) == 0)
        char var_60_1 = 0
        int64_t x20_1 = *(x8_1 + 0x10)
        std::exception_ptr::~exception_ptr()
        
        if (x20_1 == 0 && *(*entry_x0 + 8) s>= 1)
            if ((zx.d(data_24bab90) & 1) == 0 && __cxa_guard_acquire(&data_24bab90) != 0)
                std::__ndk1::error_category::error_category()
                data_24bab88 = &_vtable_for_std::__ndk1::__future_error_category{for `std::__ndk1::error_category'}
                __cxa_atexit(std::__ndk1::error_category::~error_category, &data_24bab88, 
                    &data_1122730)
                __cxa_guard_release(&data_24bab90)
            
            int64_t var_48 = 4
            int64_t* var_40 = &data_24bab88
            std::__ndk1::error_code::message()
            void* __offset(vtable_for_std::__ndk1::future_error, 0x10) var_88
            std::logic_error::logic_error(&var_88)
            void* var_50
            
            if ((zx.d(var_60_1) & 1) != 0)
                operator delete(var_50)
            int128_t var_78 = var_48.o
            var_88 = _vtable_for_std::__ndk1::future_error + 0x10
            sub_10a26e0(&var_88)
            noreturn
    
    *entry_x0
    std::__ndk1::__shared_count::__release_shared()

if (*(x21 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
