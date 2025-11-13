// 函数: sub_cf7cac
// 地址: 0xcf7cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    void* x22_1 = arg3
    void* x0 = arg2
    
    if (x22_1 != arg2)
        do
            int64_t* x19_1 = *(x22_1 - 8)
            x22_1 -= 0x10
            
            if (x19_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x19_1[1])
                    i = __stlxr(x9_1 - 1, &x19_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x19_1 + 0x10))(x19_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_1 != arg2)
        
        x0 = arg2
    
    arg3 = arg2
    operator delete(x0)

sub_1101e04(arg1)
noreturn
