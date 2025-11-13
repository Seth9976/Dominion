// 函数: _Z19ClientNetworkUpdateR10GameClient
// 地址: 0x9ab988
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x18)

if (x8 - 1 u< 2)
    return 

if (x8 == 3 || x8 == 0)
    return ClientKeepConnected() __tailcall

pthread_kill(pthread_self(), 6)
return ClientHitTestPos(XNoReturn()) __tailcall
