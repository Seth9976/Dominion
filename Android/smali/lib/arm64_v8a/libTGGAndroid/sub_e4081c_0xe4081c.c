// 函数: sub_e4081c
// 地址: 0xe4081c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if (arg6 == 0)
    x0 = *arg2
    
    if (x0 != 0)
        goto label_e40850
    
    goto label_e40830

void* arg_18 = arg6
operator delete(arg6)
x0 = *arg2
void* x19

if (x0 == 0)
label_e40830:
    x19 = *arg3
    
    if (x19 != 0)
    label_e40860:
        char* x8 = *(arg4 + 0x28)
        void* x0_2 = x19
        
        if (x8 != x19)
            char* x22_1 = x8
            
            do
                x22_1 = &x22_1[-0x18]
                
                if ((zx.d(*x22_1) & 1) != 0)
                    operator delete(*(x8 - 8))
                
                x8 = x22_1
            while (x19 != x22_1)
            
            x0_2 = *arg3
        
        *(arg4 + 0x28) = x19
        operator delete(x0_2)
else
label_e40850:
    *(arg4 + 0x40) = x0
    operator delete(x0)
    x19 = *arg3
    
    if (x19 != 0)
        goto label_e40860
void* x19_1 = *arg5

if (x19_1 != 0)
    void** x22_2 = *(arg4 + 0x10)
    void* x0_4 = x19_1
    
    if (x22_2 != x19_1)
        do
            x22_2 -= 0x38
            sub_f276a8(arg4 + 0x18, x22_2)
        while (x19_1 != x22_2)
        
        x0_4 = *arg5
    
    *(arg4 + 0x10) = x19_1
    operator delete(x0_4)

sub_1101e04(arg1)
noreturn
