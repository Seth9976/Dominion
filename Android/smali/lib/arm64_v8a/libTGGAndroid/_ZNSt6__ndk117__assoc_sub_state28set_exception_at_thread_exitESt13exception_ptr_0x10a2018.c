// 函数: _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr
// 地址: 0x10a2018
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* x20 = arg1
std::__ndk1::mutex::lock()

if ((zx.d(*(x20 + 0x70)) & 1) == 0)
    int64_t var_50_1 = 0
    int64_t x23_1 = *(x20 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x23_1 == 0)
        std::exception_ptr::operator=(x20 + 0x10)
        std::__ndk1::__thread_struct::__make_ready_at_thread_exit(pthread_getspecific(zx.q(
            *std::__ndk1::__thread_local_data())))
        int64_t result = std::__ndk1::mutex::unlock()
        
        if (*(x22 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f0bd18(2)
noreturn
