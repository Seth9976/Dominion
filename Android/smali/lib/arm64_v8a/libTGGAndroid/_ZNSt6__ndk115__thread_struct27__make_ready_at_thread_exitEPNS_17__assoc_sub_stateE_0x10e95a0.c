// 函数: _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE
// 地址: 0x10e95a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t* x0 = *arg1
int64_t* x8 = x0[1]
int64_t entry_x1

if (x8 == x0[2])
    void* x1 = *x0
    void* x2_1 = x8 - x1
    int64_t x21_1 = x2_1 s>> 3
    
    if ((x21_1 + 1) u>> 0x3d != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        return std::__ndk1::__thread_struct::__thread_struct() __tailcall
    
    int64_t x9_2 = x2_1 s>> 2
    int64_t x8_3
    
    if (x9_2 u< x21_1 + 1)
        x8_3 = x21_1 + 1
    else
        x8_3 = x9_2
    
    int64_t x22_1
    
    x22_1 = x21_1 u< 0xfffffffffffffff ? x8_3 : 0x1fffffffffffffff
    
    int64_t x0_2
    int64_t x8_5
    
    if (x22_1 == 0)
        x0_2 = 0
        x8_5 = x21_1
    else
        x0_2 = operator new(x22_1 << 3)
        x1 = *x0
        x2_1 = x0[1] - x1
        x8_5 = x2_1 s>> 3
    
    int64_t* x23_1 = x0_2 + (x21_1 << 3)
    void* x21_2 = x23_1 - (x8_5 << 3)
    *x23_1 = entry_x1
    
    if (x2_1 s>= 1)
        memcpy(x21_2, x1, x2_1)
        x1 = *x0
    
    *x0 = x21_2
    x0[1] = &x23_1[1]
    x0[2] = x0_2 + (x22_1 << 3)
    
    if (x1 != 0)
        operator delete(x1)
else
    *x8 = entry_x1
    x0[1] = &x8[1]
return std::__ndk1::__shared_count::__add_shared() __tailcall
