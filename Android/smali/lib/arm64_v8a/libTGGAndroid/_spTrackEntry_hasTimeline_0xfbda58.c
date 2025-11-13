// 函数: _spTrackEntry_hasTimeline
// 地址: 0xfbda58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
uint64_t i_1 = zx.q(*(x8 + 0xc))

if (i_1.d s>= 1)
    int64_t* x21_1 = *(x8 + 0x10)
    uint64_t i
    
    do
        if (spTimeline_getPropertyId(*x21_1) == arg2)
            return 1
        
        i = i_1
        i_1 -= 1
        x21_1 = &x21_1[1]
    while (i != 1)

return 0
