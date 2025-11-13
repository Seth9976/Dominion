// 函数: _Z18GameCreateTimeIconRK9GameSetup
// 地址: 0xb34144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x20))

if (x8.d u< 6)
    return (&data_1153cc0)[x8]

pthread_kill(pthread_self(), 6)
return GameCreateRulesIcon(XNoReturn()) __tailcall
