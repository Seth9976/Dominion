// 函数: _Z16ActiveGameExistsv
// 地址: 0x9ae88c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5068))

if (x8.d u> 4)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return GameEnd() __tailcall

int32_t x8_1 = 0

switch (x8)
    case 1, 3, 4
        x8_1 = 1
    case 2
        x8_1 = *(x0 + 0x506c)
        
        if (x8_1 != 0)
            uint64_t x9_1 = zx.q(x8_1.w)
            
            if (x9_1.d u>= *(x0 + 0x5088))
                return 0
            
            int64_t x10_1 = *(x0 + 0x5080)
            return zx.q(x10_1 != 0 ? 1 : 0)
                & zx.q(*(x10_1 + x9_1 * 0x1338 + 0x1330) == x8_1 ? 1 : 0)

return zx.q(x8_1)
