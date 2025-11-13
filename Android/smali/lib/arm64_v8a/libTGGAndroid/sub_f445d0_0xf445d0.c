// 函数: sub_f445d0
// 地址: 0xf445d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = std::__ndk1::__thread_local_data()
int64_t x1 = *arg1
*arg1 = 0
pthread_setspecific(zx.q(*x0), x1)
int64_t x10 = arg1[2]
int64_t x8 = arg1[1]
int64_t* x0_2 = arg1[3] + (x10 s>> 1)

if ((x10.d & 1) != 0)
    x8 = *(*x0_2 + x8)

x8(x0_2, arg1[4])
void* x20 = *arg1
*arg1 = 0

if (x20 != 0)
    std::__ndk1::__thread_struct::~__thread_struct()
    operator delete(x20)

operator delete(arg1)
return 0
