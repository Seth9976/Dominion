// 函数: _ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE
// 地址: 0x10a1834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg2
int32_t* x0 = std::__ndk1::__thread_local_data()

if (pthread_getspecific(zx.q(*x0)) == 0)
    int64_t x0_3 = operator new(8)
    std::__ndk1::__thread_struct::__thread_struct()
    pthread_setspecific(zx.q(*x0), x0_3)

std::__ndk1::condition_variable* x0_7 =
    pthread_getspecific(zx.q(*std::__ndk1::__thread_local_data()))
*x20
*x20 = 0
x20[1].b = 0
return std::__ndk1::__thread_struct::notify_all_at_thread_exit(x0_7, arg1) __tailcall
