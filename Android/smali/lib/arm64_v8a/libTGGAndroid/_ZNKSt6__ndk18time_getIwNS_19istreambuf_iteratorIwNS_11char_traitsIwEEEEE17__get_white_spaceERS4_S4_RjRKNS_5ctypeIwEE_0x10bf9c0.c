// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE
// 地址: 0x10bf9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t& x20 = arg3
int64_t* x21 = arg2
int64_t* x0 = *x21

if (x0 != 0)
    goto label_10bfa04

label_10bfa48:
int32_t x23_1 = 1

if (x20 == 0)
label_10bfa88:
    x20 = nullptr
    
    if ((x23_1 & 1) == 0)
        goto label_10bfa90
else
    while (true)
        int32_t* x8_6 = *(x20 + 0x18)
        
        if (x8_6 == *(x20 + 0x20))
            if ((*(*x20 + 0x48))(x20) == 0xffffffff)
                goto label_10bfa88
        else if (*x8_6 == 0xffffffff)
            goto label_10bfa88
        
        if (x23_1 == 0)
            break
        
    label_10bfa90:
        int64_t* x0_6 = *x21
        int32_t* x8_9 = x0_6[3]
        uint64_t x2
        
        if (x8_9 == x0_6[4])
            x2 = zx.q((*(*x0_6 + 0x48))())
        else
            x2 = zx.q(*x8_9)
        
        int64_t* entry_x4
        
        if (((*(*entry_x4 + 0x18))(entry_x4, 1, x2) & 1) == 0)
            break
        
        int64_t* x0_10 = *x21
        int64_t x8_14 = x0_10[3]
        
        if (x8_14 != x0_10[4])
            x0_10[3] = x8_14 + 4
            x0 = *x21
            
            if (x0 == 0)
                goto label_10bfa48
        else
            (*(*x0_10 + 0x50))()
            x0 = *x21
            
            if (x0 == 0)
                goto label_10bfa48
        
    label_10bfa04:
        int32_t* x8_2 = x0[3]
        
        if (x8_2 != x0[4])
            if (*x8_2 != 0xffffffff)
                goto label_10bfa24
            
            *x21 = 0
            goto label_10bfa48
        
        if ((*(*x0 + 0x48))() == 0xffffffff)
            *x21 = 0
            goto label_10bfa48
        
    label_10bfa24:
        x23_1 = *x21 == 0 ? 1 : 0
        
        if (x20 == 0)
            goto label_10bfa88

uint64_t result = *x21

if (result == 0)
    goto label_10bfb48

int32_t* x8_17 = *(result + 0x18)

if (x8_17 != *(result + 0x20))
    result = zx.q(*x8_17)
    
    if (result.d == 0xffffffff)
        goto label_10bfb44
    
    goto label_10bfb20

result = (*(*result + 0x48))()
int32_t x21_1

if (result.d != 0xffffffff)
label_10bfb20:
    x21_1 = *x21 == 0 ? 1 : 0
    
    if (x20 != 0)
        goto label_10bfb50
    
    goto label_10bfb28

label_10bfb44:
*x21 = 0
label_10bfb48:
x21_1 = 1

if (x20 == 0)
label_10bfb28:
    
    if ((x21_1 & 1) != 0)
        *arg4 |= 2
else
label_10bfb50:
    int32_t* x8_21 = *(x20 + 0x18)
    
    if (x8_21 == *(x20 + 0x20))
        result = (*(*x20 + 0x48))(x20)
    else
        result = zx.q(*x8_21)
    
    if (((x21_1 ^ (result.d == 0xffffffff ? 1 : 0)) & 1) == 0)
        *arg4 |= 2

return result
