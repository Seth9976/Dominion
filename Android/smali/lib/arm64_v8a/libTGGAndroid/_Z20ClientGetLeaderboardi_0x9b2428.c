// 函数: _Z20ClientGetLeaderboardi
// 地址: 0x9b2428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0xf4259)
    return GetClient() + 0x7608

if (arg1 == 0xf425a)
    return GetActiveProfile() + 0x75a8

if (arg1 == 0xf4266)
    return GetClient() + 0x7780

pthread_kill(pthread_self(), 6)
return GameClientHandleMessage(XNoReturn()) __tailcall
