// 函数: _ZN5Botan8ParallelD0Ev
// 地址: 0xeecc80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::Parallel + 0x10

if (x20 != 0)
    int64_t* x21_1 = entry_x0[2]
    void* x0
    
    if (x21_1 != x20)
        do
            x21_1 = &x21_1[-1]
            int64_t* x0_1 = *x21_1
            *x21_1 = 0
            
            if (x0_1 != 0)
                (*(*x0_1 + 0x10))()
        while (x20 != x21_1)
        
        x0 = entry_x0[1]
    else
        x0 = x20
    
    entry_x0[2] = x20
    operator delete(x0)

return operator delete(entry_x0) __tailcall
