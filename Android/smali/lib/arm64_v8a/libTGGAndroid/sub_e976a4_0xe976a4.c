// 函数: sub_e976a4
// 地址: 0xe976a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23_1

if (arg4 != 0)
    char* x8_1 = arg5
    char* x0_1 = arg4
    
    if (x8_1 != arg4)
        char* x23_2 = x8_1
        
        do
            x23_2 = &x23_2[-0x18]
            
            if ((zx.d(*x23_2) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x23_2
        while (arg4 != x23_2)
        
        x0_1 = arg4
    
    arg5 = arg4
    operator delete(x0_1)
    x23_1 = *(arg2 + 0x20)
    
    if (x23_1 == 0)
        goto label_e976c8
    
    goto label_e97734

x23_1 = *(arg2 + 0x20)
void* x23_3

if (x23_1 != 0)
label_e97734:
    void* x24_1 = *(arg2 + 0x28)
    void* x0_3 = x23_1
    
    if (x24_1 != x23_1)
        do
            int64_t* x22_1 = *(x24_1 - 8)
            x24_1 -= 0x10
            
            if (x22_1 != 0)
                int64_t x9_2
                int32_t i
                
                do
                    x9_2 = __ldaxr(&x22_1[1])
                    i = __stlxr(x9_2 - 1, &x22_1[1])
                while (i != 0)
                
                if (x9_2 == 0)
                    (*(*x22_1 + 0x10))(x22_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x24_1 != x23_1)
        
        x0_3 = *(arg2 + 0x20)
    
    *(arg2 + 0x28) = x23_1
    operator delete(x0_3)
    x23_3 = *arg3
    
    if (x23_3 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_e976c8:
    x23_3 = *arg3
    
    if (x23_3 == 0)
        sub_1101e04(arg1)
        noreturn

void* x24_2 = *(arg2 + 0x10)
void* x0_6 = x23_3

if (x24_2 != x23_3)
    do
        int64_t* x22_2 = *(x24_2 - 8)
        x24_2 -= 0x10
        
        if (x22_2 != 0)
            int64_t x9_3
            int32_t i_1
            
            do
                x9_3 = __ldaxr(&x22_2[1])
                i_1 = __stlxr(x9_3 - 1, &x22_2[1])
            while (i_1 != 0)
            
            if (x9_3 == 0)
                (*(*x22_2 + 0x10))(x22_2)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x24_2 != x23_3)
    
    x0_6 = *arg3

*(arg2 + 0x10) = x23_3
operator delete(x0_6)
sub_1101e04(arg1)
noreturn
