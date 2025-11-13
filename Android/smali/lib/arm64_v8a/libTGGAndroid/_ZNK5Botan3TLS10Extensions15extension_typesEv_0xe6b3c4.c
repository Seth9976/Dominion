// 函数: _ZNK5Botan3TLS10Extensions15extension_typesEv
// 地址: 0xe6b3c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t** entry_x8
entry_x8[1] = 0
entry_x8[2] = 0
*entry_x8 = &entry_x8[1]
int64_t* entry_x0
int64_t* x23 = *entry_x0
void* x20_1 = &entry_x0[1]

if (x23 == x20_1)
    return 

label_e6b448:
int64_t* x25_1 = &entry_x8[1]
int64_t* x24_1 = &entry_x8[1]

while (*x24_1 != 0)
label_e6b458:
    int64_t* x8_8 = x23[1]
    
    if (x8_8 != 0)
    label_e6b4c0:
        x23 = x8_8
        
        if (*x8_8 == 0)
            goto label_e6b4fc
    
    while (true)
        void* x8_10 = &x23[2]
        int64_t* x9_4 = *x8_10
        
        if (*x9_4 == x23)
            x23 = x9_4
            
            if (x23 == x20_1)
                return 
        else
            void* i
            
            do
                i = *x8_10
                x8_10 = i + 0x10
                x23 = *x8_10
            while (*x23 != i)
        label_e6b4fc:
            
            if (x23 == x20_1)
                return 
        
        int64_t* x21_1 = entry_x8[1]
        
        if (x21_1 == 0)
            goto label_e6b448
        
        int32_t x8 = x23[4].d
        x25_1 = x21_1
        x24_1 = &entry_x8[1]
    label_e6b40c:
        int32_t x9_1 = *(x25_1 + 0x1c)
        
        if (x8 s>= x9_1)
            if (x9_1 s>= x8)
                break
            
            x24_1 = &x25_1[1]
            int64_t* x9_3 = *x24_1
            
            if (x9_3 == 0)
                break
            
            x25_1 = x9_3
            goto label_e6b40c
        
        int64_t* x9_2 = *x25_1
        
        if (x9_2 != 0)
            x24_1 = x25_1
            x25_1 = x9_2
            goto label_e6b40c
        
        x24_1 = x25_1
        
        if (*x24_1 != 0)
            goto label_e6b458
        
    label_e6b478:
        std::__ndk1::__tree_node_base<void*>* x1_1 = operator new(0x20)
        int32_t x8_3 = x23[4].d
        *x1_1 = 0
        *(x1_1 + 8) = 0
        *(x1_1 + 0x10) = x25_1
        *(x1_1 + 0x1c) = x8_3
        *x24_1 = x1_1
        int64_t* x8_5 = **entry_x8
        
        if (x8_5 != 0)
            *entry_x8 = x8_5
            x1_1 = *x24_1
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            entry_x8[1], x1_1)
        entry_x8[2] += 1
        x8_8 = x23[1]
        
        if (x8_8 != 0)
            goto label_e6b4c0

goto label_e6b478
