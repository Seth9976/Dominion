// 函数: _ZNSt6__ndk117__assoc_sub_state9set_valueEv
// 地址: 0x10a1dd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
std::__ndk1::mutex::lock()
void* entry_x0

if ((zx.d(*(entry_x0 + 0x70)) & 1) == 0)
    int64_t var_40_1 = 0
    int64_t x22_1 = *(entry_x0 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x22_1 == 0)
        *(entry_x0 + 0x70) |= 5
        std::__ndk1::condition_variable::notify_all()
        int64_t result = std::__ndk1::mutex::unlock()
        
        if (*(x21 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f0bd18(2)
noreturn
