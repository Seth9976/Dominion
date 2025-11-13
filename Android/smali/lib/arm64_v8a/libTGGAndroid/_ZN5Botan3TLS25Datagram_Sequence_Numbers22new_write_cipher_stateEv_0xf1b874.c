// 函数: _ZN5Botan3TLS25Datagram_Sequence_Numbers22new_write_cipher_stateEv
// 地址: 0xf1b874
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x21_1 = entry_x0 + 0x10
int64_t* x23 = *x21_1
int16_t x22 = x21_1[2].w + 1
x21_1[2].w = x22
int64_t* x20

if (x23 == 0)
    x23 = x21_1
label_f1b8dc:
    x20 = *x21_1
    
    if (x20 == 0)
    label_f1b8e8:
        int64_t* x0 = operator new(0x30)
        x0[4].w = x22
        x0[5] = 0
        *x0 = 0
        x0[1] = 0
        x0[2] = x23
        *x21_1 = x0
        x20 = x0
        int64_t x8_5 = **(entry_x0 + 8)
        int64_t* x1_1
        
        if (x8_5 == 0)
            x1_1 = x20
        else
            *(entry_x0 + 8) = x8_5
            x1_1 = *x21_1
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(entry_x0 + 0x10), x1_1)
        *(entry_x0 + 0x18) += 1
    
label_f1b944:
    x20[5] = 0
    return 

x21_1 = entry_x0 + 0x10

while (true)
    uint32_t x8_1 = zx.d(x23[4].w)
    uint32_t temp0_1 = zx.d(x22)
    
    if (x8_1 u<= temp0_1)
        if (x8_1 u>= temp0_1)
            goto label_f1b8dc
        
        x21_1 = &x23[1]
        int64_t* x8_3 = *x21_1
        
        if (x8_3 == 0)
            goto label_f1b8dc
        
        x23 = x8_3
    else
        int64_t* x8_2 = *x23
        
        if (x8_2 == 0)
            x21_1 = x23
            x20 = *x21_1
            
            if (x20 != 0)
                goto label_f1b944
            
            break
        
        x21_1 = x23
        x23 = x8_2

goto label_f1b8e8
