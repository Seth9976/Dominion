// 函数: _Z20NetworkDisposeForAppv
// 地址: 0xf83df4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gNetworkInterface == 0)
    return 

int64_t* x8_1 = *gNetwork
label_f83e34:
void* x9_1 = x8_1[5]
void* x19_1 = x9_1

while (true)
    void* x10_2 = x9_1 + (zx.q(x8_1[6].d) << 4)
    
    if (x19_1 u>= x10_2)
    label_f83eac:
    label_f83ec4:
        void* i_5 = *x8_1
        void* i = i_5
    label_f83ed4:
        
        for (; i u< i_5 + zx.q(x8_1[1].d) * 0x90; i += 0x90)
            if (zx.d(*(i + 0x8a)) != 0)
                NetLocFree(i)
                x8_1 = *gNetwork
                
                if (i == 0)
                    goto label_f83ec4
                
                i_5 = *x8_1
                i += 0x90
                goto label_f83ed4
        
        while (x8_1[0xc].d != 0)
            void* x0_3 = x8_1[0xa]
            void* x9_7 = *(x0_3 + 8)
            x8_1[0xa] = x9_7
            void* x9_8
            
            if (x9_7 == 0)
                x9_8 = &x8_1[0xb]
            else
                x9_8 = x9_7 + 0x10
            
            *x9_8 = 0
            void* x23_1 = *x0_3
            x8_1[0xc].d -= 1
            XPooledFree(x0_3, 0x18)
            XString::operator=(x23_1 + 0xed40)
            uint64_t x24_1 = *gNetwork
            int64_t* x0_5 = XPooledCalloc(0x18)
            *x0_5 = x23_1
            x0_5[1] = 0
            x0_5[2] = *(x24_1 + 0x88)
            void* x8_6 = *(x24_1 + 0x88)
            int64_t** x8_7
            
            if (x8_6 == 0)
                x8_7 = x24_1 + 0x80
            else
                x8_7 = x8_6 + 8
            
            *x8_7 = x0_5
            int32_t x8_8 = *(x24_1 + 0x90)
            *(x24_1 + 0x88) = x0_5
            *(x24_1 + 0x90) = x8_8 + 1
            x8_1 = *gNetwork
        
        (*(**gNetworkInterface + 8))()
        int64_t* x19_2 = *gNetwork
        
        while (x19_2[0xf].d != 0)
            void* x0_7 = x19_2[0xe]
            void* x8_13 = *(x0_7 + 0x10)
            x19_2[0xe] = x8_13
            void* x8_14
            
            if (x8_13 == 0)
                x8_14 = &x19_2[0xd]
            else
                x8_14 = x8_13 + 8
            
            *x8_14 = 0
            void* x20_1 = *x0_7
            x19_2[0xf].d -= 1
            XPooledFree(x0_7, 0x18)
            XFree(x20_1)
            x19_2 = *gNetwork
        
        while (x19_2[0x12].d != 0)
            void* x0_9 = x19_2[0x11]
            void* x8_18 = *(x0_9 + 0x10)
            x19_2[0x11] = x8_18
            void* x8_19
            
            if (x8_18 == 0)
                x8_19 = &x19_2[0x10]
            else
                x8_19 = x8_18 + 8
            
            *x8_19 = 0
            void* x20_2 = *x0_9
            x19_2[0x12].d -= 1
            XPooledFree(x0_9, 0x18)
            XFree(x20_2)
            x19_2 = *gNetwork
        
        if (x19_2[5] != 0)
        label_f84088:
            void* x0_11 = x19_2[5]
            void* x8_24 = x0_11
            
            while (true)
                void* x9_16 = x0_11 + (zx.q(x19_2[6].d) << 4)
                
                if (x8_24 u>= x9_16)
                label_f840e0:
                    x19_2[6].d = 0
                    x19_2[7].d = 0
                    XFree(x0_11)
                    x19_2[9] = 0
                    __builtin_memset(&x19_2[5], 0, 0x18)
                    x19_2 = *gNetwork
                    break
                
                int32_t x10_10
                
                while (true)
                    x10_10 = *(x8_24 + 0xc)
                    
                    if (x10_10 u>> 0x10 != 0)
                        break
                    
                    x8_24 += 0x10
                    
                    if (x8_24 u>= x9_16)
                        goto label_f840e0
                
                x19_2[7].d = x10_10 & 0xffff
                *(x8_24 + 0xc) = x19_2[7].d
                *(x19_2 + 0x3c) -= 1
                
                if (x8_24 == 0)
                    goto label_f84088
                
                x0_11 = x19_2[5]
                x8_24 += 0x10
        
        if (*x19_2 == 0)
        label_f841e0:
            NetworkGlobals::~NetworkGlobals()
            XPooledFree(*gNetwork, 0x98)
            *gNetwork = 0
        else
        label_f8411c:
            void* x0_12 = *x19_2
            void* x22_2 = x0_12
            
            while (true)
                int64_t x8_27 = x0_12 + zx.q(x19_2[1].d) * 0x90
                
                if (x22_2 u>= x8_27)
                    break
                
                while (zx.d(*(x22_2 + 0x8a)) == 0)
                    x22_2 += 0x90
                    
                    if (x22_2 u>= x8_27)
                        goto label_f841bc
                
                void* i_1 = *(x22_2 + 0x68)
                
                while (i_1 != 0)
                    void* i_3 = i_1
                    i_1 = *(i_1 + 8)
                    XPooledFree(i_3, 0x18)
                
                void* i_2 = *(x22_2 + 0x50)
                __builtin_memset(x22_2 + 0x68, 0, 0x14)
                
                while (i_2 != 0)
                    void* i_4 = i_2
                    i_2 = *(i_2 + 8)
                    XPooledFree(i_4, 0x18)
                
                __builtin_memset(x22_2 + 0x50, 0, 0x14)
                x19_2[2].d = zx.d(*(x22_2 + 0x88))
                *(x22_2 + 0x88) = x19_2[2].d
                *(x19_2 + 0x14) -= 1
                
                if (x22_2 == 0)
                    goto label_f8411c
                
                x0_12 = *x19_2
                x22_2 += 0x90
            
        label_f841bc:
            x19_2[1].d = 0
            x19_2[2].d = 0
            XFree(x0_12)
            x19_2[4] = 0
            __builtin_memset(x19_2, 0, 0x18)
            
            if (*gNetwork != 0)
                goto label_f841e0
        
        break
    
    uint64_t x11_1
    
    while (true)
        x11_1 = zx.q(*(x19_1 + 0xc))
        
        if (((x11_1 u>> 0x10).d & 0xffff) != 0)
            break
        
        x19_1 += 0x10
        
        if (x19_1 u>= x10_2)
            goto label_f83eac
    
    int64_t* x0_1 = *gNetworkInterface
    void* x22_1 = x9_1 + (zx.q((x11_1.d).w) << 4)
    (*(*x0_1 + 0x50))(x0_1, zx.q(*(x22_1 + 4)))
    void* x8_4 = *gNetwork
    int32_t x10_3 = *(x8_4 + 0x38)
    *(x8_4 + 0x38) = zx.d(*(x22_1 + 0xc))
    *(x22_1 + 0xc) = x10_3
    *(x8_4 + 0x3c) -= 1
    x8_1 = *gNetwork
    
    if (x19_1 == 0)
        goto label_f83e34
    
    x9_1 = x8_1[5]
    x19_1 += 0x10
