// 函数: _ZN6SoLoud6Thread4Pool4initEi
// 地址: 0x1073028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 s< 1)
    return 

int32_t* x19_1 = arg1
*(arg1 + 0x2018) = 0
union pthread_mutex_t* mutex = operator new(0x28)
union pthread_mutexattr_t mutexattr
pthread_mutexattr_init(&mutexattr)
pthread_mutex_init(mutex, &mutexattr)
*(x19_1 + 0x10) = mutex
x19_1[0x808] = 1
*x19_1 = entry_x1
int64_t i = 0
*(x19_1 + 8) = operator new[](zx.q(entry_x1) << 3)

do
    void (** x0_4)(void* arg1) = operator new(0x10)
    *x0_4 = sub_10730f8
    x0_4[1] = x19_1
    int64_t x0_5 = operator new(8)
    pthread_create(x0_5, 0, sub_1072ebc, x0_4)
    *(*(x19_1 + 8) + (i << 3)) = x0_5
    i += 1
while (i s< sx.q(*x19_1))
