// 函数: sub_10e9218
// 地址: 0x10e9218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = arg1[3]
int64_t x22 = arg1[4]

if (x21 != x22)
    do
        *(x21 + 8)
        std::__ndk1::mutex::unlock()
        *x21
        x21 += 0x10
        std::__ndk1::condition_variable::notify_all()
    while (x22 != x21)

int64_t* x21_1 = *arg1
int64_t x22_1 = arg1[1]

if (x21_1 != x22_1)
    do
        *x21_1
        std::__ndk1::__assoc_sub_state::__make_ready()
        *x21_1
        x21_1 = &x21_1[1]
        std::__ndk1::__shared_count::__release_shared()
    while (x22_1 != x21_1)

void* x0_4 = arg1[3]

if (x0_4 != 0)
    arg1[4] = x0_4
    operator delete(x0_4)

void* result = *arg1

if (result == 0)
    return result

arg1[1] = result
return operator delete(result) __tailcall
