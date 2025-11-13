// 函数: _ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr
// 地址: 0x10a28bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
int64_t x19 = *arg1

if (x19 == 0)
    sub_f0bd18(3)
    noreturn

void var_30
std::exception_ptr::exception_ptr(&var_30)
std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(x19)
int64_t result = std::exception_ptr::~exception_ptr()

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
