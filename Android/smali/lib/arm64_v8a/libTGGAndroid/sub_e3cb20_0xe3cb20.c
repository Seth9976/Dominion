// 函数: sub_e3cb20
// 地址: 0xe3cb20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = operator new(8)
std::__ndk1::__thread_struct::__thread_struct()
int64_t* x0_1
int128_t v0
x0_1, v0 = operator new(0x20)
v0 = *arg2
int64_t x8 = *arg3
*x0_1 = x0
*(x0_1 + 8) = v0
x0_1[3] = x8
int32_t result = pthread_create(arg1, 0, sub_f4a180, x0_1)

if (result == 0)
    return result

int64_t* x0_3 = std::__ndk1::__throw_system_error(result, "thread constructor failed")
std::__ndk1::__thread_struct::~__thread_struct()
operator delete(x0)
sub_1101e04(x0_3)
noreturn
