// 函数: _ZNSt6__ndk120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv
// 地址: 0xf5a334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::promise<void>::~promise()
void* entry_x0
int64_t* result = *(entry_x0 + 0x40)

if (result == entry_x0 + 0x20)
    return (*(*result + 0x18))()

if (result == 0)
    return result

return (*(*result + 0x20))()
