// 函数: _ZNK5Botan5TimerltERKS0_
// 地址: 0xe90e08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(*(arg1 + 0x18))
char* entry_x1
uint64_t x26 = zx.q(entry_x1[0x18])
uint64_t x8 = x25 u>> 1
uint64_t x21

if ((x25.d & 1) == 0)
    x21 = x8
else
    x21 = *(arg1 + 0x20)

uint64_t x22

if ((x26.d & 1) == 0)
    x22 = x26 u>> 1
else
    x22 = *(entry_x1 + 0x20)

int32_t x0_3
int32_t x8_3
bool cond:1_1

if (x21 != x22)
label_e90eb8:
    uint64_t x2_2
    
    x2_2 = x22 u< x21 ? x22 : x21
    
    if (x2_2 != 0)
        void* __offset(Botan::Timer, 0x19) x0_2
        
        if ((x25.d & 1) != 0)
            x0_2 = *(arg1 + 0x28)
        else
            x0_2 = arg1 + 0x19
        
        void* x1_1
        
        if ((x26.d & 1) != 0)
            x1_1 = *(entry_x1 + 0x28)
        else
            x1_1 = &entry_x1[0x19]
        
        x0_3 = memcmp(x0_2, x1_1, x2_2)
    
    if (x2_2 == 0 || x0_3 == 0)
        x8_3 = x22 u< x21 ? 1 : 0
        cond:1_1 = x21 u>= x22
    label_e90f50:
        
        x0_3 = cond:1_1 ? x8_3 : -1
else
    int32_t x11_1 = x25.d & 1
    void* __offset(Botan::Timer, 0x19) x0
    
    if (x11_1 != 0)
        x0 = *(arg1 + 0x28)
    else
        x0 = arg1 + 0x19
    
    void* x1
    
    if ((x26.d & 1) != 0)
        x1 = *(entry_x1 + 0x28)
    else
        x1 = &entry_x1[0x19]
    
    if (x11_1 != 0)
        if (x21 != 0 && memcmp(x0, x1, x21) != 0)
            goto label_e90eb8
    else if (x21 != 0)
        void* __offset(Botan::Timer, 0x19) x9_2 = arg1 + 0x19
        
        while (zx.d(*x9_2) == zx.d(*x1))
            uint64_t temp0_1 = x8
            x8 -= 1
            x9_2 += 1
            x1 += 1
            
            if (temp0_1 == 1)
                goto label_e90ef0
        
        goto label_e90eb8
    
label_e90ef0:
    uint64_t x8_2 = zx.q(*entry_x1)
    uint64_t x9_4 = zx.q(*arg1)
    uint64_t x21_1
    
    if ((x8_2.d & 1) == 0)
        x21_1 = x8_2 u>> 1
    else
        x21_1 = *(entry_x1 + 8)
    
    uint64_t x22_1
    
    if ((x9_4.d & 1) == 0)
        x22_1 = x9_4 u>> 1
    else
        x22_1 = *(arg1 + 8)
    
    uint64_t x2_3
    
    x2_3 = x21_1 u< x22_1 ? x21_1 : x22_1
    
    if (x2_3 != 0)
        void* __offset(Botan::Timer, 0x1) x0_4
        
        if ((x9_4.d & 1) != 0)
            x0_4 = *(arg1 + 0x10)
        else
            x0_4 = arg1 + 1
        
        void* x1_2
        
        if ((x8_2.d & 1) != 0)
            x1_2 = *(entry_x1 + 0x10)
        else
            x1_2 = &entry_x1[1]
        
        x0_3 = memcmp(x0_4, x1_2, x2_3)
    
    if (x2_3 == 0 || x0_3 == 0)
        x8_3 = x21_1 u< x22_1 ? 1 : 0
        cond:1_1 = x22_1 u>= x21_1
        goto label_e90f50
return zx.q(x0_3 u>> 0x1f)
