// 函数: _Z18NetworkSendHttpGetPKcS0_
// 地址: 0xf8749c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork
uint64_t x22 = zx.q(x8[2].d)
int32_t x9_1
int64_t x23

if (x22.d != x8[1].d)
    x23 = *x8
    x9_1 = *(x23 + x22 * 0x90 + 0x88)
else
    x23 = *x8
    x9_1 = x22.d + 1
    x8[1].d = x9_1

x8[2].d = x9_1
NetLoc* x20 = x23 + x22 * 0x90
__builtin_memset(x20, 0, 0x88)
*(x20 + 0x88) = x22.d | x8[3].d << 0x10
int32_t x9_5 = x8[3].d
int32_t x9_6

if (x9_5 == 0xffff)
    x9_6 = 1
else
    x9_6 = x9_5 + 1

*(x8 + 0x14) += 1
x8[3].d = x9_6
*(x20 + 0x20) = 0xffffffff
*x20 = 0

if ((NetworkAddressSet(x20, arg1, 0x50) & 1) == 0)
    NetLocFree(x20)
    return 0

void* x22_1 = x23 + x22 * 0x90
*(x22_1 + 0x24) = 2
*(x22_1 + 0x3c) = 0x300000001
XFormatString("GET %s HTTP/1.1\r\nHost: %s\r\n\r\n")
NetBufferListAppendData(x22_1 + 0x68, XString::Length(), XString::GetString())
XString::~XString()
return zx.q(*(x20 + 0x88))
