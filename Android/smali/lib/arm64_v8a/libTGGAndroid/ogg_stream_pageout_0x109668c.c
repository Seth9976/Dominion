// 函数: ogg_stream_pageout
// 地址: 0x109668c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0 || *arg1 == 0)
    return 0

int64_t x8_2 = arg1[7]

if (arg1[0x2e].d == 0)
    if (x8_2 == 0)
        return sub_1096314(arg1, arg2, 0, 0x1000) __tailcall
    
    if (*(arg1 + 0x174) != 0)
        return sub_1096314(arg1, arg2, 0, 0x1000) __tailcall
else if (x8_2 == 0)
    return sub_1096314(arg1, arg2, 0, 0x1000) __tailcall

return sub_1096314(arg1, arg2, 1, 0x1000) __tailcall
