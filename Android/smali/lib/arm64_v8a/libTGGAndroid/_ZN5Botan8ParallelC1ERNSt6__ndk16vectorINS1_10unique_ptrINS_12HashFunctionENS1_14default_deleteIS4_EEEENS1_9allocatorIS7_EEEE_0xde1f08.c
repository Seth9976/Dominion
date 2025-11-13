// 函数: _ZN5Botan8ParallelC1ERNSt6__ndk16vectorINS1_10unique_ptrINS_12HashFunctionENS1_14default_deleteIS4_EEEENS1_9allocatorIS7_EEEE
// 地址: 0xde1f08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Parallel + 0x10
void* __offset(
    std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >, 
    0x8) x20_1 = arg1 + 8
*x20_1 = 0
int64_t* entry_x1
int64_t* x8_1 = *entry_x1

if (entry_x1[1] == x8_1)
    return 

int64_t i = 0

do
    std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
        * x9_3 = x8_1[i]
    x8_1[i] = 0
    std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >
        * var_38_1 = x9_3
    int64_t* x8_2 = *(arg1 + 0x10)
    
    if (x8_2 u>= *(arg1 + 0x18))
        std::__ndk1::vector<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > > >::__push_back_slow_path<std::__ndk1::unique_ptr<Botan::HashFunction, std::__ndk1::default_delete<Botan::HashFunction> > >(
            x20_1)
    else
        var_38_1 = nullptr
        *x8_2 = x9_3
        *(arg1 + 0x10) = &x8_2[1]
    
    int64_t var_38_2 = 0
    
    if (var_38_1 != 0)
        (*(*var_38_1 + 0x10))()
    
    x8_1 = *entry_x1
    i += 1
while (i != (entry_x1[1] - x8_1) s>> 3)
