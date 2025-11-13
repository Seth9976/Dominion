// 函数: _Z19QueuePreloadCardArt11DomCardEnum
// 地址: 0xb39bb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_3 = sx.q(*(gDomClient + 0x83b08))
int64_t i_2 = i_3

if (i_3.d s> 0)
    i_2 = i_3 & 0xffffffff
    int64_t (* x11_1)() = gDomClient + 0x83708
    int64_t i_1 = i_2
    int64_t i
    
    do
        if (*x11_1 == arg1.d)
            return 
        
        i = i_1
        i_1 -= 1
        x11_1 += 4
    while (i != 1)

*(gDomClient + 0x83b08) = i_3.d + 1
*(gDomClient + (i_2 << 2) + 0x83708) = arg1.d
