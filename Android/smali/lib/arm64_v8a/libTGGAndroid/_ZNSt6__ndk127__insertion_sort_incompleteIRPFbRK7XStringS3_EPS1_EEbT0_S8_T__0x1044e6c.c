// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK7XStringS3_EPS1_EEbT0_S8_T_
// 地址: 0x1044e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 3
char x8_2
void var_48

if (x8_1 u> 5)
    XString* x22_1 = arg1 + 0x10
    char x9_1 = std::__ndk1::__sort3<bool (*&)(XString const&, XString const&), XString*>(arg1, 
        arg1 + 8, x22_1, arg3)
    void* __offset(XString, 0x8) x8_4 = arg1 + 0x18
    char x8_8
    
    if (x8_4 == arg2)
    label_104504c:
        x8_8 = 1
    else
        int64_t x23_1 = 0
        int32_t x24_1 = 0
        
        while (true)
            XString* x1_5 = x22_1
            x22_1 = x8_4
            int32_t x0_8
            x0_8, x9_1 = (*arg3)(x8_4, x1_5)
            
            if ((x0_8 & 1) != 0)
                XString::XString(&var_48)
                int64_t x25_1 = x23_1
                void* x0_13
                
                while (true)
                    XString::operator=(arg1 + x25_1 + 0x18)
                    
                    if (x25_1 == -0x10)
                        x0_13 = arg1
                        break
                    
                    int32_t x0_12 = (*arg3)(&var_48, arg1 + x25_1 + 8)
                    x25_1 -= 8
                    
                    if ((x0_12 & 1) == 0)
                        x0_13 = arg1 + x25_1 + 0x18
                        break
                
                XString::operator=(x0_13)
                x24_1 += 1
                x9_1 = XString::~XString()
                
                if (x24_1 == 8)
                    x8_8 = 0
                    x9_1 = (x22_1 + 8 == arg2 ? 1 : 0).b
                    break
            
            x8_4 = x22_1 + 8
            x23_1 += 8
            
            if (x8_4 == arg2)
                goto label_104504c
    
    x8_2 = x8_8 | x9_1
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            if (((*arg3)(arg2 - 8, arg1) & 1) != 0)
                XString::XString(&var_48)
                XString::operator=(arg1)
                XString::operator=(arg2 - 8)
                XString::~XString()
            
            x8_2 = 1
        case 3
            std::__ndk1::__sort3<bool (*&)(XString const&, XString const&), XString*>(arg1, 
                arg1 + 8, arg2 - 8, arg3)
            x8_2 = 1
        case 4
            std::__ndk1::__sort4<bool (*&)(XString const&, XString const&), XString*>(arg1, 
                arg1 + 8, arg1 + 0x10, arg2 - 8, arg3)
            x8_2 = 1
        case 5
            sub_1044bdc(arg1, arg1 + 8, arg1 + 0x10, arg1 + 0x18, arg2 - 8, arg3)
            x8_2 = 1
return x8_2 & 1
