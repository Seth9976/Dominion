// 函数: _Z25Legionary_ShouldSmartplayR7DomGame9PlayerWho
// 地址: 0xb99840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xd40)

if (x8 s>= 1)
    int32_t x21_1 = 0
    
    do
        if (arg2 != x21_1)
            if (CountCardsWhere(arg1, zx.q(x21_1), 0x3ea) s> 3)
                return 1
            
            x8 = *(arg1 + 0xd40)
        
        x21_1 += 1
    while (x21_1 s< x8)

return 0
