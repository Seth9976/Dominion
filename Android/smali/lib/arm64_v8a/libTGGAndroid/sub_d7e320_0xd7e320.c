// 函数: sub_d7e320
// 地址: 0xd7e320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21_1 = arg2[0xd]
arg2[0xd] = 0
void* x24

if (x21_1 == 0)
    x24 = *arg3
    
    if (x24 != 0)
        goto label_d7e394
    
    goto label_d7e338

std::__ndk1::condition_variable::~condition_variable()
std::__ndk1::mutex::~mutex()
std::__ndk1::condition_variable::~condition_variable()
std::__ndk1::mutex::~mutex()
operator delete(x21_1)
x24 = *arg3
void* x0_8

if (x24 == 0)
label_d7e338:
    x0_8 = arg2[4]
    *arg2 = arg4 + 0x10
    void* x0_9
    
    if (x0_8 != 0)
    label_d7e40c:
        arg2[5] = x0_8
        operator delete(x0_8)
        x0_9 = arg2[1]
        
        if (x0_9 != 0)
        label_d7e41c:
            int64_t x8_6 = arg2[3]
            arg2[2] = x0_9
            Botan::deallocate_memory(x0_9, x8_6 - x0_9, 1)
    else
    label_d7e348:
        x0_9 = arg2[1]
        
        if (x0_9 != 0)
            goto label_d7e41c
    sub_1101e04(arg1)
    noreturn

label_d7e394:
void* x25_1 = arg2[0xb]
void* x0_5 = x24

if (x25_1 != x24)
    do
        int64_t* x21 = *(x25_1 - 8)
        x25_1 -= 0x10
        
        if (x21 != 0)
            int64_t x9_1
            int32_t i
            
            do
                x9_1 = __ldaxr(&x21[1])
                i = __stlxr(x9_1 - 1, &x21[1])
            while (i != 0)
            
            if (x9_1 == 0)
                (*(*x21 + 0x10))(x21)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x25_1 != x24)
    
    x0_5 = *arg3

arg2[0xb] = x24
operator delete(x0_5)
x0_8 = arg2[4]
*arg2 = arg4 + 0x10

if (x0_8 == 0)
    goto label_d7e348

goto label_d7e40c
