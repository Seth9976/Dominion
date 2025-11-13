// 函数: _ZN23AndroidNetworkInterface10TCPConnectERK14NetworkAddress
// 地址: 0x107a2c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int32_t fd = sub_107a764(1, *entry_x1)
int32_t x1_1 = *entry_x1

if (x1_1 == 2)
    if (connect(fd, &entry_x1[1], 0x1c) == 0xffffffff)
    label_107a334:
        
        if (*__errno() != 0x73)
            close(fd)
            return 0xffffffff
else
    if (x1_1 != 1)
        XTraceAndLog("unknown address type %d")
        pthread_kill(pthread_self(), 6)
        return AndroidNetworkInterface::TCPIsConnected(XNoReturn()) __tailcall
    
    if (connect(fd, &entry_x1[1], 0x10) == 0xffffffff)
        goto label_107a334

return zx.q(fd)
