// 函数: _ZN23AndroidNetworkInterface7TCPSendEjPvi
// 地址: 0x107a65c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x3
ssize_t result = send(arg2.d, arg3, sx.q(entry_x3), 0)

if (result.d != 0xffffffff)
    return result

int32_t x1_1 = *__errno()

if (x1_1 == 0x68)
    XTrace("socket connection reset in TCPSend")
    return 0xffffffff

if (x1_1 != 0xb)
    XTrace("socket error in TCPSend %d")
    return 0xffffffff

XTrace("soccket wouldbolock")
return 0
