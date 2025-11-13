// 函数: _ZNSt6__ndk120__shared_ptr_emplaceINS_13packaged_taskIFN5Botan6BigIntEvEEENS_9allocatorIS5_EEE16__on_zero_sharedEv
// 地址: 0xf0b67c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::promise<Botan::BigInt>::~promise()
void* entry_x0
int64_t* result = *(entry_x0 + 0x40)

if (result == entry_x0 + 0x20)
    return (*(*result + 0x18))()

if (result == 0)
    return result

return (*(*result + 0x20))()
