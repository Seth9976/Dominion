// 函数: _ZNSt6__ndk17promiseIvE10get_futureEv
// 地址: 0x10a2768
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = *entry_x0

if (x20 == 0)
    sub_f0bd18(3)
    noreturn

int64_t* entry_x8
*entry_x8 = x20
std::__ndk1::mutex::lock()

if ((zx.d(*(x20 + 0x70)) & 2) != 0)
    sub_f0bd18(1)
    noreturn

std::__ndk1::__shared_count::__add_shared()
*(x20 + 0x70) |= 2
return std::__ndk1::mutex::unlock() __tailcall
