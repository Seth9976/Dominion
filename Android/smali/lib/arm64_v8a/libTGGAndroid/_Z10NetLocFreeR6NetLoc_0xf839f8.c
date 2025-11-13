// 函数: _Z10NetLocFreeR6NetLoc
// 地址: 0xf839f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x1 = *(arg1 + 0x20)
NetLoc& x19 = arg1

if (x1 == 0xffffffff)
    goto label_f83a64

uint64_t x8_1 = zx.q(*(x19 + 0x24))

if (x8_1.d u> 5)
    pthread_kill(pthread_self(), 6)
    sub_c776cc(XNoReturn())
    noreturn

int64_t* x0_3
int64_t x8_6
int32_t i
void* __offset(NetLoc, 0x50) x20_1

switch (x8_1)
    case 0
        x0_3 = *gNetworkInterface
        x8_6 = *(*x0_3 + 0x18)
    label_f83b60:
        x8_6(x0_3, x1)
        i = *(x19 + 0x60)
        x20_1 = x19 + 0x50
        
        if (i != 0)
            goto label_f83c54
    case 1, 2
        (*(**gNetworkInterface + 0x68))()
    label_f83a60:
        NetConnectionClosed(x19)
    label_f83a64:
        i = *(x19 + 0x60)
        x20_1 = x19 + 0x50
        
        if (i != 0)
        label_f83c54:
            
            do
                void* x0_6 = *x20_1
                void* x9_6 = *(x0_6 + 8)
                *x20_1 = x9_6
                
                if (x9_6 == 0)
                    *(x19 + 0x58) = 0
                else
                    *(x9_6 + 0x10) = 0
                    i = *(x19 + 0x60)
                
                int64_t x22_3 = *x0_6
                *(x19 + 0x60) = i - 1
                XPooledFree(x0_6, 0x18)
                uint64_t x23_1 = *gNetwork
                arg1 = XPooledCalloc(0x18)
                *arg1 = x22_3
                *(arg1 + 8) = 0
                *(arg1 + 0x10) = *(x23_1 + 0x70)
                void* x8_20 = *(x23_1 + 0x70)
                NetLoc** x8_21
                
                if (x8_20 == 0)
                    x8_21 = x23_1 + 0x68
                else
                    x8_21 = x8_20 + 8
                
                *x8_21 = arg1
                int32_t x8_22 = *(x23_1 + 0x78)
                *(x23_1 + 0x70) = arg1
                *(x23_1 + 0x78) = x8_22 + 1
                i = *(x19 + 0x60)
            while (i != 0)
    case 3, 4
        uint64_t x8_4 = *gNetwork
        int32_t x9_1 = *(x8_4 + 0x90)
        int32_t* x20_2
        int128_t v0_1
        int128_t v1_1
        
        if (x9_1 == 0)
            int32_t* x0_4
            x0_4, v0_1, v1_1 = XCalloc(0xed70)
            x20_2 = x0_4
        else
            void* x0_2 = *(x8_4 + 0x88)
            void* x10_2 = *(x0_2 + 0x10)
            *(x8_4 + 0x88) = x10_2
            
            if (x10_2 == 0)
                *(x8_4 + 0x80) = 0
            else
                *(x10_2 + 8) = 0
                x9_1 = *(x8_4 + 0x90)
            
            x20_2 = *x0_2
            *(x8_4 + 0x90) = x9_1 - 1
            v0_1, v1_1 = XPooledFree(x0_2, 0x18)
        x20_2[1] = 0xfa2
        int32_t x8_7 = *(x19 + 0x88)
        x20_2[2] = 0
        *x20_2 = x8_7
        v0_1 = *(x19 + 0x10)
        *(x20_2 + 0xed48) = *x19
        *(x20_2 + 0xed58) = v0_1
        void* x22_1 = *gNetwork
        void** x0_5 = XPooledCalloc(0x18)
        *x0_5 = x20_2
        x0_5[1] = 0
        x0_5[2] = *(x22_1 + 0x58)
        void* x8_10 = *(x22_1 + 0x58)
        void* x8_11
        
        if (x8_10 == 0)
            x8_11 = x22_1 + 0x50
        else
            x8_11 = x8_10 + 8
        
        *x8_11 = x0_5
        int32_t x8_12 = *(x22_1 + 0x60)
        *(x22_1 + 0x58) = x0_5
        *(x22_1 + 0x60) = x8_12 + 1
        *(x19 + 0x3c) = 5
        x1 = *(x19 + 0x20)
        x0_3 = *gNetworkInterface
        x8_6 = *(*x0_3 + 0x68)
        goto label_f83b60
    case 5
        goto label_f83a60

int32_t i_1 = *(x19 + 0x78)

if (i_1 != 0)
    do
        void* x0_7 = *(x19 + 0x68)
        void* x9_8 = *(x0_7 + 8)
        *(x19 + 0x68) = x9_8
        
        if (x9_8 == 0)
            *(x19 + 0x70) = 0
        else
            *(x9_8 + 0x10) = 0
            i_1 = *(x19 + 0x78)
        
        int64_t x23_2 = *x0_7
        *(x19 + 0x78) = i_1 - 1
        XPooledFree(x0_7, 0x18)
        uint64_t x24_1 = *gNetwork
        arg1 = XPooledCalloc(0x18)
        *arg1 = x23_2
        *(arg1 + 8) = 0
        *(arg1 + 0x10) = *(x24_1 + 0x70)
        void* x8_26 = *(x24_1 + 0x70)
        NetLoc** x8_27
        
        if (x8_26 == 0)
            x8_27 = x24_1 + 0x68
        else
            x8_27 = x8_26 + 8
        
        *x8_27 = arg1
        int32_t x8_28 = *(x24_1 + 0x78)
        *(x24_1 + 0x70) = arg1
        *(x24_1 + 0x78) = x8_28 + 1
        i_1 = *(x19 + 0x78)
    while (i_1 != 0)

void* i_2 = *(x19 + 0x68)
void* x21 = *gNetwork

while (i_2 != 0)
    void* i_4 = i_2
    i_2 = *(i_2 + 8)
    XPooledFree(i_4, 0x18)

__builtin_memset(x19 + 0x68, 0, 0x14)
void* i_3 = *x20_1

while (i_3 != 0)
    void* i_5 = i_3
    i_3 = *(i_3 + 8)
    XPooledFree(i_5, 0x18)

__builtin_memset(x20_1, 0, 0x14)
int32_t x9_4 = *(x21 + 0x10)
*(x21 + 0x10) = zx.d(*(x19 + 0x88))
*(x19 + 0x88) = x9_4
*(x21 + 0x14) -= 1
