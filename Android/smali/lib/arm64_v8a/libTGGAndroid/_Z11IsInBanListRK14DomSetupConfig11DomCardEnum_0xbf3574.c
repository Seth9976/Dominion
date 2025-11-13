// 函数: _Z11IsInBanListRK14DomSetupConfig11DomCardEnum
// 地址: 0xbf3574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = 0

while (true)
    int32_t x10_1 = *(arg1 + 0xc04 + x8)
    
    if (x10_1 != 0)
        if (x10_1 == arg2)
            break
        
        x8 += 4
        
        if (x8 != 0xaf0)
            continue
    
    return 0

return 1
