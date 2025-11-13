// 函数: _ZN5Botan8ParallelD2Ev
// 地址: 0xeecbf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[1]
*entry_x0 = _vtable_for_Botan::Parallel + 0x10

if (x20 == 0)
    return 

int64_t* x21 = entry_x0[2]

if (x21 == x20)
    entry_x0[2] = x20
    return operator delete(x20) __tailcall

do
    x21 = &x21[-1]
    int64_t* x0_2 = *x21
    *x21 = 0
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x10))()
while (x20 != x21)

void* x0_3 = entry_x0[1]
entry_x0[2] = x20
return operator delete(x0_3) __tailcall
