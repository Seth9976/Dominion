// 函数: _ZNK5Botan17Certificate_Store9find_certERKNS_7X509_DNERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xe959f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = (*(*arg1 + 0x18))()
void* var_30
void* x21 = var_30
int64_t* var_38
int64_t* x0_2
int64_t* entry_x8

if (var_38 == x21)
    *entry_x8 = 0
    entry_x8[1] = 0
    
    if (var_38 == 0)
        return result
    
    x0_2 = var_38
else
    int64_t x8 = var_38[1]
    *entry_x8 = *var_38
    entry_x8[1] = x8
    
    if (x8 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8 + 8) + 1, x8 + 8)
        while (i != 0)
        x21 = var_30
    
    if (x21 != var_38)
        do
            int64_t* x19_1 = *(x21 - 8)
            x21 -= 0x10
            
            if (x19_1 != 0)
                int64_t x9_5
                int32_t i_1
                
                do
                    x9_5 = __ldaxr(&x19_1[1])
                    i_1 = __stlxr(x9_5 - 1, &x19_1[1])
                while (i_1 != 0)
                
                if (x9_5 == 0)
                    (*(*x19_1 + 0x10))(x19_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x21 != var_38)
        
        x0_2 = var_38
    else
        x0_2 = var_38
int64_t* var_30_1 = var_38
return operator delete(x0_2)
