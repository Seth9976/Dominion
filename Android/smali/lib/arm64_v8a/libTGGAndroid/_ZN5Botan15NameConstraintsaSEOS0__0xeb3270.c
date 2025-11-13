// 函数: _ZN5Botan15NameConstraintsaSEOS0_
// 地址: 0xeb3270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1

if (x21 != 0)
    void** x24_1 = *(arg1 + 8)
    void* x0_2
    
    if (x24_1 == x21)
        x0_2 = x21
    else
        void** x25_1 = x24_1
        
        do
            x25_1 = &x25_1[-0xa]
            *x25_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_1 = zx.d(x25_1[5].b)
            x25_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(x24_1[-3])
                
                if ((zx.d(x24_1[-8].b) & 1) != 0)
                    operator delete(x24_1[-6])
            else if ((zx.d(x24_1[-8].b) & 1) != 0)
                operator delete(x24_1[-6])
            
            x24_1 = x25_1
        while (x21 != x25_1)
        
        x0_2 = *arg1
    
    *(arg1 + 8) = x21
    operator delete(x0_2)
    __builtin_memset(arg1, 0, 0x18)

int64_t* entry_x1
*arg1 = *entry_x1
*(arg1 + 8) = entry_x1[1]
*(arg1 + 0x10) = entry_x1[2]
__builtin_memset(entry_x1, 0, 0x18)
void* x23_2 = *(arg1 + 0x18)

if (x23_2 != 0)
    void** x26_1 = *(arg1 + 0x20)
    void* x0_5
    
    if (x26_1 == x23_2)
        x0_5 = x23_2
    else
        void** x27_1 = x26_1
        
        do
            x27_1 = &x27_1[-0xa]
            *x27_1 = _vtable_for_Botan::GeneralSubtree + 0x10
            uint32_t x8_7 = zx.d(x27_1[5].b)
            x27_1[1] = _vtable_for_Botan::GeneralName + 0x10
            
            if ((x8_7 & 1) != 0)
                operator delete(x26_1[-3])
                
                if ((zx.d(x26_1[-8].b) & 1) != 0)
                    operator delete(x26_1[-6])
            else if ((zx.d(x26_1[-8].b) & 1) != 0)
                operator delete(x26_1[-6])
            
            x26_1 = x27_1
        while (x23_2 != x27_1)
        
        x0_5 = *(arg1 + 0x18)
    
    *(arg1 + 0x20) = x23_2
    operator delete(x0_5)
    __builtin_memset(arg1 + 0x18, 0, 0x18)

*(arg1 + 0x18) = entry_x1[3]
*(arg1 + 0x20) = entry_x1[4]
*(arg1 + 0x28) = entry_x1[5]
__builtin_memset(&entry_x1[3], 0, 0x18)
return arg1
