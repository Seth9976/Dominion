// 函数: ogg_sync_pageout
// 地址: 0x1096b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(arg1 + 8) & 0x80000000) != 0)
    return 0

int64_t result

while (true)
    result = ogg_sync_pageseek(arg1, arg2)
    
    if (result s> 0)
        return 1
    
    if (result == 0)
        break
    
    if (*(arg1 + 0x14) == 0)
        result = 0xffffffff
        *(arg1 + 0x14) = 1
        break

return result
