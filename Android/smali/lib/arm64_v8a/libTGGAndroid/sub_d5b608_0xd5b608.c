// 函数: sub_d5b608
// 地址: 0xd5b608
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21 = arg5
char* arg_488 = arg2

if (x21 != 0)
    char* x0 = x21
    
    if (x21 != arg2)
        char* x22_1 = arg2
        
        do
            x22_1 = &x22_1[-0x18]
            
            if ((zx.d(*x22_1) & 1) != 0)
                operator delete(*(arg2 - 8))
            
            arg2 = x22_1
        while (x21 != x22_1)
        
        x0 = arg5
    
    arg_488 = x21
    operator delete(x0)
    x21 = nullptr
    
    if ((zx.d(arg3) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

if ((zx.d(arg3) & 1) != 0)
label_d5bbb4:
    operator delete(arg4)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d5b864
    
    goto label_d5bbc4

label_d5b860:

if ((zx.d(arg6) & 1) != 0)
label_d5bbc4:
    operator delete(arg7)
    
    if (x21 != 0)
    label_d5bbdc:
        void arg_0
        void* x21_1 = &arg_0 + x21 * 0x30
        bool cond:2_1
        
        do
            void* x23_1 = *(x21_1 - 0x18)
            
            if (x23_1 != 0)
                char* x8_6 = *(x21_1 - 0x10)
                void* x0_5
                
                if (x8_6 == x23_1)
                    x0_5 = x23_1
                else
                    char* x24_1 = x8_6
                    
                    do
                        x24_1 = &x24_1[-0x18]
                        
                        if ((zx.d(*x24_1) & 1) != 0)
                            operator delete(*(x8_6 - 8))
                        
                        x8_6 = x24_1
                    while (x23_1 != x24_1)
                    
                    x0_5 = *(x21_1 - 0x18)
                
                *(x21_1 - 0x10) = x23_1
                operator delete(x0_5)
            
            if ((zx.d(*(x21_1 - 0x30)) & 1) != 0)
                operator delete(*(x21_1 - 0x20))
            
            cond:2_1 = x21_1 - 0x30 == &arg_0
            x21_1 -= 0x30
        while (not(cond:2_1))
else
label_d5b864:
    
    if (x21 != 0)
        goto label_d5bbdc

sub_1101e04(arg1)
noreturn
