// 函数: _Z13DomMapDisposev
// 地址: 0xc14388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MutexLock(gMapGlobals + 0x68)
void* x20 = *(gMapGlobals + 0x90)
int64_t* x21 = x20 + 0x21b100
int64_t* i_2 = *x21
void* x22 = x20 + 0x21b0f8

if (i_2 != 0)
    int64_t* i
    
    do
        i = *i_2
        XFree(i_2)
        i_2 = i
    while (i != 0)
    x20 = *(gMapGlobals + 0x90)

*(x21 + 0xc) = 0
*x22 = 0
*(x22 + 8) = 0
x21[3].d = 0

if (x20 != 0)
    if ((XPooledShutdown() & 1) == 0)
        void* x0_2 = *(x20 + 0x21b110)
        
        if (x0_2 != 0)
            int32_t x9_1 = *(x20 + 0x21b11c)
            *(x20 + 0x21b118) = 0
            XPooledFree(x0_2, x9_1 << 3)
    
    XPooledFree(*(gMapGlobals + 0x90), 0x21b140)
    *(gMapGlobals + 0x90) = 0

MutexUnlock(gMapGlobals + 0x68)
void* i_3 = *(gMapGlobals + 0x28)

if (i_3 != 0)
    void* i_1
    
    do
        i_1 = *(i_3 + 8)
        XPooledFree(i_3, 0x18)
        i_3 = i_1
    while (i_1 != 0)

void* x0_5 = *gMapGlobals
*(gMapGlobals + 0x28) = 0
*(gMapGlobals + 0x30) = 0
*(gMapGlobals + 0x38) = 0

if (x0_5 != 0)
    uint64_t x9_2 = zx.q(*(gMapGlobals + 8))
    
    if (x9_2.d != 0)
        int64_t x9_3 = x0_5 + x9_2 * 0x5118
        void* x11_1 = x0_5
        
        while (true)
            int32_t x12_3 = *(x11_1 + 0x5110)
            
            if (x12_3 u>> 0x10 != 0)
                *(x11_1 + 0x5110) = *(gMapGlobals + 0x10)
                x11_1 += 0x5118
                int32_t x12_2 = *(gMapGlobals + 0x14) - 1
                *(gMapGlobals + 0x10) = x12_3 & 0xffff
                *(gMapGlobals + 0x14) = x12_2
                
                if (x9_3 u<= x11_1)
                    break
            else
                x11_1 += 0x5118
                
                if (x11_1 u>= x9_3)
                    break
    
    *(gMapGlobals + 8) = 0
    *(gMapGlobals + 0x10) = 0
    XFree(x0_5)
    *(gMapGlobals + 0x20) = 0
    *(gMapGlobals + 8) = 0
    *(gMapGlobals + 0x10) = 0
    *gMapGlobals = 0

MutexDispose(gMapGlobals + 0x40)
return MutexDispose(gMapGlobals + 0x68) __tailcall
