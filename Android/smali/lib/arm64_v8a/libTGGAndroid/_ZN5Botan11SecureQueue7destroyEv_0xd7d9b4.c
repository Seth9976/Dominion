// 函数: _ZN5Botan11SecureQueue7destroyEv
// 地址: 0xd7d9b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x19_1 = entry_x0 + 0x60
void* i_1 = *x19_1

if (i_1 != 0)
    void* i
    
    do
        i = *i_1
        void* x0_1 = *(i_1 + 8)
        *i_1 = 0
        *(i_1 + 0x20) = 0
        *(i_1 + 0x28) = 0
        
        if (x0_1 != 0)
            int64_t x8_1 = *(i_1 + 0x18)
            *(i_1 + 0x10) = x0_1
            Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)
        
        operator delete(i_1)
        i_1 = i
    while (i != 0)

*x19_1 = 0
x19_1[1] = 0
