// 函数: _Z23NetBufferGetReceiveDataR6NetLocPhib
// 地址: 0xf8550c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x26
void* var_40 = entry_x26
void* __offset(NetLoc, 0x58) entry_x25
void* __offset(NetLoc, 0x58) var_38 = entry_x25
uint8_t* entry_x23
uint8_t* var_28 = entry_x23
int32_t* entry_x21
int32_t* var_18 = entry_x21
uint64_t entry_x20
uint64_t var_10 = entry_x20
NetLoc& entry_x19
NetLoc& var_8 = entry_x19
int32_t var_64 = arg4.d
void* x22 = *(arg1 + 0x50)

if (x22 == 0)
label_f85670:
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
    entry_x20 = zx.q(arg3)
    entry_x19 = arg1
    entry_x23 = arg2
    entry_x25 = arg1 + 0x58
    
    if ((var_64 & 1) == 0)
        while (true)
            entry_x26 = *x22
            entry_x21 = entry_x26 + 0xfdec
            size_t x2_1 = sx.q(*entry_x21)
            
            if (x2_1.d s>= entry_x20.d)
                break
            
            entry_x21 = entry_x26 + 0xfde8
            x22 = *(x22 + 8)
            memcpy(entry_x23, entry_x26 + sx.q(*entry_x21), x2_1)
            int64_t x8_17 = sx.q(entry_x21[1])
            entry_x20 = zx.q(entry_x20.d - x8_17.d)
            entry_x23 = &entry_x23[x8_17]
            
            if (x22 == 0)
                goto label_f85670
    else
        while (true)
            entry_x26 = *x22
            entry_x21 = entry_x26 + 0xfdec
            int64_t x2 = sx.q(*entry_x21)
            
            if (x2.d s>= entry_x20.d)
                break
            
            void* x27_1 = *(x22 + 8)
            memcpy(entry_x23, entry_x26 + sx.q(*(entry_x26 + 0xfde8)), x2)
            void* x8_3 = *(x22 + 0x10)
            int64_t x9_1 = sx.q(*(entry_x26 + 0xfdec))
            void* __offset(NetLoc, 0x50) x8_5
            
            if (x8_3 == 0)
                x8_5 = arg1 + 0x50
            else
                x8_5 = x8_3 + 8
            
            *x8_5 = *(x22 + 8)
            void* x8_6 = *(x22 + 8)
            entry_x20 = zx.q(entry_x20.d - x9_1.d)
            entry_x23 = &entry_x23[x9_1]
            void* __offset(NetLoc, 0x58) x8_8
            
            if (x8_6 == 0)
                x8_8 = entry_x25
            else
                x8_8 = x8_6 + 0x10
            
            *x8_8 = *(x22 + 0x10)
            *(entry_x19 + 0x60) -= 1
            XPooledFree(x22, 0x18)
            entry_x21 = *gNetwork
            void** x0_2 = XPooledCalloc(0x18)
            *x0_2 = entry_x26
            x0_2[1] = 0
            x22 = x27_1
            x0_2[2] = *(entry_x21 + 0x70)
            void* x8_12 = *(entry_x21 + 0x70)
            void*** x8_13
            
            if (x8_12 == 0)
                x8_13 = &entry_x21[0x1a]
            else
                x8_13 = x8_12 + 8
            
            *x8_13 = x0_2
            int32_t x8_14 = entry_x21[0x1e]
            *(entry_x21 + 0x70) = x0_2
            entry_x21[0x1e] = x8_14 + 1
            
            if (x27_1 == 0)
                goto label_f85670

void** result = memcpy(entry_x23, entry_x26 + sx.q(*(entry_x26 + 0xfde8)), sx.q(entry_x20.d))

if ((var_64 & 1) != 0)
    int32_t x8_20 = *entry_x21
    
    if (x8_20 != entry_x20.d)
        *(entry_x26 + 0xfde8) += entry_x20.d
        *entry_x21 = x8_20 - entry_x20.d
    else
        void* x8_22 = *(x22 + 0x10)
        int64_t* x8_23
        
        if (x8_22 == 0)
            x8_23 = arg1 + 0x50
        else
            x8_23 = x8_22 + 8
        
        *x8_23 = *(x22 + 8)
        void* x8_24 = *(x22 + 8)
        int64_t* x8_25
        
        if (x8_24 == 0)
            x8_25 = entry_x25
        else
            x8_25 = x8_24 + 0x10
        
        *x8_25 = *(x22 + 0x10)
        *(entry_x19 + 0x60) -= 1
        XPooledFree(x22, 0x18)
        void* x19 = *gNetwork
        result = XPooledCalloc(0x18)
        *result = entry_x26
        result[1] = 0
        result[2] = *(x19 + 0x70)
        void* x8_29 = *(x19 + 0x70)
        void* x8_30
        
        if (x8_29 == 0)
            x8_30 = x19 + 0x68
        else
            x8_30 = x8_29 + 8
        
        *x8_30 = result
        int32_t x8_31 = *(x19 + 0x78)
        *(x19 + 0x70) = result
        *(x19 + 0x78) = x8_31 + 1

return result
