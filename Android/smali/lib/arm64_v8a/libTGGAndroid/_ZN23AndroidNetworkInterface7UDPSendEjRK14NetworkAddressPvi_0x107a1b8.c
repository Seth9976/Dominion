// 函数: _ZN23AndroidNetworkInterface7UDPSendEjRK14NetworkAddressPvi
// 地址: 0x107a1b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x4
ssize_t result = sendto(arg2.d, arg4, sx.q(entry_x4), 0, arg3 + 4, 0x10)

if (result.d != 0xffffffff)
    return result

if (*__errno() == 0x73)
    return 0

XTrace("socket error in UDPReceive %d")
return 0xffffffff
