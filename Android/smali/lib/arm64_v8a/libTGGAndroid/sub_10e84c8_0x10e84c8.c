// 函数: sub_10e84c8
// 地址: 0x10e84c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 0x1000)
    if ((zx.d(data_24bbd60) & 1) == 0)
        if (__cxa_guard_acquire(&data_24bbd60) == 0)
            arg2 = arg2
        else
            data_24bbd58 = &
                _vtable_for_std::__ndk1::__generic_error_category{for `std::__ndk1::error_category'}
            __cxa_guard_release(&data_24bbd60)
            arg2 = arg2
else if ((zx.d(data_24bbd70) & 1) == 0)
    if (__cxa_guard_acquire(&data_24bbd70) == 0)
        arg2 = arg2
    else
        data_24bbd68 =
            &_vtable_for_std::__ndk1::__system_error_category{for `std::__ndk1::error_category'}
        __cxa_guard_release(&data_24bbd70)
        arg2 = arg2

return zx.q(arg2)
