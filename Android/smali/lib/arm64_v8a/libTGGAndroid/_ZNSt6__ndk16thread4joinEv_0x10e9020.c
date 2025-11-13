// 函数: _ZNSt6__ndk16thread4joinEv
// 地址: 0x10e9020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x0 = *entry_x0
int64_t result

if (x0 == 0)
    result = 0x16
else
    result = pthread_join(x0, 0)
    
    if (result.d == 0)
        *entry_x0 = 0
        return result

std::__ndk1::__throw_system_error(result.d, "thread::join failed")
return std::__ndk1::thread::detach() __tailcall
