// 函数: _ZN5Botan19XMSS_WOTS_PublicKey13TreeSignatureD2Ev
// 地址: 0xed245c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = entry_x0[3]

if (x20 != 0)
    int64_t* x8_1 = entry_x0[4]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-3]
            void* x0 = *x21_1
            
            if (x0 != 0)
                int64_t x9_1 = x8_1[-1]
                x8_1[-2] = x0
                Botan::deallocate_memory(x0, x9_1 - x0, 1)
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = entry_x0[3]
    
    entry_x0[4] = x20
    operator delete(x0_1)

void* x20_1 = *entry_x0

if (x20_1 == 0)
    return 

int64_t* x8_2 = entry_x0[1]

if (x8_2 == x20_1)
    entry_x0[1] = x20_1
    return operator delete(x20_1) __tailcall

int64_t* x21_2 = x8_2

do
    x21_2 = &x21_2[-3]
    void* x0_2 = *x21_2
    
    if (x0_2 != 0)
        int64_t x9_2 = x8_2[-1]
        x8_2[-2] = x0_2
        Botan::deallocate_memory(x0_2, x9_2 - x0_2, 1)
    
    x8_2 = x21_2
while (x20_1 != x21_2)

void* x0_3 = *entry_x0
entry_x0[1] = x20_1
return operator delete(x0_3) __tailcall
