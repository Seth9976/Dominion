// 函数: sub_e96328
// 地址: 0xe96328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *arg2

if (x22 == 0)
    sub_1101e04(arg1)
    noreturn

void* x23 = arg2[1]
void* x0 = x22

if (x23 != x22)
    do
        int64_t* x21_1 = *(x23 - 8)
        x23 -= 0x10
        
        if (x21_1 != 0)
            int64_t x9_1
            int32_t i
            
            do
                x9_1 = __ldaxr(&x21_1[1])
                i = __stlxr(x9_1 - 1, &x21_1[1])
            while (i != 0)
            
            if (x9_1 == 0)
                (*(*x21_1 + 0x10))(x21_1)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x23 != x22)
    
    x0 = *arg2

arg2[1] = x22
operator delete(x0)
sub_1101e04(arg1)
noreturn
