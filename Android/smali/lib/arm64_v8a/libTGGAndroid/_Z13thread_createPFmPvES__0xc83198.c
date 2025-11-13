// 函数: _Z13thread_createPFmPvES_
// 地址: 0xc83198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
union pthread_attr_t attr
attr.__size.__offset(0x38).q = *(x21 + 0x28)
attr.__size.__offset(0x30).q = 0
attr.__size.__offset(0x10).o = zx.o(0)
attr.__size.__offset(0x20).o = zx.o(0)
attr.__size.o = zx.o(0)
pthread_attr_init(&attr)
pthread_attr_setstacksize(&attr, 0x100000)
int64_t result
pthread_create(&result, &attr, arg1, arg2)
pthread_attr_destroy(&attr)

if (*(x21 + 0x28) == attr.__size.__offset(0x38).q)
    return result

__stack_chk_fail()
noreturn
