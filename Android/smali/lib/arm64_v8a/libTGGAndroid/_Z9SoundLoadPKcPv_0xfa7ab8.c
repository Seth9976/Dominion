// 函数: _Z9SoundLoadPKcPv
// 地址: 0xfa7ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x30)

if (x8 s< 1)
    return 

int64_t i = 0

do
    arg1 = *(*(arg2 + 0x20) + (i << 3))
    
    if (arg1 != 0)
        AssetPreload(arg1)
        x8 = *(arg2 + 0x30)
    
    i += 1
while (i s< sx.q(x8))
