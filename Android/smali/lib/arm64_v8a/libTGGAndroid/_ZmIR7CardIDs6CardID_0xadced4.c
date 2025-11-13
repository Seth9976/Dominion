// 函数: _ZmIR7CardIDs6CardID
// 地址: 0xadced4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0xc80))

if (i_2.d s< 1)
    return 

uint64_t i_1 = i_2
CardIDs& x9_1 = arg1
uint64_t i

do
    if (*x9_1 == arg2)
        *(arg1 + 0xc80) = i_2.d - 1
        *x9_1 = *(arg1 + ((sx.q(i_2.d) - 1) << 2))
        return 
    
    i = i_1
    i_1 -= 1
    x9_1 += 4
while (i != 1)
