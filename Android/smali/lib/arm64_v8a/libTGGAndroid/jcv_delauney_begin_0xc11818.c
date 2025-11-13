// 函数: jcv_delauney_begin
// 地址: 0xc11818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = 0
int64_t* x8_1 = *arg1 + 8
float i

do
    x8_1 = *x8_1
    
    if (x8_1 == 0)
        break
    
    i = *(x8_1 + 0x1c) - *(x8_1 + 0x24)
    
    if (i < 0f)
        i = fneg(i)
    
    if (i >= float.s(0x34000000))
        break
    
    i = x8_1[3].d f- x8_1[4].d
    
    if (i < 0f)
        i = fneg(i)
while (i < float.s(0x34000000))
*arg2 = x8_1
