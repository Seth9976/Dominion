// 函数: _ZN5Botan21RandomNumberGenerator23randomize_with_ts_inputEPhm
// 地址: 0xe03714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t result
int64_t entry_x2

if (((*(*arg1 + 0x18))() & 1) == 0)
    result = (*(*arg1 + 0x10))(arg1, arg2, entry_x2)
else
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    struct timespec tp
    int64_t x8_3
    
    if (clock_gettime(0, &tp) == 0)
        x8_3 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
    else
        x8_3 = std::__ndk1::chrono::system_clock::now() * 0x3e8
    
    var_48 = x8_3
    int64_t var_40_2 = Botan::OS::get_high_resolution_clock()
    result = (*(*arg1 + 0x28))(arg1, arg2, entry_x2, &var_48, 0x10)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
