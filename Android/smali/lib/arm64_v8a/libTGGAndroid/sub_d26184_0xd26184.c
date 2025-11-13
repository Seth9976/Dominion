// 函数: sub_d26184
// 地址: 0xd26184
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg3[1])
        i = __stlxr(x9_1 - 1, &arg3[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg3 + 0x10))(arg3)
        std::__ndk1::__shared_weak_count::__release_weak()

__cxa_begin_catch(arg1)
*arg2 = 0
return __cxa_end_catch() __tailcall
