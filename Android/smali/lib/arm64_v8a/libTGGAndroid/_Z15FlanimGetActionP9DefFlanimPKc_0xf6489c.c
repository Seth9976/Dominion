// 函数: _Z15FlanimGetActionP9DefFlanimPKc
// 地址: 0xf6489c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(*(arg1 + 8))

if (x21.d s>= 1)
    char** result = *arg1
    int64_t x22_1 = 0
    
    do
        if (strcasecmp(arg2, *result) == 0)
            return result
        
        x22_1 += 1
        result = &result[3]
    while (x22_1 s< x21)

return nullptr
