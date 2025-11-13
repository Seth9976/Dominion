// 函数: _Z29NetworkSendHttpGetFromAddressRK14NetworkAddressPKcS3_
// 地址: 0xf87378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetwork
uint64_t x10 = zx.q(x8[2].d)
int64_t x11_1
int32_t x12

if (x10.d != x8[1].d)
    x11_1 = *x8
    x12 = *(x11_1 + x10 * 0x90 + 0x88)
else
    x11_1 = *x8
    x12 = x10.d + 1
    x8[1].d = x12

x8[2].d = x12
int128_t v0
v0.q = 0
v0:8.q = 0
int32_t* x20 = x11_1 + x10 * 0x90
__builtin_memset(x20, 0, 0x88)
x20[0x22] = x10.d | x8[3].d << 0x10
int32_t x10_2 = x8[3].d
int32_t x10_3

if (x10_2 == 0xffff)
    x10_3 = 1
else
    x10_3 = x10_2 + 1

*(x8 + 0x14) += 1
x8[3].d = x10_3
x20[8] = 0xffffffff
*x20 = 0
v0 = *arg1
int128_t v1 = *(arg1 + 0x10)
x20[9] = 2
*x20 = v0
*(x20 + 0x10) = v1
*(x20 + 0x3c) = 0x300000001
XFormatString("GET %s HTTP/1.1\r\nHost: %s\r\n\r\n")
NetBufferListAppendData(&x20[0x1a], XString::Length(), XString::GetString())
XString::~XString()
return zx.q(x20[0x22])
