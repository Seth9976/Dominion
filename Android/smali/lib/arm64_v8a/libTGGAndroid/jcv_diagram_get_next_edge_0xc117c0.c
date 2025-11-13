// 函数: jcv_diagram_get_next_edge
// 地址: 0xc117c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float i

do
    arg1 = *arg1
    
    if (arg1 == 0)
        break
    
    i = *(arg1 + 0x1c) - *(arg1 + 0x24)
    
    if (i < 0f)
        i = fneg(i)
    
    if (i >= float.s(0x34000000))
        break
    
    i = arg1[3].d f- arg1[4].d
    
    if (i < 0f)
        i = fneg(i)
while (i < float.s(0x34000000))
return arg1
