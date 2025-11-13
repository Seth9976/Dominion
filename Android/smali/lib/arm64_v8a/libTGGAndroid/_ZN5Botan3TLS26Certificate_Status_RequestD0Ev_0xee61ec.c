// 函数: _ZN5Botan3TLS26Certificate_Status_RequestD0Ev
// 地址: 0xee61ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[7]
*entry_x0 = _vtable_for_Botan::TLS::Certificate_Status_Request + 0x10

if (x0 != 0)
    entry_x0[8] = x0
    operator delete(x0)

void* x20 = entry_x0[4]

if (x20 != 0)
    int64_t* x8_1 = entry_x0[5]
    void* x0_2
    
    if (x8_1 == x20)
        x0_2 = x20
    else
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-3]
            void* x0_1 = *x21_1
            
            if (x0_1 != 0)
                x8_1[-2] = x0_1
                operator delete(x0_1)
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_2 = entry_x0[4]
    
    entry_x0[5] = x20
    operator delete(x0_2)

void* x0_3 = entry_x0[1]

if (x0_3 != 0)
    entry_x0[2] = x0_3
    operator delete(x0_3)

return operator delete(entry_x0) __tailcall
