// 函数: _ZNK5Botan8Parallel5cloneEv
// 地址: 0xde1b64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_38
__builtin_memset(&var_38, 0, 0x18)
void* entry_x0
int64_t* x19 = *(entry_x0 + 8)
int64_t x20 = *(entry_x0 + 0x10)
int64_t* var_30_1

if (x19 != x20)
    do
        int64_t* x0_2 = (*(**x19 + 0x28))()
        int64_t* var_40_1 = x0_2
        int64_t var_28
        
        if (var_30_1 u>= var_28)
            std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >::__push_back_slow_path<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > >(
                &var_38)
        else
            var_40_1 = nullptr
            *var_30_1 = x0_2
            var_30_1 = &var_30_1[1]
        
        int64_t var_40_2 = 0
        
        if (var_40_1 != 0)
            (*(*var_40_1 + 0x10))()
        
        x19 = &x19[1]
    while (x20 != x19)

std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
    * result = operator new(0x20)
Botan::Parallel::Parallel(result)
void* x20_1 = var_38

if (x20_1 != 0)
    int64_t* x21_1 = var_30_1
    void* x0
    
    if (x21_1 != x20_1)
        do
            x21_1 = &x21_1[-1]
            int64_t* x0_5 = *x21_1
            *x21_1 = 0
            
            if (x0_5 != 0)
                (*(*x0_5 + 0x10))()
        while (x20_1 != x21_1)
        
        x0 = var_38
    else
        x0 = x20_1
    
    void* var_30_2 = x20_1
    operator delete(x0)

return result
