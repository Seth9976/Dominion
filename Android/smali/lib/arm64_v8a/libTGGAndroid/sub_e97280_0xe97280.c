// 函数: sub_e97280
// 地址: 0xe97280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23_1 = *(arg2 + 0x20)
void* x23

if (x23_1 != 0)
    void* x24_1 = *(arg2 + 0x28)
    void* x0_1 = x23_1
    
    if (x24_1 != x23_1)
        do
            int64_t* x21_1 = *(x24_1 - 8)
            x24_1 -= 0x10
            
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
        while (x24_1 != x23_1)
        
        x0_1 = *(arg2 + 0x20)
    
    *(arg2 + 0x28) = x23_1
    operator delete(x0_1)
    x23 = *arg3
    
    if (x23 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x23 = *arg3
    
    if (x23 == 0)
        sub_1101e04(arg1)
        noreturn

void* x24_2 = *(arg2 + 0x10)
void* x0_4 = x23

if (x24_2 != x23)
    do
        int64_t* x21_2 = *(x24_2 - 8)
        x24_2 -= 0x10
        
        if (x21_2 != 0)
            int64_t x9_2
            int32_t i_1
            
            do
                x9_2 = __ldaxr(&x21_2[1])
                i_1 = __stlxr(x9_2 - 1, &x21_2[1])
            while (i_1 != 0)
            
            if (x9_2 == 0)
                (*(*x21_2 + 0x10))(x21_2)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x24_2 != x23)
    
    x0_4 = *arg3

*(arg2 + 0x10) = x23
operator delete(x0_4)
sub_1101e04(arg1)
noreturn
