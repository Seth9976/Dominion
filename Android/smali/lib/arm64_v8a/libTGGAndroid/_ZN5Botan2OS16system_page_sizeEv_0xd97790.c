// 函数: _ZN5Botan2OS16system_page_sizeEv
// 地址: 0xd97790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = sysconf(0x27)

if (result s> 1)
    return result

return 0x1000
