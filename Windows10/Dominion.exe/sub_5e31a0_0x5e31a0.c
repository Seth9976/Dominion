// 函数: sub_5e31a0
// 地址: 0x5e31a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c
char const* const ecx

if (arg2 s<= 0)
    char const* const var_8 = "GetSplitPosition"
    var_c = 0x472e
    ecx = "total > 0"
else if (arg2 != 1)
    bool cond:0_1
    
    if (arg2 == 2)
        arg1 = arg4
        *arg1 = 0x3f59999a
        
        if (arg3 == 0)
        label_5e3216:
            arg5[1] = 0x429e0000
            *arg5 = 0x42a60000
            return arg5
        
        cond:0_1 = arg3 == 1
    label_5e3224:
        
        if (cond:0_1)
            goto label_5e31ea
        
        goto label_5e3226
    
    if (arg2 == 3)
        arg1 = arg4
        *arg1 = 0x3f39999a
        
        if (arg3 == 0)
        label_5e327b:
            arg5[1] = 0x431e0000
            *arg5 = 0x43260000
            return arg5
        
        if (arg3 == 1)
            goto label_5e3216
        
        cond:0_1 = arg3 == 2
        goto label_5e3224
    
    if (arg2 != 4)
    label_5e3226:
        char const* const var_8_2 = "GetSplitPosition"
        var_c = 0x477a
        ecx = "Halt"
    else
        arg1 = arg4
        __builtin_strncpy(arg1, "ff&?", 4)
        
        if (arg3 == 0)
            arg5[1] = 0x436d0000
            *arg5 = 0x43790000
            return arg5
        
        if (arg3 == 1)
            goto label_5e327b
        
        if (arg3 == 2)
            goto label_5e3216
        
        if (arg3 == 3)
            goto label_5e31ea
        
        char const* const var_8_3 = "GetSplitPosition"
        var_c = 0x4774
        ecx = "idx == 3"
else
    if (arg3 == 0)
        *arg4 = 0x3f800000
    label_5e31ea:
        *arg5 = 0
        arg5[1] = 0
        return arg5
    
    char const* const var_8_1 = "GetSplitPosition"
    var_c = 0x4732
    ecx = "idx == 0"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_c, 
    "GetSplitPosition")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
