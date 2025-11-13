// 函数: sub_cfd9bc
// 地址: 0xcfd9bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)

if (arg3 == 0)
    return 

int64_t* x19_1 = arg1

if (arg3 u>= 0xaaaaaaaaaaaaaab)
    int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x22 = *x19_1
    
    if (x22 != 0)
        void** x23_1 = x19_1[1]
        void* x0_3 = x22
        
        if (x23_1 != x22)
            do
                x23_1 = &x23_1[-3]
                *x23_1 = _vtable_for_Botan::CRL_Entry + 0x10
                int64_t* x21_2 = x23_1[2]
                
                if (x21_2 != 0)
                    int64_t x9_3
                    int32_t i
                    
                    do
                        x9_3 = __ldaxr(&x21_2[1])
                        i = __stlxr(x9_3 - 1, &x21_2[1])
                    while (i != 0)
                    
                    if (x9_3 == 0)
                        (*(*x21_2 + 0x10))(x21_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x23_1 != x22)
            
            x0_3 = *x19_1
        
        x19_1[1] = x22
        operator delete(x0_3)
    
    sub_1101e04(x0_2)
    noreturn

void* x20_1 = arg2
int64_t x21_1 = arg3 * 0x18
arg1 = operator new(x21_1)
*x19_1 = arg1
x19_1[1] = arg1
void* x8_2 = x20_1 + x21_1
x19_1[2] = &arg1[arg3 * 3]

do
    *arg1 = _vtable_for_Botan::CRL_Entry + 0x10
    arg1[1] = *(x20_1 + 8)
    int64_t x10_2 = *(x20_1 + 0x10)
    arg1[2] = x10_2
    
    if (x10_2 != 0)
        int32_t i_1
        
        do
            i_1 = __stxr(__ldxr(x10_2 + 8) + 1, x10_2 + 8)
        while (i_1 != 0)
    
    x20_1 += 0x18
    arg1 = &arg1[3]
while (x20_1 != x8_2)

x19_1[1] = arg1
