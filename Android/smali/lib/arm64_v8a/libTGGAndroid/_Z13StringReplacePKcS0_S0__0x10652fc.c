// 函数: _Z13StringReplacePKcS0_S0_
// 地址: 0x10652fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
void* haystack

if (zx.d(*arg1) == 0)
    haystack = &data_793a18
else
    int32_t x0 = strlen(arg1)
    int64_t* x0_2
    int128_t v0_1
    x0_2, v0_1 = XPooledMalloc(x0 + 0x11)
    v0_1.q = 0x1fafafafa
    haystack = &x0_2[2]
    x0_2[1].d = x0
    *(x0_2 + 0xc) = x0 + 1
    *x0_2 = 0x1fafafafa
    strcpy(haystack, arg1, v0_1)

void** entry_x8
*entry_x8 = haystack
int32_t x0_5 = strlen(arg2)
char* i = strstr(haystack, arg2)

if (i != 0)
    char* i_1 = i
    int32_t x28_1 = 0
    void* haystack_1 = haystack
    
    do
        int32_t x27_1 = i_1.d - haystack.d
        char* haystack_7
        
        if (x27_1 != 0 && zx.d(*haystack) != 0)
            int64_t* x0_9 = XPooledMalloc(x27_1 + 0x11)
            int64_t x25_1 = sx.q(x27_1)
            haystack_7 = &x0_9[2]
            *x0_9 = 0x1fafafafa
            x0_9[1].d = x27_1
            *(x0_9 + 0xc) = x27_1 + 1
            memcpy(haystack_7, haystack, x25_1)
            haystack_7[x25_1] = 0
            
            if ((x28_1 & 1) != 0)
                goto label_106544c
            
            goto label_1065420
        
        haystack_7 = &data_793a18
        int32_t fp_1
        
        if ((x28_1 & 1) == 0)
        label_1065420:
            uint32_t x8_6 = zx.d(*haystack_1)
            
            if (x8_6 != 0)
                x8_6 = *(haystack_1 - 8)
            
            int32_t x8_7 = x8_6 - x0_5
            fp_1 = x8_7 - x27_1
            
            if (x8_7 != x27_1)
                goto label_1065458
            
            goto label_10654ac
        
    label_106544c:
        fp_1 = 0 - x0_5 - x27_1
        void* const x21_2
        void* const x25_3
        
        if (0 - x0_5 == x27_1)
        label_10654ac:
            x25_3 = &data_793a18
            x21_2 = &data_793a18
            
            if (zx.d(*arg3) != 0)
            label_10654c0:
                int32_t x0_15 = strlen(arg3)
                int64_t* x0_17 = XPooledMalloc(x0_15 + 0x11)
                x0_17[1].d = x0_15
                *(x0_17 + 0xc) = x0_15 + 1
                x25_3 = &x0_17[2]
                *x0_17 = 0x1fafafafa
                strcpy(x25_3, arg3)
        else
        label_1065458:
            void* x25_2 = &i_1[sx.q(x0_5)]
            
            if (zx.d(*x25_2) == 0)
                goto label_10654ac
            
            int64_t* x0_12 = XPooledMalloc(fp_1 + 0x11)
            size_t x27_2 = sx.q(fp_1)
            x21_2 = &x0_12[2]
            *x0_12 = 0x1fafafafa
            x0_12[1].d = fp_1
            *(x0_12 + 0xc) = fp_1 + 1
            memcpy(x21_2, x25_2, x27_2)
            x25_3 = &data_793a18
            *(x21_2 + x27_2) = 0
            
            if (zx.d(*arg3) != 0)
                goto label_10654c0
        
        char* haystack_6 = haystack_7
        
        if (zx.d(*haystack_7) != 0)
            *(haystack_7 - 0xc) += 1
        
        XString::Append(&haystack_6)
        char* haystack_5 = haystack_6
        char* haystack_3 = haystack_5
        
        if (haystack_5 != 0 && zx.d(*haystack_5) != 0)
            *(haystack_5 - 0xc) += 1
        
        XString::Append(&haystack_3)
        void* haystack_2 = haystack_3
        void* haystack_4
        
        haystack_4 = haystack_2 == 0 ? &data_793a18 : haystack_2
        
        if (haystack != haystack_4)
            int32_t x8_25
            
            if (((x28_1 | (*gAllocatorArray == 0 ? 1 : 0)) & 1) == 0 && zx.d(*haystack_1) != 0)
                x8_25 = *(haystack_1 - 0xc)
                *(haystack_1 - 0xc) = x8_25 - 1
            
            if (((x28_1 | (*gAllocatorArray == 0 ? 1 : 0)) & 1) == 0 && zx.d(*haystack_1) != 0
                    && x8_25 == 1)
                XPooledFree(haystack_1 - 0x10, *(haystack_1 - 4) + 0x10)
                *entry_x8 = &data_793a18
                *entry_x8 = haystack_2
                
                if (haystack_2 == 0)
                    goto label_1065640
            else
                *entry_x8 = haystack_2
                
                if (haystack_2 == 0)
                label_1065640:
                    haystack_1 = nullptr
                    
                    if (*gAllocatorArray == 0)
                        goto label_10656e0
                    
                label_1065650:
                    
                    if (haystack_5 == 0 || zx.d(*haystack_5) == 0)
                        goto label_1065680
                    
                    goto label_106565c
            
            haystack_1 = haystack_2
            
            if (zx.d(*haystack_2) != 0)
                haystack_1 = haystack_2
                *(haystack_2 - 0xc) += 1
            
            goto label_10655b0
        
    label_10655b0:
        
        if (*gAllocatorArray == 0)
        label_10656e0:
            
            if (*gAllocatorArray != 0 && zx.d(*haystack_7) != 0)
                int32_t x8_57 = *(haystack_7 - 0xc)
                *(haystack_7 - 0xc) = x8_57 - 1
                
                if (x8_57 == 1)
                    XPooledFree(haystack_7 - 0x10, *(haystack_7 - 4) + 0x10)
        else
            if (haystack_2 != 0)
                if (zx.d(*haystack_2) != 0)
                    int32_t x8_33 = *(haystack_2 - 0xc)
                    *(haystack_2 - 0xc) = x8_33 - 1
                    
                    if (x8_33 == 1)
                        XPooledFree(haystack_2 - 0x10, *(haystack_2 - 4) + 0x10)
                
                if (*gAllocatorArray != 0)
                    goto label_1065650
                
                goto label_10656e0
            
            if (haystack_5 != 0 && zx.d(*haystack_5) != 0)
            label_106565c:
                int32_t x8_42 = *(haystack_5 - 0xc)
                *(haystack_5 - 0xc) = x8_42 - 1
                
                if (x8_42 == 1)
                    XPooledFree(haystack_5 - 0x10, *(haystack_5 - 4) + 0x10)
            
        label_1065680:
            
            if (*gAllocatorArray == 0)
                goto label_10656e0
            
            if (zx.d(*x25_3) != 0)
                int32_t x8_47 = *(x25_3 - 0xc)
                *(x25_3 - 0xc) = x8_47 - 1
                
                if (x8_47 == 1)
                    XPooledFree(x25_3 - 0x10, *(x25_3 - 4) + 0x10)
            
            if (zx.d(*x25_3) == 0 || *gAllocatorArray != 0)
                if (zx.d(*x21_2) == 0)
                    goto label_10656e0
                
                int32_t x8_52 = *(x21_2 - 0xc)
                *(x21_2 - 0xc) = x8_52 - 1
                
                if (x8_52 == 1)
                    XPooledFree(x21_2 - 0x10, *(x21_2 - 4) + 0x10)
                
                goto label_10656e0
        
        haystack = haystack_1 == 0 ? &data_793a18 : haystack_1
        
        x28_1 = haystack_1 == 0 ? 1 : 0
        i = strstr(haystack, arg2)
        i_1 = i
    while (i != 0)

return i
