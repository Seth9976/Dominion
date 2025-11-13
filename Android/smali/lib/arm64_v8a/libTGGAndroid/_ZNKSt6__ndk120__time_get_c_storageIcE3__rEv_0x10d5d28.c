// 函数: _ZNKSt6__ndk120__time_get_c_storageIcE3__rEv
// 地址: 0x10d5d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_24baf00) & 1) == 0 && __cxa_guard_acquire(&data_24baf00) != 0)
    data_24baee8 = 0x16
    __builtin_strncpy(&data_24baee9, "%I:%M:%S %p", 0xc)
    __cxa_atexit(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string, 
        &data_24baee8, &data_1122730)
    __cxa_guard_release(&data_24baf00)

return &data_24baee8
