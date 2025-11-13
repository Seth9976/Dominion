// 函数: _Z24NetworkSendSimpleMessage5NetIDi
// 地址: 0xf84e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int32_t x9_1 = arg1.d & 0xffff
int64_t* x8_1 = *gNetwork

if (x9_1 u>= x8_1[1].d)
    return 

int64_t x8_2 = *x8_1

if (*(x8_2 + mulu.dp.d(x9_1, 0x90) + 0x88) != arg1.d)
    return 

int32_t var_18_1 = arg2
int64_t var_20 = 0xfeedface
NetBufferListAppendData(x8_2 + zx.q(x9_1) * 0x90 + 0x68, 0xc, &var_20)
