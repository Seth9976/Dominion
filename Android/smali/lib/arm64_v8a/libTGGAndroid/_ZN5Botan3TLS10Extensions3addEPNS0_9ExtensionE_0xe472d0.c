// 函数: _ZN5Botan3TLS10Extensions3addEPNS0_9ExtensionE
// 地址: 0xe472d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int32_t x0_1 = (**entry_x1)(entry_x1)
void* __offset(Botan::TLS::Extension, 0x8) x23_1 = arg1 + 8
void* x24 = *x23_1
void* x22

if (x24 != 0)
    x23_1 = arg1 + 8
    
    while (true)
        int32_t x8_2 = *(x24 + 0x20)
        
        if (x0_1 s>= x8_2)
            if (x8_2 s>= x0_1)
                goto label_e4734c
            
            x23_1 = x24 + 8
            void* x8_4 = *x23_1
            
            if (x8_4 == 0)
                goto label_e4734c
            
            x24 = x8_4
        else
            void* x8_3 = *x24
            
            if (x8_3 == 0)
                x23_1 = x24
                x22 = *x23_1
                
                if (x22 != 0)
                    break
                
                goto label_e4738c
            
            x23_1 = x24
            x24 = x8_3
    
    goto label_e47354

x24 = x23_1
label_e4734c:
x22 = *x23_1
int64_t* result

if (x22 == 0)
label_e4738c:
    int64_t* x0_2 = operator new(0x30)
    x0_2[4].d = x0_1
    x0_2[5] = 0
    *x0_2 = 0
    x0_2[1] = 0
    x0_2[2] = x24
    *x23_1 = x0_2
    int64_t x8_7 = **arg1
    int64_t* x1_1
    
    if (x8_7 == 0)
        x1_1 = x0_2
    else
        *arg1 = x8_7
        x1_1 = *x23_1
    
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(arg1 + 8), 
        x1_1)
    *(arg1 + 0x10) += 1
    result = x0_2[5]
    x0_2[5] = entry_x1
    
    if (result != 0)
        jump(*(*result + 0x20))
else
label_e47354:
    result = *(x22 + 0x28)
    *(x22 + 0x28) = entry_x1
    
    if (result != 0)
        jump(*(*result + 0x20))

return result
