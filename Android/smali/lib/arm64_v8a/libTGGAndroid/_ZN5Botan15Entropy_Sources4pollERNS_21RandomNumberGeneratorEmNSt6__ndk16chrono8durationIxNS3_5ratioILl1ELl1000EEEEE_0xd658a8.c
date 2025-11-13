// 函数: _ZN5Botan15Entropy_Sources4pollERNS_21RandomNumberGeneratorEmNSt6__ndk16chrono8durationIxNS3_5ratioILl1ELl1000EEEEE
// 地址: 0xd658a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = std::__ndk1::chrono::system_clock::now()
int64_t x8 = *arg1

if (*(arg1 + 8) == x8)
    return 0

int64_t i = 0
int64_t result = 0

do
    int64_t* x0_1 = *(x8 + (i << 3))
    result += (*(*x0_1 + 8))(x0_1, arg2)
    
    if (result u>= arg3)
        break
    
    int64_t entry_x3
    
    if (x0 + entry_x3 * 0x3e8 s< std::__ndk1::chrono::system_clock::now())
        break
    
    x8 = *arg1
    i += 1
while (i != (*(arg1 + 8) - x8) s>> 3)

return result
