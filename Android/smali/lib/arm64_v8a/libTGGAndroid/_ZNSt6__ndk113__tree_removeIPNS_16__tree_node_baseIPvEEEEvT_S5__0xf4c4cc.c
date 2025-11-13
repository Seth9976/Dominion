// 函数: _ZNSt6__ndk113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_
// 地址: 0xf4c4cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__tree_node_base<void*>* x9 = *arg2
std::__ndk1::__tree_node_base<void*>* i_1 = arg2
int64_t* x8_1
int32_t x11

if (x9 != 0)
    std::__ndk1::__tree_node_base<void*>* i = *(arg2 + 8)
    
    if (i != 0)
        do
            i_1 = i
            i = *i
        while (i != 0)
        
        goto label_f4c4ec
    
    i_1 = arg2
label_f4c538:
    x11 = 0
    *(x9 + 0x10) = *(i_1 + 0x10)
    x8_1 = *(i_1 + 0x10)
    
    if (*x8_1 == i_1)
        goto label_f4c50c
    
    goto label_f4c550

label_f4c4ec:
x9 = *(i_1 + 8)

if (x9 != 0)
    goto label_f4c538

x11 = 1
x8_1 = *(i_1 + 0x10)
int64_t* x8_4
uint32_t x12_1

if (*x8_1 != i_1)
label_f4c550:
    x8_1[1] = x9
    x8_4 = **(i_1 + 0x10)
    x12_1 = zx.d(*(i_1 + 0x18))
    
    if (i_1 != arg2)
    label_f4c568:
        int64_t x13_1 = *(arg2 + 0x10)
        *(i_1 + 0x10) = x13_1
        *(x13_1 + (zx.q(**(arg2 + 0x10) != arg2 ? 1 : 0) << 3)) = i_1
        void* x13_2 = *arg2
        *i_1 = x13_2
        *(x13_2 + 0x10) = i_1
        void* x13_3 = *(arg2 + 8)
        *(i_1 + 8) = x13_3
        
        if (x13_3 != 0)
            *(x13_3 + 0x10) = i_1
        
        if (arg1 == arg2)
            arg1 = i_1
        
        *(i_1 + 0x18) = *(arg2 + 0x18)
else
label_f4c50c:
    *x8_1 = x9
    
    if (i_1 == arg1)
        x8_4 = nullptr
        arg1 = x9
        x12_1 = zx.d(*(i_1 + 0x18))
        
        if (i_1 != arg2)
            goto label_f4c568
    else
        x8_4 = *(*(i_1 + 0x10) + 8)
        x12_1 = zx.d(*(i_1 + 0x18))
        
        if (i_1 != arg2)
            goto label_f4c568

if (x12_1 == 0 || arg1 == 0)
    return 

if (x11 != 0)
    int64_t* x9_2
    
    while (true)
        int64_t* x10 = x8_4[2]
        uint32_t x11_1 = zx.d(x8_4[3].b)
        std::__ndk1::__tree_node_base<void*>* x10_5
        
        if (*x10 != x8_4)
            void* x10_1
            
            if (x11_1 == 0)
                x8_4[3].b = 1
                x10[3].b = 0
                void* x10_3 = x8_4[2]
                void** x11_2 = *(x10_3 + 8)
                void* x12_4 = *x11_2
                *(x10_3 + 8) = x12_4
                
                if (x12_4 != 0)
                    *(x12_4 + 0x10) = x10_3
                
                x11_2[2] = *(x10_3 + 0x10)
                int64_t* x12_6 = *(x10_3 + 0x10)
                x12_6[zx.q(*x12_6 != x10_3 ? 1 : 0)] = x11_2
                *x11_2 = x10_3
                *(x10_3 + 0x10) = x11_2
                void* x10_4 = *x8_4
                
                if (arg1 == x10_4)
                    arg1 = x8_4
                
                x8_4 = *(x10_4 + 8)
                x10_1 = *x8_4
                
                if (x10_1 == 0 || zx.d(*(x10_1 + 0x18)) != 0)
                    goto label_f4c658
                
                goto label_f4c754
            
            x10_1 = *x8_4
            void* x11_7
            
            if (x10_1 != 0 && zx.d(*(x10_1 + 0x18)) == 0)
            label_f4c754:
                x11_7 = x8_4[1]
                
                if (x11_7 != 0 && zx.d(*(x11_7 + 0x18)) == 0)
                    x9_2 = x8_4
                    break
                    break
            else
            label_f4c658:
                x11_7 = x8_4[1]
                
                if (x11_7 == 0 || zx.d(*(x11_7 + 0x18)) != 0)
                    x10_5 = x8_4[2]
                    x8_4[3].b = 0
                    
                    if (x10_5 == arg1)
                        *(arg1 + 0x18) = 1
                        return 
                    
                    if (zx.d(*(x10_5 + 0x18)) != 0)
                        goto label_f4c708
                    
                    *(x10_5 + 0x18) = 1
                    return 
                
                if (zx.d(*(x11_7 + 0x18)) == 0)
                    x9_2 = x8_4
                    break
                    break
            *(x10_1 + 0x18) = 1
            x9_2 = *x8_4
            x8_4[3].b = 0
            void* x10_9 = x9_2[1]
            *x8_4 = x10_9
            
            if (x10_9 != 0)
                *(x10_9 + 0x10) = x8_4
            
            x9_2[2] = x8_4[2]
            int64_t* x10_11 = x8_4[2]
            x10_11[zx.q(*x10_11 != x8_4 ? 1 : 0)] = x9_2
            x9_2[1] = x8_4
            x8_4[2] = x9_2
            break
        
        void* x10_2
        
        if (x11_1 == 0)
            x8_4[3].b = 1
            x10[3].b = 0
            int64_t* x10_6 = x8_4[2]
            void* x11_4 = *x10_6
            void* x12_8 = *(x11_4 + 8)
            *x10_6 = x12_8
            
            if (x12_8 != 0)
                *(x12_8 + 0x10) = x10_6
            
            *(x11_4 + 0x10) = x10_6[2]
            int64_t* x12_10 = x10_6[2]
            x12_10[zx.q(*x12_10 != x10_6 ? 1 : 0)] = x11_4
            *(x11_4 + 8) = x10_6
            x10_6[2] = x11_4
            int64_t** x10_7 = x8_4[1]
            
            if (arg1 == x10_7)
                arg1 = x8_4
            
            x8_4 = *x10_7
            x10_2 = *x8_4
            
            if (x10_2 == 0 || zx.d(*(x10_2 + 0x18)) != 0)
                goto label_f4c6e0
            
            goto label_f4c804
        
        x10_2 = *x8_4
        void** x9_4
        
        if (x10_2 != 0 && zx.d(*(x10_2 + 0x18)) == 0)
        label_f4c804:
            x9_4 = x8_4
        else
        label_f4c6e0:
            void* x11_10 = x8_4[1]
            
            if (x11_10 == 0 || zx.d(*(x11_10 + 0x18)) != 0)
                x10_5 = x8_4[2]
                x8_4[3].b = 0
                
                if (x10_5 == arg1 || zx.d(*(x10_5 + 0x18)) == 0)
                    *(x10_5 + 0x18) = 1
                    return 
                
            label_f4c708:
                int64_t* x8_8 = *(x10_5 + 0x10)
                x8_4 = x8_8[zx.q(*x8_8 == x10_5 ? 1 : 0)]
                continue
                continue
            else
                if (x10_2 != 0)
                    if (zx.d(*(x10_2 + 0x18)) == 0)
                        goto label_f4c804
                    
                    x11_10 = x8_4[1]
                
                *(x11_10 + 0x18) = 1
                x9_4 = x8_4[1]
                x8_4[3].b = 0
                void* x10_12 = *x9_4
                x8_4[1] = x10_12
                
                if (x10_12 != 0)
                    *(x10_12 + 0x10) = x8_4
                
                x9_4[2] = x8_4[2]
                int64_t* x10_14 = x8_4[2]
                x10_14[zx.q(*x10_14 != x8_4 ? 1 : 0)] = x9_4
                *x9_4 = x8_4
                x8_4[2] = x9_4
        
        void* x8_9 = x9_4[2]
        x9_4[3].b = *(x8_9 + 0x18)
        *(x8_9 + 0x18) = 1
        *(*x9_4 + 0x18) = 1
        int64_t* x8_11 = x9_4[2]
        void* x9_5 = *x8_11
        void* x10_16 = *(x9_5 + 8)
        *x8_11 = x10_16
        
        if (x10_16 != 0)
            *(x10_16 + 0x10) = x8_11
        
        *(x9_5 + 0x10) = x8_11[2]
        int64_t* x10_18 = x8_11[2]
        x10_18[zx.q(*x10_18 != x8_11 ? 1 : 0)] = x9_5
        *(x9_5 + 8) = x8_11
        x8_11[2] = x9_5
        return 
    
    void* x8_12 = x9_2[2]
    x9_2[3].b = *(x8_12 + 0x18)
    *(x8_12 + 0x18) = 1
    *(x9_2[1] + 0x18) = 1
    void* x8_14 = x9_2[2]
    void** x9_6 = *(x8_14 + 8)
    void* x10_20 = *x9_6
    *(x8_14 + 8) = x10_20
    
    if (x10_20 != 0)
        *(x10_20 + 0x10) = x8_14
    
    x9_6[2] = *(x8_14 + 0x10)
    int64_t* x10_22 = *(x8_14 + 0x10)
    x10_22[zx.q(*x10_22 != x8_14 ? 1 : 0)] = x9_6
    *x9_6 = x8_14
    *(x8_14 + 0x10) = x9_6
    return 

*(x9 + 0x18) = 1
