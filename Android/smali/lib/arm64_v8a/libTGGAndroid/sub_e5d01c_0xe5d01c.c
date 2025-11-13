// 函数: sub_e5d01c
// 地址: 0xe5d01c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1 = *arg2

if (i_1 == &arg2[1])
    return 

int64_t* i

do
    int64_t* j_3 = *(i_1 + 8)
    
    if (zx.d(*(i_1 + 0x20)) != zx.d(arg1))
        int64_t* j = j_3
        
        if (j_3 != 0)
            do
                i = j
                j = *j
            while (j != 0)
            
            goto label_e5d0f4
        
        int64_t** x9_4 = i_1 + 0x10
        i = *x9_4
        int64_t* j_6
        
        if (*i == i_1)
        label_e5d10c:
            int64_t** x8_5 = i_1 + 0x10
            j_6 = *x8_5
            
            if (*j_6 != i_1)
                int64_t* j_1
                
                do
                    j_1 = *x8_5
                    x8_5 = &j_1[2]
                    j_6 = *x8_5
                while (*j_6 != j_1)
        else
            int64_t* j_2
            
            do
                j_2 = *x9_4
                x9_4 = &j_2[2]
                i = *x9_4
            while (*i != j_2)
        label_e5d0f4:
            
            if (j_3 == 0)
                goto label_e5d10c
            
            do
                j_6 = j_3
                j_3 = *j_3
            while (j_3 != 0)
        
        if (*arg2 == i_1)
            *arg2 = j_6
        
        std::__ndk1::__tree_node_base<void*>* x0_1 = arg2[1]
        arg2[2] -= 1
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(x0_1, i_1)
        int64_t* x22_1 = *(i_1 + 0x30)
        
        if (x22_1 != 0)
            int64_t x9_6
            int32_t j_4
            
            do
                x9_6 = __ldaxr(&x22_1[1])
                j_4 = __stlxr(x9_6 - 1, &x22_1[1])
            while (j_4 != 0)
            
            if (x9_6 == 0)
                (*(*x22_1 + 0x10))(x22_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        operator delete(i_1)
    else if (j_3 == 0)
        int64_t** x8_2 = i_1 + 0x10
        i = *x8_2
        
        if (*i != i_1)
            int64_t* j_5
            
            do
                j_5 = *x8_2
                x8_2 = &j_5[2]
                i = *x8_2
            while (*i != j_5)
    else
        do
            i = j_3
            j_3 = *j_3
        while (j_3 != 0)
    
    i_1 = i
while (i != &arg2[1])
