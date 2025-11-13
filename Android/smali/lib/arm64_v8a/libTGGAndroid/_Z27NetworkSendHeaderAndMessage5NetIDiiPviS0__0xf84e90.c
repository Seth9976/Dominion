// 函数: _Z27NetworkSendHeaderAndMessage5NetIDiiPviS0_
// 地址: 0xf84e90
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

int32_t var_3c = arg5 + arg3
int32_t var_38 = arg2
int32_t var_40 = 0xfeedface
NetBufferListAppendData(x8_2 + zx.q(x9_1) * 0x90 + 0x68, 0xc, &var_40)
NetBufferListAppendData(x8_2 + zx.q(x9_1) * 0x90 + 0x68, arg3, arg4)
return NetBufferListAppendData(x8_2 + zx.q(x9_1) * 0x90 + 0x68, arg5, arg6) __tailcall
