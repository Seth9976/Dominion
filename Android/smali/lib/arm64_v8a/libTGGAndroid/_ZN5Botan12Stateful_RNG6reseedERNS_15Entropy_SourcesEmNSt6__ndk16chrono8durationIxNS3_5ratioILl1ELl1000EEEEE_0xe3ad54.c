// 函数: _ZN5Botan12Stateful_RNG6reseedERNS_15Entropy_SourcesEmNSt6__ndk16chrono8durationIxNS3_5ratioILl1ELl1000EEEEE
// 地址: 0xe3ad54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::recursive_mutex::lock()
int32_t x0_2 = (*(*arg1 + 0x18))(arg1)
int64_t x0_3
int64_t x8_2

if ((x0_2 & 1) != 0)
    x0_3 = std::__ndk1::chrono::system_clock::now()
    x8_2 = *arg2

int64_t result

if ((x0_2 & 1) == 0 || *(arg2 + 8) == x8_2)
    result = 0
else
    int64_t i = 0
    result = 0
    
    do
        int64_t* x0_4 = *(x8_2 + (i << 3))
        result += (*(*x0_4 + 8))(x0_4, arg1)
        
        if (result u>= arg3)
            break
        
        int64_t entry_x3
        
        if (x0_3 + entry_x3 * 0x3e8 s< std::__ndk1::chrono::system_clock::now())
            break
        
        x8_2 = *arg2
        i += 1
    while (i != (*(arg2 + 8) - x8_2) s>> 3)

if (result u>= (*(*arg1 + 0x60))(arg1))
    *(arg1 + 0x50) = 1

std::__ndk1::recursive_mutex::unlock()
return result
