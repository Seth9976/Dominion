// 函数: _Z8IsFriend9AccountID
// 地址: 0x9da84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5028) s>= 1)
    int64_t x20_1 = 0
    int64_t x21_1 = 0
    int64_t x8_1
    
    do
        if (*(GetClient() + x20_1 + 0x2c) == arg1 && *(GetClient() + x20_1 + 0x3c) == 1)
            return 1
        
        x21_1 += 1
        x8_1 = sx.q(*(GetClient() + 0x5028))
        x20_1 += 0x20
    while (x21_1 s< x8_1)

return 0
