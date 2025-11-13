// 函数: _Z19ClickStateAllocHandR10Controller12ButtonSourceR14ClickStateInfo10ButtonHand
// 地址: 0xc80c24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = arg2
*(arg3 + 4) = arg4
char** x8_3

if (arg4 == 0)
    uint64_t x9_2 = zx.q(arg2 - 0x24)
    x8_3 = arg1 + (sx.q(arg2) - 0x24) * 0x330 + 0x72d0
    *(arg3 + 8) = x8_3
    
    if (x9_2.d u<= 6)
        switch (x9_2)
            case 1
                *x8_3 = "lh oc touch b"
                return 
            case 2
                *x8_3 = "lh oc touch trigger"
                return 
            case 3
                *x8_3 = "lh vive trigger"
                return 
            case 4
                *x8_3 = "lh vive grip"
                return 
            case 5
                *x8_3 = "lh vive trackpad"
                return 
            case 6
                *x8_3 = "lh vive menu"
                return 
        
        *x8_3 = "lh oc touch a"
        return 
else
    uint64_t x9 = zx.q(arg2 - 0x24)
    x8_3 = arg1 + (sx.q(arg2) - 0x24) * 0x330 + 0x8c50
    *(arg3 + 8) = x8_3
    
    if (x9.d u<= 6)
        char const* const x9_1 = "rh oc touch a"
        
        switch (x9)
            case 1
                x9_1 = "rh oc touch b"
            case 2
                *x8_3 = "rh oc touch trigger"
                return 
            case 3
                *x8_3 = "rh vive trigger"
                return 
            case 4
                *x8_3 = "rh vive grip"
                return 
            case 5
                *x8_3 = "rh vive trackpad"
                return 
            case 6
                *x8_3 = "rh vive menu"
                return 
        
        *x8_3 = x9_1
        return 
pthread_kill(pthread_self(), 6)
Controller* x0_1
ButtonSource* x1
int32_t x2
ClickStateInfo* x3
x0_1, x1, x2, x3 = XNoReturn()
return ClickStatesAlloc(x0_1, x1, x2, x3) __tailcall
