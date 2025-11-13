// 函数: sub_10dd4b0
// 地址: 0x10dd4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t* x8_1 = **arg1
int64_t x16 = x8_1[1]
int64_t x9 = x8_1[2]

if ((x9.d & 1) != 0)
    x16 = *(*(*x8_1 + (x9 s>> 1)) + x16)

jump(x16)
