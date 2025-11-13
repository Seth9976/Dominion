// 函数: _ZNSt6__ndk113packaged_taskIFvvEEclEv
// 地址: 0xf5a624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x8 = *(entry_x0 + 0x30)

if (x8 == 0)
    sub_f0bd18(3)
    noreturn

if ((zx.d(*(x8 + 0x70)) & 1) == 0)
    int64_t var_28_1 = 0
    int64_t x21_1 = *(x8 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x21_1 == 0)
        (*(**(entry_x0 + 0x20) + 0x28))()
        return std::__ndk1::promise<void>::set_value()

sub_f0bd18(2)
noreturn
