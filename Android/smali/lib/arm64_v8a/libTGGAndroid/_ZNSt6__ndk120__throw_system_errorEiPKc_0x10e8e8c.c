// 函数: _ZNSt6__ndk120__throw_system_errorEiPKc
// 地址: 0x10e8e8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = __cxa_allocate_exception(0x20)

if ((zx.d(data_24bbd70) & 1) == 0 && __cxa_guard_acquire(&data_24bbd70) != 0)
    data_24bbd68 =
        &_vtable_for_std::__ndk1::__system_error_category{for `std::__ndk1::error_category'}
    __cxa_guard_release(&data_24bbd70)

std::__ndk1::system_error::system_error(x0, zx.q(arg1))
__cxa_throw(x0, _typeinfo_for_std::__ndk1::system_error, std::__ndk1::system_error::~system_error)
noreturn
