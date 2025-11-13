// 函数: _Z15co_resume_asyncRPv
// 地址: 0xc835e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
*g_current_coroutine = x8
return pthread_mutex_unlock(*(x8 + 0x18)) __tailcall
