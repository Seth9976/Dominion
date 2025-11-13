// 函数: _ZNSt6__ndk119__thread_local_dataEv
// 地址: 0x10e9184
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_24bbd80) & 1) == 0 && __cxa_guard_acquire(&data_24bbd80) != 0)
    int32_t x0_3 = pthread_key_create(&data_24bbd78, sub_10e95ac)
    
    if (x0_3 != 0)
        int64_t* x0_4 =
            std::__ndk1::__throw_system_error(x0_3, "__thread_specific_ptr construction failed")
        __cxa_guard_abort(&data_24bbd80)
        sub_1101e04(x0_4)
        noreturn
    
    __cxa_guard_release(&data_24bbd80)

return &data_24bbd78
