// 函数: _ZNSt6__ndk120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEED0Ev
// 地址: 0xf5a2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x19 = entry_x0
*entry_x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<std::__ndk1::packaged_task<void ()>, std::__ndk1::allocator<std::__ndk1::packaged_task<void ()> > >
    + 0x10
std::__ndk1::promise<void>::~promise()
int64_t* x0_1 = *(x19 + 0x40)

if (x0_1 == &entry_x0[4])
    (*(*x0_1 + 0x18))()
else if (x0_1 != 0)
    (*(*x0_1 + 0x20))()

std::__ndk1::__shared_weak_count::~__shared_weak_count()
return operator delete(x19) __tailcall
