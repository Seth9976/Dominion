// 函数: _ZN5Botan20Buffered_Computation5finalINSt6__ndk19allocatorIhEEEEvRNS2_6vectorIhT_EE
// 地址: 0xe4617c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = (**arg1)()
int64_t* entry_x1
void* x21 = *entry_x1
int64_t x0_1 = entry_x1[1]
size_t x22 = x0_1 - x21
size_t x23 = x0 - x22

if (x0 u> x22)
    int64_t x8_2 = entry_x1[2]
    
    if (x8_2 - x0_1 u>= x23)
        if (x23 != 0)
            memset(x0_1, 0, x23)
            x0_1 += x23
        
        entry_x1[1] = x0_1
    else
        if ((x0 & 0xffffffff80000000) != 0)
            return Botan::TLS::Hello_Request::Hello_Request(
                std::__ndk1::__vector_base_common<true>::__throw_length_error()) __tailcall
        
        void* x8_3 = x8_2 - x21
        int64_t x10_1 = x8_3 << 1
        int64_t x10_2
        
        x10_2 = x10_1 u< x0 ? x0 : x10_1
        
        int64_t x26_1
        
        x26_1 = x8_3 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        int64_t x25_1
        
        if (x26_1 == 0)
            x25_1 = 0
        else
            x25_1 = operator new(x26_1)
        
        memset(x25_1 + x22, 0, x23)
        
        if (x22 s>= 1)
            memcpy(x25_1, x21, x22)
        
        *entry_x1 = x25_1
        entry_x1[1] = x25_1 + x0
        entry_x1[2] = x25_1 + x26_1
        
        if (x21 != 0)
            operator delete(x21)
else if (x0 u< x22)
    entry_x1[1] = x21 + x0

*entry_x1
jump(*(*arg1 + 0x20))
