// 函数: _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE
// 地址: 0x10a23e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
*arg1 = entry_x1
std::__ndk1::mutex::lock()

if ((zx.d(*(entry_x1 + 0x70)) & 2) != 0)
    sub_f0bd18(1)
    noreturn

std::__ndk1::__shared_count::__add_shared()
*(entry_x1 + 0x70) |= 2
return std::__ndk1::mutex::unlock() __tailcall
