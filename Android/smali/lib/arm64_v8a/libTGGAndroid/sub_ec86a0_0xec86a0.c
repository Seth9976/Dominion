// 函数: sub_ec86a0
// 地址: 0xec86a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21_1 = &arg1[1]
*x21_1 = 0
arg1[2] = 0
*arg1 = x21_1
int64_t* i = *arg2

if (i == &arg2[1])
    return 

int64_t** x19_1 = arg1

do
    Botan::Certificate_Status_Code var_48
    std::__ndk1::__tree_node_base<void*>* var_38
    arg1 = std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::__find_equal<Botan::Certificate_Status_Code>(
        x19_1, x21_1, &var_38, &var_48)
    int64_t* j
    
    if (*arg1 == 0)
        int64_t* x1_1 = operator new(0x20)
        int32_t x8_2 = *(i + 0x1c)
        std::__ndk1::__tree_node_base<void*>* x9_1 = var_38
        *x1_1 = 0
        x1_1[1] = 0
        *(x1_1 + 0x1c) = x8_2
        x1_1[2] = x9_1
        *arg1 = x1_1
        int64_t* x8_4 = **x19_1
        
        if (x8_4 != 0)
            *x19_1 = x8_4
            x1_1 = *arg1
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(x19_1[1], 
            x1_1)
        x19_1[2] += 1
        j = i[1]
        
        if (j == 0)
            goto label_ec8784
        
        goto label_ec8778
    
    j = i[1]
    
    if (j != 0)
    label_ec8778:
        
        do
            i = j
            j = *j
        while (j != 0)
    else
    label_ec8784:
        void* x8_8 = &i[2]
        int64_t* i_1 = *x8_8
        
        if (*i_1 == i)
            i = i_1
        else
            void* j_1
            
            do
                j_1 = *x8_8
                x8_8 = j_1 + 0x10
                i = *x8_8
            while (*i != j_1)
while (i != &arg2[1])
