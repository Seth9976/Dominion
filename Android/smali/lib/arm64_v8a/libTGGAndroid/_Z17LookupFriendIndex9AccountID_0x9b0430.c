// 函数: _Z17LookupFriendIndex9AccountID
// 地址: 0x9b0430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5028))

if (x9.d s>= 1)
    int64_t result = 0
    void* x8_2 = x0 + 0x2c
    
    do
        if (*x8_2 == arg1)
            return result
        
        result += 1
        x8_2 += 0x20
    while (x9 != result)

return 0xffffffff
