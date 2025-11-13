// 函数: sub_ea91c8
// 地址: 0xea91c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    int64_t* x22_1 = arg4
    int64_t* x0 = arg3
    
    if (x22_1 != arg3)
        do
            x22_1 = &x22_1[-3]
            *x22_1 = arg2 + 0x10
            int64_t* x20_1 = x22_1[2]
            
            if (x20_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x20_1[1])
                    i = __stlxr(x9_1 - 1, &x20_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x20_1 + 0x10))(x20_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_1 != arg3)
        
        x0 = arg3
    
    arg4 = arg3
    operator delete(x0)

sub_1101e04(arg1)
noreturn
