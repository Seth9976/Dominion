// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIwEE
// 地址: 0x10bfda8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = *arg2
int64_t* x20 = arg2

if (result == 0)
    goto label_10bfe24

int32_t* x8_1 = *(result + 0x18)

if (x8_1 != *(result + 0x20))
    result = zx.q(*x8_1)
    
    if (result.d == 0xffffffff)
        goto label_10bfe20
    
    goto label_10bfdf8

result = (*(*result + 0x48))()
int32_t x23

if (result.d != 0xffffffff)
label_10bfdf8:
    x23 = *x20 == 0 ? 1 : 0
    
    if (arg3 != 0)
        goto label_10bfe2c
    
    goto label_10bfe00

label_10bfe20:
*x20 = 0
label_10bfe24:
x23 = 1
uint32_t& x21_1

if (arg3 == 0)
label_10bfe00:
    
    if ((x23 & 1) != 0)
        *arg4 |= 6
    else
        x21_1 = nullptr
    label_10bfe64:
        int64_t* x0_1 = *x20
        int32_t* x8_10 = x0_1[3]
        uint64_t x1
        
        if (x8_10 == x0_1[4])
            x1 = zx.q((*(*x0_1 + 0x48))())
        else
            x1 = zx.q(*x8_10)
        
        int64_t* entry_x4
        result = (*(*entry_x4 + 0x68))(entry_x4, x1, 0)
        
        if ((result.d & 0xff) != 0x25)
            *arg4 |= 4
        else
            result = *x20
            int64_t x8_18 = *(result + 0x18)
            
            if (x8_18 == *(result + 0x20))
                (*(*result + 0x50))()
                result = *x20
                
                if (result == 0)
                    goto label_10bff48
                
                goto label_10bfef4
            
            *(result + 0x18) = x8_18 + 4
        label_10bfef4:
            int32_t* x8_23 = *(result + 0x18)
            
            if (x8_23 != *(result + 0x20))
                result = zx.q(*x8_23)
                
                if (result.d == 0xffffffff)
                    goto label_10bff44
                
                goto label_10bff14
            
            result = (*(*result + 0x48))()
            int32_t x20_1
            
            if (result.d != 0xffffffff)
            label_10bff14:
                x20_1 = *x20 == 0 ? 1 : 0
                
                if (x21_1 == 0)
                    goto label_10bff50
                
                goto label_10bff1c
            
        label_10bff44:
            *x20 = 0
        label_10bff48:
            x20_1 = 1
            
            if (x21_1 != 0)
            label_10bff1c:
                int32_t* x8_25 = *(x21_1 + 0x18)
                
                if (x8_25 == *(x21_1 + 0x20))
                    result = (*(*x21_1 + 0x48))(x21_1)
                else
                    result = zx.q(*x8_25)
                
                if (((x20_1 ^ (result.d == 0xffffffff ? 1 : 0)) & 1) == 0)
                    *arg4 |= 2
            else
            label_10bff50:
                
                if ((x20_1 & 1) != 0)
                    *arg4 |= 2
else
label_10bfe2c:
    int32_t* x8_5 = *(arg3 + 0x18)
    
    if (x8_5 == *(arg3 + 0x20))
        result = (*(*arg3 + 0x48))(arg3)
    else
        result = zx.q(*x8_5)
    
    x21_1 = result.d == 0xffffffff ? nullptr : arg3
    
    if (((x23 ^ (result.d == 0xffffffff ? 1 : 0)) & 1) != 0)
        goto label_10bfe64
    
    *arg4 |= 6
return result
