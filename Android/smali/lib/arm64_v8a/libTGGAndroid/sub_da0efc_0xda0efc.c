// 函数: sub_da0efc
// 地址: 0xda0efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* arg_80)() = arg5 + 0x208
void* arg_8 = arg5 + 0xd0
void* x0_1

if (arg11 == 0)
    x0_1 = arg10
    
    if (x0_1 != 0)
        goto label_da0f3c
    
    goto label_da0f20

void* arg_60 = arg11
operator delete(arg11)
x0_1 = arg10
void* x26

if (x0_1 == 0)
label_da0f20:
    x26 = arg8
    
    if (x26 != 0)
    label_da0f4c:
        void* x27_1 = arg9
        void* x0_2 = x26
        
        if (x27_1 != x26)
            do
                int64_t* x25 = *(x27_1 - 8)
                
                if (x25 != 0)
                    int64_t x9_1
                    int32_t i
                    
                    do
                        x9_1 = __ldaxr(&x25[1])
                        i = __stlxr(x9_1 - 1, &x25[1])
                    while (i != 0)
                    
                    if (x9_1 == 0)
                        (*(*x25 + 0x10))(x25)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                void* x0_5 = *(x27_1 - 0x28)
                
                if (x0_5 != 0)
                    int64_t x8_4 = *(x27_1 - 0x18)
                    *(x27_1 - 0x20) = x0_5
                    Botan::deallocate_memory(x0_5, (x8_4 - x0_5) s>> 1, 2)
                
                x27_1 -= 0x30
            while (x27_1 != x26)
            
            x0_2 = arg8
        
        arg9 = x26
        operator delete(x0_2)
else
label_da0f3c:
    void* arg_48 = x0_1
    operator delete(x0_1)
    x26 = arg8
    
    if (x26 != 0)
        goto label_da0f4c

if (arg6 != 0)
    void* x27_2 = arg7
    void* x0_6 = arg6
    
    if (x27_2 != arg6)
        do
            int64_t* x25_1 = *(x27_2 - 8)
            
            if (x25_1 != 0)
                int64_t x9_2
                int32_t i_1
                
                do
                    x9_2 = __ldaxr(&x25_1[1])
                    i_1 = __stlxr(x9_2 - 1, &x25_1[1])
                while (i_1 != 0)
                
                if (x9_2 == 0)
                    (*(*x25_1 + 0x10))(x25_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            void* x0_9 = *(x27_2 - 0x28)
            
            if (x0_9 != 0)
                int64_t x8_9 = *(x27_2 - 0x18)
                *(x27_2 - 0x20) = x0_9
                Botan::deallocate_memory(x0_9, (x8_9 - x0_9) s>> 1, 2)
            
            x27_2 -= 0x30
        while (x27_2 != arg6)
        
        x0_6 = arg6
    
    arg7 = arg6
    operator delete(x0_6)

arg_80 = construction_vtable_for_Botan::McEliece_PublicKey-in-Botan::McEliece_PrivateKey + 0x88
void* x0_11

if (arg12 == 0)
    x0_11 = *arg4
    
    if (x0_11 != 0)
        goto label_da10dc
    
    goto label_da1084

void* arg_90 = arg12
operator delete(arg12)
x0_11 = *arg4
void* x0_12

if (x0_11 == 0)
label_da1084:
    x0_12 = *arg3
    
    if (x0_12 != 0)
        *(arg2 + 0x40) = x0_12
        operator delete(x0_12)
else
label_da10dc:
    *(arg2 + 0x58) = x0_11
    operator delete(x0_11)
    x0_12 = *arg3
    
    if (x0_12 != 0)
        *(arg2 + 0x40) = x0_12
        operator delete(x0_12)
std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
void* x0_13 = *(arg2 + 0x80)
*(arg2 + 0x78) =
    construction_vtable_for_Botan::McEliece_PublicKey-in-Botan::McEliece_PrivateKey + 0x88

if (x0_13 != 0)
    *(arg2 + 0x88) = x0_13
    operator delete(x0_13)

sub_1101e04(arg1)
noreturn
