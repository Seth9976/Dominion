// 函数: _ZN23AndroidNetworkInterface10TCPReceiveEjPvi
// 地址: 0x107a6e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x3
ssize_t result = recv(arg2.d, arg3, sx.q(entry_x3), 0)

if (result.d != 0)
    if (result.d != 0xffffffff)
        return result
    
    int32_t x1_1 = *__errno()
    
    if (x1_1 == 0xb)
        return 0
    
    if (x1_1 != 0x68)
        XTrace("socket error in TCPReceive %d")
    else
        XTrace("socket connection reset in TCPReceive ")

return 0xffffffff
