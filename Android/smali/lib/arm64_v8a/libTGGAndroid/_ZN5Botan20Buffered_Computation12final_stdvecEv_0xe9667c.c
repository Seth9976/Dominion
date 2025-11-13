// 函数: _ZN5Botan20Buffered_Computation12final_stdvecEv
// 地址: 0xe9667c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
uint64_t x0 = (**entry_x0)()
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x22

if (x0 == 0)
    x22 = 0
else
    if ((x0 & 0xffffffff80000000) != 0)
        int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_2 = *entry_x8
        
        if (x8_2 != 0)
            entry_x8[1] = x8_2
            operator delete(x8_2)
        
        sub_1101e04(x0_6)
        noreturn
    
    int64_t x0_2 = operator new(x0)
    int64_t x23_1 = x0_2 + x0
    x22 = x0_2
    *entry_x8 = x0_2
    entry_x8[2] = x23_1
    memset(x0_2, 0, x0)
    entry_x8[1] = x23_1

return (*(*entry_x0 + 0x20))(entry_x0, x22)
