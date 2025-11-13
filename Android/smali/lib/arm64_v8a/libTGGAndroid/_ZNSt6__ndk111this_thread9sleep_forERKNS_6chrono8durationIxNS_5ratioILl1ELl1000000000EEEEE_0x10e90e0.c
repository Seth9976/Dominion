// 函数: _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
// 地址: 0x10e90e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
int64_t x8_1 = *arg1

if (x8_1 s>= 1)
    struct timespec var_38
    var_38.tv_sec = x8_1 u/ 0x3b9aca00
    var_38.tv_nsec = x8_1 u% 0x3b9aca00
    int32_t i
    
    do
        if (nanosleep(&var_38, &var_38).d != 0xffffffff)
            break
        
        i = *__errno()
    while (i == 4)

if (*(x19 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
