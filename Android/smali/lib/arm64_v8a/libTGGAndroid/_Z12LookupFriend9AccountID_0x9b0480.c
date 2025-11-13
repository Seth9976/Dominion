// 函数: _Z12LookupFriend9AccountID
// 地址: 0x9b0480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5028))
int64_t x19_1

if (x8.d s< 1)
label_9b04c4:
    x19_1 = -1
else
    int64_t x9_1 = 0
    void* x10_1 = x0 + 0x2c
    
    while (*x10_1 != arg1)
        x9_1 += 0x100000000
        uint64_t temp0_1 = x8
        x8 -= 1
        x10_1 += 0x20
        
        if (temp0_1 == 1)
            goto label_9b04c4
    
    x19_1 = x9_1 s>> 0x20

return GetClient() + (x19_1 << 5) + 0x28
