// 函数: _ZNK5Botan8Parallel10copy_stateEv
// 地址: 0xde1d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_38
__builtin_memset(&var_38, 0, 0x18)
void* entry_x0
int64_t* x20 = *(entry_x0 + 8)
int64_t x21 = *(entry_x0 + 0x10)
int64_t* var_30_1

if (x20 != x21)
    do
        (*(**x20 + 0x50))()
        int64_t* var_40
        int64_t var_28
        
        if (var_30_1 u>= var_28)
            std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >::__push_back_slow_path<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > >(
                &var_38)
        else
            int64_t* x9_3 = var_40
            var_40 = nullptr
            *var_30_1 = x9_3
            var_30_1 = &var_30_1[1]
        
        int64_t* x0_4 = var_40
        var_40 = nullptr
        
        if (x0_4 != 0)
            (*(*x0_4 + 0x10))()
        
        x20 = &x20[1]
    while (x21 != x20)

std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
    * x0 = operator new(0x20)
int64_t result = Botan::Parallel::Parallel(x0)
void* x21_1 = var_38
std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
    ** entry_x8
*entry_x8 = x0

if (x21_1 == 0)
    return result

int64_t* x19_1 = var_30_1
void* x0_1

if (x19_1 != x21_1)
    do
        x19_1 = &x19_1[-1]
        int64_t* x0_5 = *x19_1
        *x19_1 = 0
        
        if (x0_5 != 0)
            (*(*x0_5 + 0x10))()
    while (x21_1 != x19_1)
    
    x0_1 = var_38
else
    x0_1 = x21_1

void* var_30_2 = x21_1
return operator delete(x0_1)
