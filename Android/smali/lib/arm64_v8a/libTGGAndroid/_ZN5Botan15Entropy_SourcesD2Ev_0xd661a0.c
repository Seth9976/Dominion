// 函数: _ZN5Botan15Entropy_SourcesD2Ev
// 地址: 0xd661a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = *entry_x0

if (x20 == 0)
    return 

int64_t* x21 = entry_x0[1]

if (x21 == x20)
    entry_x0[1] = x20
    return operator delete(x20) __tailcall

do
    x21 = &x21[-1]
    int64_t* x0_2 = *x21
    *x21 = 0
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x18))()
while (x20 != x21)

void* x0_3 = *entry_x0
entry_x0[1] = x20
return operator delete(x0_3) __tailcall
