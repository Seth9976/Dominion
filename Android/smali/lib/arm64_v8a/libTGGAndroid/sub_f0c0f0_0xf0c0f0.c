// 函数: sub_f0c0f0
// 地址: 0xf0c0f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()

if ((zx.d(*(arg1 + 0x70)) & 1) == 0)
    int64_t var_28_1 = 0
    int64_t x22_1 = *(arg1 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x22_1 == 0)
        __builtin_memset(arg1 + 0x78, 0, 0x18)
        *(arg1 + 0x90) = -1
        *(arg1 + 0x98) = 1
        *(arg1 + 0x78) = *arg2
        *arg2 = 0
        int64_t x9 = *(arg1 + 0x80)
        *(arg1 + 0x80) = arg2[1]
        arg2[1] = x9
        int64_t x9_1 = *(arg1 + 0x88)
        *(arg1 + 0x88) = arg2[2]
        arg2[2] = x9_1
        int64_t x9_2 = *(arg1 + 0x90)
        *(arg1 + 0x90) = arg2[3]
        arg2[3] = x9_2
        int32_t x9_3 = *(arg1 + 0x98)
        *(arg1 + 0x98) = arg2[4].d
        arg2[4].d = x9_3
        *(arg1 + 0x70) |= 5
        std::__ndk1::condition_variable::notify_all()
        return std::__ndk1::mutex::unlock()

sub_f0bd18(2)
noreturn
