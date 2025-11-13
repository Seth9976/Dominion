// 函数: sub_f5448c
// 地址: 0xf5448c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)

if (arg2 == arg1)
    goto label_f54558

int64_t* x20_1 = arg1
arg1 = arg1[4]

if (arg1 == x20_1)
    if (*(arg2 + 0x20) == arg2)
        void* var_50
        (*(*arg1 + 0x18))(arg1, &var_50)
        (*(*x20_1[4] + 0x20))()
        x20_1[4] = 0
        int64_t* x0_4 = *(arg2 + 0x20)
        (*(*x0_4 + 0x18))(x0_4, x20_1)
        (*(**(arg2 + 0x20) + 0x20))()
        *(arg2 + 0x20) = 0
        x20_1[4] = x20_1
        (*(var_50 + 0x18))(&var_50, arg2)
        (*(var_50 + 0x20))(&var_50)
    else
        (*(*arg1 + 0x18))(arg1, arg2)
        (*(*x20_1[4] + 0x20))()
        x20_1[4] = *(arg2 + 0x20)
    
    *(arg2 + 0x20) = arg2
    
    if (*(x21 + 0x28) == x8)
        return 
else
    int64_t* x8_1 = *(arg2 + 0x20)
    
    if (arg2 == x8_1)
        (*(*x8_1 + 0x18))(x8_1, x20_1)
        (*(**(arg2 + 0x20) + 0x20))()
        *(arg2 + 0x20) = x20_1[4]
        x20_1[4] = x20_1
    label_f54558:
        
        if (*(x21 + 0x28) == x8)
            return 
    else
        x20_1[4] = x8_1
        *(arg2 + 0x20) = arg1
        
        if (*(x21 + 0x28) == x8)
            return 

__stack_chk_fail()
noreturn
