// 函数: sub_ec6aa4
// 地址: 0xec6aa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)

if (arg3 == 0)
    return 

int64_t* x19_1 = arg1

if (arg3 u>= 0xaaaaaaaaaaaaaab)
    int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x22 = *x19_1
    
    if (x22 != 0)
        void* x23_1 = x19_1[1]
        void* x0_3 = x22
        
        if (x23_1 != x22)
            do
                int64_t* x21_2 = *(x23_1 - 0x10)
                x23_1 -= 0x18
                
                if (x21_2 != 0)
                    int64_t x9_5
                    int32_t i
                    
                    do
                        x9_5 = __ldaxr(&x21_2[1])
                        i = __stlxr(x9_5 - 1, &x21_2[1])
                    while (i != 0)
                    
                    if (x9_5 == 0)
                        (*(*x21_2 + 0x10))(x21_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x23_1 != x22)
            
            x0_3 = *x19_1
        
        x19_1[1] = x22
        operator delete(x0_3)
    
    sub_1101e04(x0_2)
    noreturn

int64_t* i_1 = arg2
arg1 = operator new(arg3 * 0x18)
x19_1[2] = &arg1[arg3 * 3]
*x19_1 = arg1
x19_1[1] = arg1

do
    *arg1 = *i_1
    int64_t x9_3 = i_1[1]
    arg1[1] = x9_3
    
    if (x9_3 != 0)
        int32_t j
        
        do
            j = __stxr(__ldxr(x9_3 + 8) + 1, x9_3 + 8)
        while (j != 0)
    
    char x9_1 = i_1[2].b
    i_1 = &i_1[3]
    arg1[2].b = x9_1
    arg1 = &arg1[3]
while (i_1 != &i_1[arg3 * 3])

x19_1[1] = arg1
