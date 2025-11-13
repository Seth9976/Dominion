// 函数: _ZN5Botan3TLS7Channel4initEm
// 地址: 0xe5a760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22_1 = arg1 + 0x58
int64_t* x23 = *x22_1
uint64_t x19 = arg1
std::__ndk1::__tree_node_base<void*>* x21

if (x23 == 0)
label_e5a7a4:
    x23 = x22_1
label_e5a7a8:
    x21 = *x22_1
    
    if (x21 == 0)
        goto label_e5a7b4
else
    if (zx.d(x23[4].w) != 0)
        do
            x22_1 = x23
            x23 = *x23
            
            if (x23 == 0)
                goto label_e5a7a4
        while (zx.d(x23[4].w) != 0)
        
        goto label_e5a7a8
    
    x22_1 = x19 + 0x58
    x21 = *x22_1
    
    if (x21 == 0)
    label_e5a7b4:
        std::__ndk1::__tree_node_base<void*>* x0 = operator new(0x38)
        *(x0 + 0x20) = 0
        *(x0 + 0x28) = 0
        *(x0 + 0x30) = 0
        *x0 = 0
        *(x0 + 8) = 0
        *(x0 + 0x10) = x23
        *x22_1 = x0
        x21 = x0
        int64_t x8_4 = **(x19 + 0x50)
        std::__ndk1::__tree_node_base<void*>* x1
        
        if (x8_4 == 0)
            x1 = x21
        else
            *(x19 + 0x50) = x8_4
            x1 = *x22_1
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(x19 + 0x58), x1)
        *(x19 + 0x60) += 1

int64_t* x22_2 = *(x21 + 0x30)
*(x21 + 0x28) = 0
*(x21 + 0x30) = 0
int64_t x9_1

if (x22_2 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x22_2[1])
        i = __stlxr(x9_1 - 1, &x22_2[1])
    while (i != 0)

int64_t* x22_4
int64_t* x23_1

if (x22_2 != 0 && x9_1 == 0)
    (*(*x22_2 + 0x10))(x22_2)
    std::__ndk1::__shared_weak_count::__release_weak()
    x22_4 = x19 + 0x70
    x23_1 = *x22_4
    
    if (x23_1 != 0)
        goto label_e5a844
    
    goto label_e5a884

x22_4 = x19 + 0x70
x23_1 = *x22_4
std::__ndk1::__tree_node_base<void*>* x21_1

if (x23_1 == 0)
label_e5a884:
    x23_1 = x22_4
label_e5a888:
    x21_1 = *x22_4
    
    if (x21_1 == 0)
    label_e5a894:
        std::__ndk1::__tree_node_base<void*>* x0_4 = operator new(0x38)
        *(x0_4 + 0x20) = 0
        *(x0_4 + 0x28) = 0
        *(x0_4 + 0x30) = 0
        *x0_4 = 0
        *(x0_4 + 8) = 0
        *(x0_4 + 0x10) = x23_1
        *x22_4 = x0_4
        x21_1 = x0_4
        int64_t x8_13 = **(x19 + 0x68)
        std::__ndk1::__tree_node_base<void*>* x1_1
        
        if (x8_13 == 0)
            x1_1 = x21_1
        else
            *(x19 + 0x68) = x8_13
            x1_1 = *x22_4
        
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
            *(x19 + 0x70), x1_1)
        *(x19 + 0x78) += 1
else
label_e5a844:
    
    if (zx.d(x23_1[4].w) != 0)
        do
            x22_4 = x23_1
            x23_1 = *x23_1
            
            if (x23_1 == 0)
                goto label_e5a884
        while (zx.d(x23_1[4].w) != 0)
        
        goto label_e5a888
    
    x22_4 = x19 + 0x70
    x21_1 = *x22_4
    
    if (x21_1 == 0)
        goto label_e5a894

int64_t* x22_6 = *(x21_1 + 0x30)
*(x21_1 + 0x28) = 0
*(x21_1 + 0x30) = 0

if (x22_6 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x22_6[1])
        i_1 = __stlxr(x9_2 - 1, &x22_6[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*x22_6 + 0x10))(x22_6)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t x8_19 = *(x19 + 0x80)
uint64_t entry_x1

if (*(x19 + 0x90) - x8_19 u< entry_x1)
    int64_t x22_7 = *(x19 + 0x88) - x8_19
    arg1 = Botan::allocate_memory(entry_x1, 1)
    void* x21_2 = *(x19 + 0x80)
    int64_t x24_1 = arg1 + x22_7
    size_t x2_1 = *(x19 + 0x88) - x21_2
    int64_t x22_8 = x24_1 - x2_1
    
    if (x2_1 s>= 1)
        memcpy(x22_8, x21_2, x2_1)
    
    int64_t x8_21 = *(x19 + 0x90)
    *(x19 + 0x80) = x22_8
    *(x19 + 0x88) = x24_1
    *(x19 + 0x90) = arg1 + entry_x1
    
    if (x21_2 != 0)
        Botan::deallocate_memory(x21_2, x8_21 - x21_2, 1)

int64_t x8_22 = *(x19 + 0x98)

if (*(x19 + 0xa8) - x8_22 u>= entry_x1)
    return 

int64_t x22_9 = *(x19 + 0xa0) - x8_22
arg1 = Botan::allocate_memory(entry_x1, 1)
void* x21_3 = *(x19 + 0x98)
int64_t x23_3 = arg1 + x22_9
size_t x2_2 = *(x19 + 0xa0) - x21_3
int64_t x20_1 = x23_3 - x2_2

if (x2_2 s>= 1)
    memcpy(x20_1, x21_3, x2_2)

int64_t x8_24 = *(x19 + 0xa8)
*(x19 + 0x98) = x20_1
*(x19 + 0xa0) = x23_3
*(x19 + 0xa8) = arg1 + entry_x1

if (x21_3 != 0)
    Botan::deallocate_memory(x21_3, x8_24 - x21_3, 1)
