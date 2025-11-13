// 函数: _Z14mutex_try_lockPv
// 地址: 0xc8329c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = pthread_mutex_trylock()

if ((x0 | 0x10) == 0x10)
    return zx.q(x0 == 0 ? 1 : 0)

pthread_kill(pthread_self(), 6)
return mutex_release(XNoReturn()) __tailcall
