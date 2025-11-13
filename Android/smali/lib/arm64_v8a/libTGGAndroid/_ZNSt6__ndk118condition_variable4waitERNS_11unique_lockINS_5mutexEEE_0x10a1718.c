// 函数: _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
// 地址: 0x10a1718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int64_t* entry_x1

if (zx.d(entry_x1[1].b) == 0)
    result = std::__ndk1::__throw_system_error(1, "condition_variable::wait: mutex not locked")
else
    result = pthread_cond_wait(arg1, *entry_x1)
    
    if (result.d == 0)
        return result

sub_c776cc(std::__ndk1::__throw_system_error(result.d, "condition_variable wait failed"))
noreturn
