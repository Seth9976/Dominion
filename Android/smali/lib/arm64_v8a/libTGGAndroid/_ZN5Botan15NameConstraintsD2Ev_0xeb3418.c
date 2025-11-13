// 函数: _ZN5Botan15NameConstraintsD2Ev
// 地址: 0xeb3418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x20 = entry_x0[3]

if (x20 != 0)
    void** x23_1 = entry_x0[4]
    void* x0_2
    
    if (x23_1 == x20)
        x0_2 = x20
    else
        void** x24_1 = x23_1
        
        do
            x24_1 = &x24_1[-0xa]
            *x24_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_1 = zx.d(x24_1[5].b)
            x24_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(x23_1[-3])
                
                if ((zx.d(x23_1[-8].b) & 1) != 0)
                    operator delete(x23_1[-6])
            else if ((zx.d(x23_1[-8].b) & 1) != 0)
                operator delete(x23_1[-6])
            
            x23_1 = x24_1
        while (x20 != x24_1)
        
        x0_2 = entry_x0[3]
    
    entry_x0[4] = x20
    operator delete(x0_2)

void* x20_1 = *entry_x0

if (x20_1 == 0)
    return 

void** x23_2 = entry_x0[1]
void* x0_5

if (x23_2 == x20_1)
    x0_5 = x20_1
else
    void** x24_2 = x23_2
    
    do
        x24_2 = &x24_2[-0xa]
        *x24_2 = _vtable_for_Botan::GeneralSubtree + 0x10
        uint32_t x8_4 = zx.d(x24_2[5].b)
        x24_2[1] = _vtable_for_Botan::GeneralName + 0x10
        
        if ((x8_4 & 1) != 0)
            operator delete(x23_2[-3])
            
            if ((zx.d(x23_2[-8].b) & 1) != 0)
                operator delete(x23_2[-6])
        else if ((zx.d(x23_2[-8].b) & 1) != 0)
            operator delete(x23_2[-6])
        
        x23_2 = x24_2
    while (x20_1 != x24_2)
    
    x0_5 = *entry_x0

entry_x0[1] = x20_1
return operator delete(x0_5) __tailcall
