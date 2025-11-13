// 函数: _ZN23AndroidNetworkInterface10UDPReceiveEjR14NetworkAddressPvi
// 地址: 0x107a220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

socklen_t addrlen = 0x10
int32_t entry_x4
int32_t x0_1 = recvfrom(arg2.d, arg4, sx.q(entry_x4), 0, arg3 + 4, &addrlen)

if (x0_1 == 0xffffffff)
    int32_t x20_1 = *__errno()
    
    if (x20_1 != 0xb && x20_1 != 0x73)
        XTrace("socket error in UDPReceive %d")
    
    if ((((x20_1 == 0xb ? 1 : 0) ^ (x20_1 == 0x73 ? 1 : 0)) & 1) != 0)
        return 0

return zx.q(x0_1)
