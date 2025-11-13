// 函数: _Z17GetGameSystemTimev
// 地址: 0x1066620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_24b8ca8) & 1) == 0 && __cxa_guard_acquire(&data_24b8ca8) != 0)
    data_24b8ca0 = XGetMachineTime()
    __cxa_guard_release(&data_24b8ca8)

return XMillisecondsFromMachineTime(XGetMachineTime() - data_24b8ca0) __tailcall
