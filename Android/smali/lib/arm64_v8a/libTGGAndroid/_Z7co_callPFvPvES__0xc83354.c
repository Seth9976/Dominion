// 函数: _Z7co_callPFvPvES_
// 地址: 0xc83354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
union pthread_attr_t attr
attr.__size.__offset(0x38).q = *(x22 + 0x28)
int32_t* result = XPooledCalloc(0x30)
*(result + 8) = arg1
*(result + 0x10) = arg2
union pthread_mutex_t* mutex = XMalloc(0x28)
pthread_mutex_init(mutex, nullptr)
*(result + 0x20) = mutex
union pthread_mutex_t* mutex_1 = XMalloc(0x28)
pthread_mutex_init(mutex_1, nullptr)
union pthread_mutex_t* mutex_2 = *(result + 0x20)
*(result + 0x18) = mutex_1
*result = 0
pthread_mutex_lock(mutex_2)
pthread_mutex_lock(*(result + 0x18))
attr.__size.__offset(0x30).q = 0
attr.__size.__offset(0x10).o = zx.o(0)
attr.__size.__offset(0x20).o = zx.o(0)
attr.__size.o = zx.o(0)
pthread_attr_init(&attr)
pthread_attr_setstacksize(&attr, 0x100000)
int64_t var_78
pthread_create(&var_78, &attr, co_start, result)
pthread_attr_destroy(&attr)
*(result + 0x28) = var_78

if (*(x22 + 0x28) == attr.__size.__offset(0x38).q)
    return result

__stack_chk_fail()
noreturn
