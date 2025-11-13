// 函数: sub_9f54c0
// 地址: 0x9f54c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0 || zx.d(*(arg1 + 0xe5)) != 0)
    return 

int32_t x9_1 = *(arg1 + 0xd8)
*(arg1 + 0xe5) = 1

if (x9_1 s< 1)
    return 

int64_t* x8_2 = *(arg1 + 0xd0)
int64_t i = 0

do
    if (*(x8_2 + i * 0x70 + 0xc) s>= 1)
        int64_t j = 0
        
        do
            sub_9f54c0(*(x8_2[i * 0xe] + (j << 3)))
            x8_2 = *(arg1 + 0xd0)
            j += 1
        while (j s< sx.q(*(&x8_2[i * 0xe] + 0xc)))
        
        x9_1 = *(arg1 + 0xd8)
    
    i += 1
while (i s< sx.q(x9_1))
