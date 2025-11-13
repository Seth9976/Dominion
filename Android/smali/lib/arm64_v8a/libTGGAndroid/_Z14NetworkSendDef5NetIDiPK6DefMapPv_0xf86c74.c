// 函数: _Z14NetworkSendDef5NetIDiPK6DefMapPv
// 地址: 0xf86c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int64_t* x9_1 = *gNetwork
int32_t x8_1 = arg1.d & 0xffff

if (x8_1 u>= x9_1[1].d)
    return 

int64_t x22_1 = *x9_1

if (*(x22_1 + mulu.dp.d(x8_1, 0x90) + 0x88) != arg1.d)
    return 

int32_t var_48
int32_t var_44
DefBinGetSize(arg4, arg3, &var_44, &var_48)
void* x22_2 = x22_1 + zx.q(x8_1) * 0x90
int32_t var_3c_1 = var_44
int32_t var_38_1 = arg2
int32_t var_40 = 0xfeedface
NetBufferListAppendData(x22_2 + 0x68, 0xc, &var_40)
NetBufferMakeRoom(x22_2 + 0x68, var_44)
void* x8_4 = **(x22_2 + 0x70)
DefBinSerialize(arg4, arg3, x8_4 + *(x8_4 + 0xfde8) + *(x8_4 + 0xfdec), 0)
*(x8_4 + 0xfdec) += var_44
