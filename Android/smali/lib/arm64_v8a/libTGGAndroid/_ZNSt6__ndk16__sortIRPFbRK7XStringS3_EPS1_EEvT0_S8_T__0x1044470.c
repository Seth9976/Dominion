// 函数: _ZNSt6__ndk16__sortIRPFbRK7XStringS3_EPS1_EEvT0_S8_T_
// 地址: 0x1044470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* x22 = arg2
XString* x21 = arg1

while (true)
    void* __offset(XString, 0x8) x26_1 = x21
    
    while (true)
    label_10444a8:
        int64_t x9_1 = x22 - x26_1
        int64_t x8_1 = x9_1 s>> 3
        x21 = x26_1
        void var_68
        
        if (x8_1 u<= 5)
            switch (x8_1)
                case 2
                    if (((*arg3)(x22 - 8, x21).d & 1) != 0)
                        XString::XString(&var_68)
                        XString::operator=(x21)
                        XString::operator=(x22 - 8)
                        XString::~XString()
                case 3
                    std::__ndk1::__sort3<bool (*&)(XString const&, XString const&), XString*>(x21, 
                        x21 + 8, x22 - 8, arg3)
                case 4
                    std::__ndk1::__sort4<bool (*&)(XString const&, XString const&), XString*>(x21, 
                        x21 + 8, x21 + 0x10, x22 - 8, arg3)
                case 5
                    sub_1044bdc(x21, x21 + 8, x21 + 0x10, x21 + 0x18, x22 - 8, arg3)
        else if (x9_1 s<= 0x37)
            std::__ndk1::__insertion_sort_3<bool (*&)(XString const&, XString const&), XString*>(
                x21, x22, arg3)
        else
            int64_t x10_1
            
            if (x8_1 s< 0)
                x10_1 = x8_1 + 1
            else
                x10_1 = x8_1
            
            void* __offset(XString, -0x8) x23_1 = x21 + (x10_1 << 2 & 0xfffffffffffffff8)
            int32_t x0_1
            
            if (x9_1 s< 0x1f39)
                x0_1 = std::__ndk1::__sort3<bool (*&)(XString const&, XString const&), XString*>(
                    x21, x23_1, x22 - 8, arg3)
            else
                int64_t x8_2
                
                if (x8_1 s< 0)
                    x8_2 = x8_1 + 3
                else
                    x8_2 = x8_1
                
                int64_t x8_4 = x8_2 << 1 & 0xfffffffffffffff8
                x0_1 = sub_1044bdc(x21, x21 + x8_4, x23_1, x23_1 + x8_4, x22 - 8, arg3)
            
            int32_t x24_1 = x0_1
            XString* x25_1
            void* __offset(XString, -0x8) x26_2
            
            if (((*arg3)(x21, x23_1) & 1) == 0)
                void* __offset(XString, -0x10) x25_2 = x22 - 0x10
                int32_t x0_6
                
                do
                    if (x21 == x25_2)
                        void* __offset(XString, 0x10) x23_3 = x21 + 8
                        
                        if (((*arg3)(x21, x22 - 8).d & 1) == 0)
                            if (x23_3 == x22 - 8)
                                goto label_10448d8
                            
                            x23_3 = x21 + 0x10
                            
                            while (((*arg3)(x21, x23_3 - 8).d & 1) == 0)
                                x23_3 += 8
                                
                                if (x22 == x23_3)
                                    return 
                            
                            XString::XString(&var_68)
                            XString::operator=(x23_3 - 8)
                            XString::operator=(x22 - 8)
                            XString::~XString()
                        
                        if (x23_3 == x22 - 8)
                            goto label_10448d8
                        
                        void* __offset(XString, -0x8) x24_3 = x22 - 8
                        
                        while (true)
                            int32_t x0_32 = (*arg3)(x21, x23_3)
                            x23_3 += 8
                            
                            if ((x0_32 & 1) != 0)
                                x26_1 = x23_3 - 8
                                
                                do
                                    x24_3 -= 8
                                    arg1 = (*arg3)(x21, x24_3)
                                while ((arg1.d & 1) != 0)
                                
                                if (x26_1 u>= x24_3)
                                    break
                                
                                XString::XString(&var_68)
                                XString::operator=(x26_1)
                                XString::operator=(x24_3)
                                XString::~XString()
                        
                        goto label_10444a8
                    
                    x0_6 = (*arg3)(x25_2, x23_1)
                    x25_2 -= 8
                while ((x0_6 & 1) == 0)
                XString::XString(&var_68)
                x26_2 = x25_2 + 8
                XString::operator=(x21)
                XString::operator=(x26_2)
                XString::~XString()
                x24_1 += 1
                x25_1 = x21 + 8
                
                if (x25_1 u>= x26_2)
                    goto label_1044550
                
                goto label_10445c0
            
            x26_2 = x22 - 8
            x25_1 = x21 + 8
            
            if (x25_1 u< x26_2)
            label_10445c0:
                void* __offset(XString, -0x8) x27_1
                
                while (true)
                    x27_1 = x25_1 - 8
                    int32_t x0_11
                    
                    do
                        x27_1 += 8
                        x0_11 = (*arg3)(x27_1, x23_1)
                    while ((x0_11 & 1) != 0)
                    x25_1 = x27_1 + 8
                    int32_t x0_13
                    
                    do
                        x26_2 -= 8
                        x0_13 = (*arg3)(x26_2, x23_1)
                    while ((x0_13 & 1) == 0)
                    
                    if (x27_1 u> x26_2)
                        break
                    
                    XString::XString(&var_68)
                    XString::operator=(x27_1)
                    XString::operator=(x26_2)
                    XString::~XString()
                    x24_1 += 1
                    
                    if (x23_1 == x27_1)
                        x23_1 = x26_2
                
                x25_1 = x27_1
                
                if (x25_1 != x23_1)
                    goto label_1044654
            else
            label_1044550:
                
                if (x25_1 != x23_1)
                label_1044654:
                    
                    if (((*arg3)(x23_1, x25_1) & 1) != 0)
                        XString::XString(&var_68)
                        XString::operator=(x25_1)
                        XString::operator=(x23_1)
                        XString::~XString()
                        x24_1 += 1
            
            if (x24_1 != 0)
            label_10446c8:
                
                if (x25_1 - x21 s>= x22 - x25_1)
                    std::__ndk1::__sort<bool (*&)(XString const&, XString const&), XString*>(
                        x25_1 + 8, x22, arg3)
                    x22 = x25_1
                    break
                
                std::__ndk1::__sort<bool (*&)(XString const&, XString const&), XString*>(x21, 
                    x25_1, arg3)
                x26_1 = x25_1 + 8
                continue
            else
                int32_t x0_23 = std::__ndk1::__insertion_sort_incomplete<bool (*&)(XString const&, XString const&), XString*>(
                    x21, x25_1, arg3)
                x26_1 = x25_1 + 8
                
                if ((std::__ndk1::__insertion_sort_incomplete<bool (*&)(XString const&, XString const&), XString*>(
                        x26_1, x22, arg3).d & 1) != 0)
                    x22 = x25_1
                    
                    if ((x0_23 & 1) == 0)
                        break
                else
                    if ((x0_23 & 1) == 0)
                        goto label_10446c8
                    
                    continue
    label_10448d8:
        return 
