// 函数: _ZN5Botan21RandomNumberGenerator6reseedERNS_15Entropy_SourcesEmNSt6__ndk16chrono8durationIxNS3_5ratioILl1ELl1000EEEEE
// 地址: 0xe038f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (((*(*arg1 + 0x18))() & 1) != 0)
    int64_t x0_1 = std::__ndk1::chrono::system_clock::now()
    int64_t x8_2 = *arg2
    
    if (*(arg2 + 8) != x8_2)
        int64_t i = 0
        int64_t result = 0
        
        do
            int64_t* x0_2 = *(x8_2 + (i << 3))
            result += (*(*x0_2 + 8))(x0_2, arg1)
            
            if (result u>= arg3)
                break
            
            int64_t entry_x3
            
            if (x0_1 + entry_x3 * 0x3e8 s< std::__ndk1::chrono::system_clock::now())
                break
            
            x8_2 = *arg2
            i += 1
        while (i != (*(arg2 + 8) - x8_2) s>> 3)
        
        return result

return 0
