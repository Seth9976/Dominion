// 函数: _ZNK5Botan10Data_StoreeqERKS0_
// 地址: 0xe988c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1
int64_t* entry_x1

if (*(arg1 + 0x10) != entry_x1[2])
    x0_1 = 0
else
    void** i = *arg1
    
    if (i == arg1 + 8)
        return 1
    
    void** j_4 = *entry_x1
    
    do
        x0_1 = sub_f53e94(&i[4], &j_4[4])
        
        if ((x0_1 & 1) == 0)
            return 0
        
        void** j = i[1]
        
        if (j != 0)
            do
                i = j
                j = *j
            while (j != 0)
            
            goto label_e98958
        
        void* x8_2 = &i[2]
        int64_t* i_1 = *x8_2
        void** j_2
        
        if (*i_1 != i)
            void* j_1
            
            do
                j_1 = *x8_2
                x8_2 = j_1 + 0x10
                i = *x8_2
            while (*i != j_1)
        label_e98958:
            j_2 = j_4[1]
            
            if (j_2 == 0)
                goto label_e98980
            
            goto label_e98968
        
        i = i_1
        j_2 = j_4[1]
        
        if (j_2 != 0)
        label_e98968:
            
            do
                j_4 = j_2
                j_2 = *j_2
            while (j_2 != 0)
        else
        label_e98980:
            void* x8_5 = &j_4[2]
            void** j_5 = *x8_5
            
            if (*j_5 == j_4)
                j_4 = j_5
            else
                void* j_3
                
                do
                    j_3 = *x8_5
                    x8_5 = j_3 + 0x10
                    j_4 = *x8_5
                while (*j_4 != j_3)
    while (i != arg1 + 8)

return zx.q(x0_1) & 1
