// 函数: _ZN5Botan28miller_rabin_test_iterationsEmmb
// 地址: 0xdcda10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3.d & 1) != 0 && arg2 u<= 0x80)
    if (arg1 u> 0x5ff)
        return 4
    
    if (arg1 u> 0x3ff)
        return 6
    
    if (arg1 u> 0x1ff)
        return 0xc
    
    if (arg1 u> 0xff)
        return 0x1d

return (arg2 + 2) u>> 1
